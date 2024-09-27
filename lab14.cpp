/*********************************

COMSC 210 | Lab 14 | Skylar Robinson

This program demonstrates a RGB color class

**********************************/

#include <iostream>
using namespace std;

class Color{
private:
	int red, green, blue;
public:
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
	Color col;

	col.setRed(100);
	col.setGreen(200);
	col.setBlue(150);

	col.print();

	return 0;
}
