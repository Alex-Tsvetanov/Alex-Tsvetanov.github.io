#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

//POINT
class Point
{
    public:
        Point();
        Point(int x, int y);

        int get_x();
        int get_y();

        void set_x(int x);
        void set_y(int y);

    private:
        int x, y;
};

Point::Point()
{
    this->x = 0;
    this->y = 0;
};
Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}
int Point::get_x() { return this->x; }
int Point::get_y() { return this->y; }

void Point::set_x(int x) { this->x = x; }
void Point::set_y(int y) { this->y = y; }

//LINE
class Line{
    public:
        Line(Point p1, Point p2);

        double get_angle();

    private:
        Point p1;
        Point p2;
        double angle;

        void calculateAngle();
};

Line::Line(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
    this->calculateAngle();
}

double Line::get_angle() { return this->angle; }

void Line::calculateAngle()
{
    if( p1.get_y() == p2.get_y() )
    {
        this->angle = 0;
    }
    else if( p1.get_x() == p2.get_x() )
    {
        this->angle = 90;
    }
    else
    {
        double a, b, c, angle;
        a = abs( p2.get_y() - p1.get_y() );
        b = abs( p2.get_x() - p1.get_x() );
        c = sqrt( (a*a) + (b*b) );
        angle = asin(a/c);

        if( p1.get_x() < p2.get_x() )
        {
            if(p1.get_y() < 0)
            {
                this->angle = -angle;
            }
            else
                this->angle = angle;
        }
        else
        {
            if( p2.get_y() < 0 )
            {
                this->angle = -angle;
            }
            else
            {
                this->angle = angle;
            }
        }
    }
}

int main()
{
    int lines = 0;
    int x1, y1;
    int x2, y2;

    list<double> degrees;
    bool angle_is_unique;
    cin >> lines;

    for(int i = 0; i< lines; i++)
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        Point p1(x1, y1);
        Point p2(x2, y2);

        Line line(p1, p2);
        angle_is_unique = true;

        for (std::list<double>::iterator it = degrees.begin(); it != degrees.end(); it++)
        {
            if(*it == line.get_angle())
            {
                angle_is_unique = false;
            }
        }
        if(angle_is_unique)
        {
            degrees.push_back(line.get_angle());
        }
    }

    cout << degrees.size();
}
