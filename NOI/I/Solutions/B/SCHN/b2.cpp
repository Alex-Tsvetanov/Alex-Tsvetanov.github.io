#include <iostream>

int myabs(int num) {
	return num < 0 ? -num : num;
}

int getres(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
	if(x3 == x4)  { // the second is |
		/*
		 *   5     6     1
		 *        ---
		 *   4     3     2
		*/
		if(x3 > x2) {
			if(y3 > y1) { return (x3 - x2) + (y3 - y1); } // [1]
			else if(y4 < y1) { return (x3 - x2) + (y1 - y4); } // [2]
			return (x3 - x2); // [1] and [2]
		}
		if(x3 < x1) {
			if(y3 > y1) { return (x1 - x3) + (y3 - y1); } // [5]
			else if(y4 < y1) { return (x1 - x3) + (y1 - y4); } // [4]
			return (x1 - x3); // [5] and [4]
		}
		if(x3 >= x1 and x3 <= x2) {
			if(y3 > y1) { return (y3 - y1); } // [6]
			else if(y4 < y1) { return (y1 - y4); } // [3]
			return 0; // [6] and [3]
		}
	} else { // the second is  _
		if(x4 < x1) { return myabs(y1 - y3) + (x1 - x4); }
		if(x3 > x2) { return myabs(y1 - y3) + (x3 - x2); }
		return myabs(y1 - y3);
	}
	return -1; // TODO 0
}

int main() {
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;

	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cin >> x3 >> y3 >> x4 >> y4;

	// fix coordinates
	if(x1 == x2 and y1 > y2) std::swap(y1, y2);
	if(y1 == y2 and x1 > x2) std::swap(x1, x2);
	if(x3 == x4 and y3 > y4) std::swap(y3, y4);
	if(y3 == y4 and x3 > x4) std::swap(x3, x4);

	int res = 0;

	if(y1 == y2) { // the first is    _
		res = getres(x1, y1, x2, y2, x3, y3, x4, y4);
	}
	if(x1 == x2) { // the first is    |
		std::swap(x1, x3);
		std::swap(y1, y3);
		std::swap(x2, x4);
		std::swap(y2, y4);
		if(x1 == x2) { // special case
			if(y4 < y1) { res = (y1 - y4) + myabs(x1 - x3); }
			else if(y3 > y2) { res = (y3 - y2) + myabs(x1 - x3); }
			else { res = myabs(x1 - x3); }
		} else {
			res = getres(x1, y1, x2, y2, x3, y3, x4, y4);
		}
	}

	std::cout << res << std::endl;
	return 0;
}
