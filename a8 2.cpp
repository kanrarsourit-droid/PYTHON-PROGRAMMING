#include <iostream>
using namespace std;;

// Abstract base class
class Shape {
public:
	virtual double area() const = 0; // pure virtual
	virtual ~Shape() = default;
};

class Rectangle : public Shape {
	double length, width;
public:
	Rectangle(double l, double w) : length(l), width(w) {}
	double area() const override { return length * width; }
};

class Triangle : public Shape {
	double base, height;
public:
	Triangle(double b, double h) : base(b), height(h) {}
	double area() const override { return 0.5 * base * height; }
};

int main() {
	double l, w;
	cout << "Enter length and width of the rectangle: ";
	if (!(cin >> l >> w)) {
		cerr << "Invalid input" << endl;
		return 1;
	}
	Rectangle rect(l, w);
	cout << "Area of the rectangle: " << rect.area() << "\n\n";

	double b, h;
	cout << "Enter base and height of the triangle: ";
	if (!(cin >> b >> h)) {
		cerr << "Invalid input" << endl;
		return 1;
	}
	Triangle tri(b, h);
	cout << "Area of the triangle: " << tri.area() << "\n";

	return 0;
}


