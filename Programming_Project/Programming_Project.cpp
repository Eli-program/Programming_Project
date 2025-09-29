// Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double avgHeightPerYear = 1.5; // in mm
	int years[3] = { 5, 7, 10 }; // how many years to calculate ocean height increase for
	// this is an array to calculate the height increase for multiple years, which is more efficient than writing the same code multiple times (i learned arrays from Java)
	for (int ocean = 0; ocean < 3; ocean++) { //using a for loop to go through the array
		double heightInc = years[ocean] * avgHeightPerYear;
		cout << "In " << years[ocean] << " years, the water level will have rised by " << heightInc << " mm." << endl;


	}
}

