#include <iostream>
using namespace std;

struct Line
{
	int x1;
	int y1;
	int x2;
	int y2;
	float getAngle();
};

float Line::getAngle()
{
	return (float)(y2-y1)/(x2-x1);
}

int main()
{
	int N;
	cin >> N;

	Line lines[N];

	for(int i = 0; i < N; i++) {
		Line& l = lines[i];
		cin >> l.x1 >> l.y1 >> l.x2 >> l.y2;
	}

	float angles[N];
	bool vert = 0;

	int j = 0;
	for(int i = 0; i < N; i++) {
		Line& l = lines[i];
		if(l.x1 == l.x2) {
			vert = 1;
			continue;
		}
		float angle = l.getAngle();
		bool ex = 0;
		for(int q = 0; q < j; q++) {
			if(angles[q] == angle) {
				ex = 1;
				break;
			}
		}
		if(!ex)
			angles[j++] = angle;
	}

	cout << vert+j << endl;

	return 0;
}
