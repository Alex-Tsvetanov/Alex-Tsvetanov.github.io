#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct line{
	int x1;
	int y1;
	int x2;
	int y2;
};

int get_y_diff(struct line l)
{
	if(l.x1 < l.x2){
		return l.y2 - l.y1;
	} else if (l.x1 > l.x2) {
		return l.y1 - l.y2;
	}else {
		return abs(l.y1 - l.y2);
	}
}

int get_x_diff(struct line l)
{
	return abs(l.x1 - l.x2);
}

int main()
{
	int n;
	cin >> n;
	struct line l;
	vector<double> v;
	int horiz = 0;
	int vertical = 0;

	for(int i = 0; i<n; i++)
	{
		cin >> l.x1 >> l.y1 >> l.x2 >> l.y2;
		if(l.y1 == l.y2) {
			horiz = 1;
			continue;
		}
		if(l.x1 == l.x2) {
			vertical = 1;
			continue;
		}

		int x_diff = get_x_diff(l);
		int y_diff = get_y_diff(l);
		double diff = (double) y_diff / (double)x_diff;
		bool has = false;

		for(vector<double>::iterator it =  v.begin(); it != v.end(); it++)
		{
			if(diff > 0 && *it > 0) {
				if(abs(diff - *it) < 0.00001){
					has = true;
					break;
				}
			} else if (diff < 0 && *it < 0) {
				if(abs(diff - *it) < 0.00001){
					has = true;
					break;
				}
			}
		}
		if(!has){
			v.push_back(diff);
		}
	}

	int sum = horiz + vertical + v.size();
	cout << sum << endl;
}
