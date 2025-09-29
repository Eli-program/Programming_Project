#include < iostream>
#include <cmath>
using namespace std;

int main()
{
	int TotalGallons = 20; // how many gallons of gas in tank
	double AvgGallonsPerMileft = 23.5; // avg gallons per mile for town
	double AvgGallonsPerMilerh = 28.9; // avg gallons per mile for highway

		double Distance = AvgGallonsPerMileft * TotalGallons; // how far you can go in town
		double Distance2 = AvgGallonsPerMilerh * TotalGallons; // how far you can go on highway

		cout << "You can go " << Distance << " miles in town with a full tank." << endl;
		cout << "You can go " << Distance2 << " miles on the highway with a full tank." << endl;
}
