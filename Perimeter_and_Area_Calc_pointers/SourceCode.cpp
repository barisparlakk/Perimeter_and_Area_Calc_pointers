#include <iostream>
using namespace std;

void Calculate(int r, float* perimeter, float* area) {
	
	*perimeter = 2 * 3.14 * r;
	*area = 3.14 * r * r;
	
}

int main() {

	float radius, perimeter, area;
	cout << "  Welcome to the algorithm that finds the perimeter and area of the circle with the radius u input. " << endl;
	cout << "    Please enter a radius : ";
	cin >> radius;

	cout << endl << endl << endl;

	Calculate(radius, &perimeter, &area);
	cout << " Perimeter of the circle : " << perimeter << endl;
	cout << " Area of the circle : " << area << endl << endl;




	return 0;
}