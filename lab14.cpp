/*********************************

COMSC 210 | Lab 14 | Skylar Robinson

This program demonstrates a RGB color class

**********************************/

#include <iostream>
#include <fstream>
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
	//declare color variables
	Color col1, col2, col3;

	//open input file
	ifstream in;
	in.open("colors.txt");
	if (!in){
		cout << "File open error.\n";
		return -1;
	}

	//populate color 1
	int num;
	in >> num;
	col1.setRed(num);
	in >> num;
	col1.setGreen(num);
	in >> num;
	col1.setBlue(num);

	//populate color 2
	in >> num;
	col2.setRed(num);
	in >> num;
	col2.setGreen(num);
	in >> num;
	col2.setBlue(num);

	//populate color 3
	in >> num;
	col3.setRed(num);
	in >> num;
	col3.setGreen(num);
	in >> num;
	col3.setBlue(num);

	//close input file
	in.close();

	//display colors
	col1.print();
	cout << endl;
	col2.print();
	cout << endl;
	col3.print();
	cout << endl;

	return 0;
}
