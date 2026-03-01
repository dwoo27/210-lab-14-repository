#include <iostream>
#include <iomanip>
using namespace std;

class Color {
	int red; //private by default
	int green;
	int blue;

public:
	void print();

	int getRed() const; //accessors
	int getGreen() const;
	int getBlue() const;

	void setRed(int); //mutators
	void setGreen(int);
	void setBlue(int);
};

int main()
{
	Color c1, c2, c3; //creating color objects
	
	c1.setRed(154); //manually populating object data
	c1.setGreen(31);
	c1.setBlue(93);

	c2.setRed(0);
	c2.setGreen(0);
	c2.setBlue(255);

	c3.setRed(87);
	c3.setGreen(249);
	c3.setBlue(142);

	cout << "   Red   Green   Blue" << endl; 
	cout << "----------------------" << endl;

	c1.print(); //output values
	c2.print();
	c3.print();
}

void Color::print() {
	cout << setw(6) << red << setw(8) << green
		<< setw(8) << blue << endl;
}

int Color::getRed() const {
	return red;
}

int Color::getGreen() const {
	return green;
}

int Color::getBlue() const {
	return blue;
}

void Color::setRed(int red) {
	this->red = red;
}

void Color::setGreen(int green) {
	this->green = green;
}

void Color::setBlue(int blue) {
	this->blue = blue;
}