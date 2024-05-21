// oop_point_circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Point {
	int x, y;

public:
	Point() {
		//cout << "inside point";

		x = 0;
		y = 0;
	}
	Point(int xx, int yy) {
		x = xx;
		y = yy;
	}
	void setX(int X) {
		x = X;
	}
	void setY(int Y) {
		x = Y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

};
class Circle {
	Point center;
	double radius;
public:
	Circle() {

		center;
		radius = 0.0;
	}
	Circle(Point p, double r) {
		center = p;
		radius = r;

}
	void setcenter(Point X) {
		center = X;
	}
	double setradius(int Y) {
		radius = Y;
	}
	Point getcenter() {
		return center;
	}
	double getradius() {
		return radius;
	}
	double calacArea() {
		return 3.14 * radius * radius;
	}
};
int main()
{
	Point p1(3, 4);
	Circle c1(p1, 10.0);
	Circle c2 = c1;
	cout << "The area of the circle is: " << c2.calacArea() << endl;


}
