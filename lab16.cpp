/*********************************

COMSC 210 | Lab 16 | Skylar Robinson

This program demonstrates a RGB color class with constructors

**********************************/

#include <iostream>
#include <fstream>
using namespace std;

class Color{
private:
	int red, green, blue;
public:
	//constructors
	Color() { red = 0; green = 0; blue = 0; }
	Color(int r) { red = r; green = 0, blue = 0; }
	Color(int r, int g) { red = r; green = g; blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }

	//setters
	void setRed(int r)   { red = r; }
	void setGreen(int g) { green = g; }
	void setBlue(int b)  { blue = b; }

	//getters
	int getRed() const   { return red; }
	int getGreen() const { return green; }
	int getBlue() const  { return blue; }

	//print
	void print(){
		cout << "Red: " << red << endl;
		cout << "Green: " << green << endl;
		cout << "Blue: " << blue << endl;
	}
};

int main()
{
	//declare color variables with each constructor
	Color col1;
	Color col2(150);
	Color col3(255, 100);
	Color col4(20, 175, 210);

	//display colors
	col1.print();
	cout << endl;
	col2.print();
	cout << endl;
	col3.print();
	cout << endl;
	col4.print();
	cout << endl;

	return 0;
}
