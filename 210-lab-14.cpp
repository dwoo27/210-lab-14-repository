#include <iostream>
#include <iomanip>
using namespace std;

class Color {
	int red;
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