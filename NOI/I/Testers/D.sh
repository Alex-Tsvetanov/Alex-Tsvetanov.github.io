#!/bin/bash
group=D;
folder_with_tests=../tests/$group;

printf "person\ttask 1 (max 100)\ttask 2 (max 100)\ttask 3 (max 100)\ttotal (max 300)\n" >> $1;
for person in `ls ../Solutions/$group/` ;
do
	printf "%s\t" "$person" >> $1;
	points=0;
	for task in {"circles","klas","number"} ;
	do
		taskpoints=0;
		pointspertest=$((100/$((`ls $folder_with_tests/$task/tests/*.in | wc --lines`))));
		g++ ../Solutions/$group/$person/$task.cpp -o /tmp/$group_$task.exe -O2 -lm -static -std=c++11;
		for infile in `ls $folder_with_tests/$task/tests/*.in` ;
		do
			solfile=${infile%.*}.sol;
			timeout 1s /tmp/$group_$task.exe < $infile > /tmp/my_output;
			if [[ "`diff -w /tmp/my_output $solfile`" = "" ]]
			then
				points=$(($points + $pointspertest));
				taskpoints=$(($taskpoints + $pointspertest));
			fi
			rm /tmp/my_output;
		done
		rm /tmp/$group_$task.exe;
		printf "%d (%s)\t" $taskpoints "$task" >> $1;
	done
	printf "%d (total)\n" $points >> $1;
done
