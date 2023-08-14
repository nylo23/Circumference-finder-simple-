#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	const double PI = 3.14159;
	double radius = 1;
	double circumference = 2 * PI * radius;

	cout << "Circumference = " << circumference;
	Sleep(10000);
	return 0;
}
