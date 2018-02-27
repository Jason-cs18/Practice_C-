/*Practice on Operators*/
#include<iostream>
using namespace std;

int main()
{
	// Exercise 1
	printf("---Exercise 1---\n");
	cout << "Area: " << 5 * 7 << endl;
	cout << "Perimeter: " << 2 * (5 + 7) << endl;
	// Exercise 2
	printf("---Exercise 2---\n");
	float radius;
	double pi = 3.1415926535897;
	cout << "Radius: ";
	cin >> radius;
	cout << "Area: " << radius * radius * pi << endl;
	// Exercise 3
	printf("---Exercise 3---\n");
	int input;
	cout << "Input a digit (xxxx): ";
	cin >> input;
	cout << "result: " << ((input + 8) / 3) % 5 * 5 << endl;
	// Exercise 4 (pass)
	printf("---Exercise 4---(pass)\n");
	// Exercise 5
	printf("---Exercise 5---\n");
	float v1, v2;
	cout << "Please input two numbers: ";
	cin >> v1 >> v2;
	if (v1 == v2)
	{
		cout << "Equal!" << endl;
	}
	// Exercise 6
	printf("---Exercise 6---\n");
	int a, b;
	cout << "Please input two numbers: ";
	cin >> a >> b;
	if (a < 50 && a < b)
	{
		cout << "a < 50 and a < b" << endl;
	}
	// Exercise 7
	printf("---Exercise 7---\n");
	cout << "Please input two numbers: ";
	cin >> a >> b;
	if (a < 50 || a < b)
	{
		cout << "a < 50 or a < b" << endl;
	}
	// Exercise 8
	printf("---Exercise 8---\n");
	cout << "Total marks: " << 78 + 45 + 62 << endl;
	cout << "Percentage marks: " << (78 + 45 + 62) / 3 << endl;
	// Exercise 9
	printf("---Exercise 9---\n");
	cout << "Input: ";
	cin >> a >> b;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
	// Exercise 10
	printf("---Exercise 10---\n");
	float x1;
	cout << "Length: ";
	cin >> x1;
	cout << "feet: " << 3.28084 * x1 << endl;
	cout << "inches: " << 39.3701 * x1 << endl;
	// Exercise 11
	printf("---Exercise 11---\n");
	float f;
	cout << "Fahrenheit: ";
	cin >> f;
	cout << "Celsius: " << (f - 32)*(5 / 9.0) << endl;
	// Exercise 12
	printf("---Exercise 12---\n");
	cout << 45 * 0.8 - 17 << endl;
	system("pause");
	return 0;
}
