/*Practice on Variable*/
#include<iostream>
using namespace std;
int main()
{
	// Exercise 1
	printf("Exercise 1:");
	int x = 4, y = 3;
	cout << x + y << endl;
	// Exercise 2
	printf("Exercise 2: ");
	cout << x * y << endl;
	// Exercise 3
	printf("Exercise 3: ");
	cin >> x >> y;
	cout << "Sum: " << x + y << endl;
	cout << "Product: " << x * y << endl;
	// Exercise 4
	printf("Exercise 4: ");
	cin >> x >> y;
	int product = x * y;
	int sum = x + y;
	cout << "Sum: " << product + sum << endl;
	cout << "Product: " << product * sum << endl;
	// Exercise 5
	printf("Exercise 5:");
	int width, height, area;
	cout << "Please input width of rectangle: ";
	cin >> width;
	cout << "Please input height of the rectangle: ";
	cin >> height;
	cout << "Area: " << width * height << endl;
	// Exercise 6
	printf("Exercise 6: ");
	int a = 4;
	double b = 3.2121;
	char c = 'A';
	cout << a << " " << b << " " << c << endl;
	// Exercise 7
	printf("Exercise 7: ");
	cout << int('h') << endl;
	// Exercise 8
	printf("Exercise 8: ");
	double var = 100.235;
	cout << (int)var << endl;
	// Exercise 9
	printf("Exercise 9: ");
	char x1 = 'd';
	cout << 3 + (int)x1 << " : " << "g" << endl;
	// Exercise 10
	printf("Exercise 10: ");
	int x2 = 9;
	cout << x2 + 5 << endl;
	cout << x2 + 6.2 << endl;
	// Exercise 11
	printf("Exercise 11: ");
	cout << 3.9 * 3.9 << endl;
	// Exercise 12
	printf("Exercise 12: ");
	float width_1, height_1;
	cout << "Please input width and height (float): " << endl;
	cin >> width_1 >> height_1;
	cout << "Area: " << (int)(width_1 * height_1) << endl;
	// Exercise 13
	printf("Exercise 13: ");
	char x3;
	cin >> x3;
	cout << (int)x3 << endl;
	system("pause");
	return 0;
}
