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

	//populate colors
	int num;
	while (!in.eof())
	{
		Color temp;
		in >> num;

	}

	//close input file
	in.close();

	return 0;
}
