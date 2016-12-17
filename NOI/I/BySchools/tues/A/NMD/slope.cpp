#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Point {
	public:

	int x;
	int y;
	
	Point(int new_x = 0, int new_y = 0) {
		this->x = new_x;
		this->y = new_y;
	}
};

class Line {
	public:

	Point* start;
	Point* end;

	Line(Point* new_start = new Point(), Point* new_end = new Point()) {
		this->start = new_start;
		this->end = new_end;
	}

	~Line() {
		delete start;
		delete end;
	}

	Point* get_left_point() {
		return start->x < end->x ? start : end;
	}

	Point* get_right_point() {
		return start->x > end->x ? start : end;
	}

	Point* get_bottom_point() {
		return start->y < end->y ? start : end;
	}

	Point* get_top_point() {
		return start->y > end->y ? start : end;
	}

	double get_slope() {
		double slope = 0.0;

		if(start->y == end->y)
			return 0;
		else if(start->x == end->x)
			return 90;
		else {
			double x_diff = abs(start->x - end->x);
			double y_diff = abs(start->y - end->y);

			slope = atan(y_diff / x_diff);
		}


		Point* left = get_left_point();
		Point* right = get_right_point();

		if(left->y < right->y)
			return slope;
		else
			return -slope;
	}
};

bool vector_contains_number(vector<double>* vector, double number) {
	for(int i = 0; i < vector->size(); i++) {
		if(vector->at(i) == number)
			return true;
	}

	return false;
}

int main() {
	int lines_count;
	cin >> lines_count;

	Line* lines[lines_count];

	for(int i = 0; i < lines_count; i++) {
		int x1;
		int y1;
		int x2;
		int y2;

		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;

		lines[i] = new Line(new Point(x1, y1), new Point(x2, y2));
	}

	vector<double>* unique_lines = new vector<double>();

	for(int i = 0; i < lines_count; i++) {
		if(!vector_contains_number(unique_lines, lines[i]->get_slope())) {
			unique_lines->push_back(lines[i]->get_slope());
		}
	}

	cout << unique_lines->size();

	return 0;
}
