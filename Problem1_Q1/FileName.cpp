#include<iostream>

using namespace std;

int main()
{
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
}