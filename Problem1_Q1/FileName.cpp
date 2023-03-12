#include<iostream>

using namespace std;

int main()
{
	//1.To enter the length (in meters), width (in meters) of a rectangular carpet and carpet price per square  meter.
	//The  program  should  compute  and  display  its  area,  perimeter  and  cost  of  the carpet.

	double	length, width, price, area, perimeter, totalprice;

	cout << "Enter the length in meters: ";
	cin >> length;

	cout << "Enter the width in meters: ";
	cin >> width;

	cout << "Enter the price per meter squared: ";
	cin >> price;

	area = length * width;
	perimeter = 2 * (length + width);
	totalprice = area * price;

	cout << endl;

	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
	cout << "Total cose: " << totalprice << endl;

	return 0;
}