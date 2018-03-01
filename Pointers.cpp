/*Practice on Pointers*/
#include<iostream>
using namespace std;

void printAddress(int num);
void printPointAddress(int *num);
void printPointValue(int *num);
void printPointerValue(int *num);
void printScreen(int *num);
void compare(int *num1, int *num2, int *num3);
int factorial(int *num);

int main()
{
	// Exercise 1
	printf("---Exercise 1---\n");
	int num1;
	cout << "Input a number: ";
	cin >> num1;
	printAddress(num1);

	// Exercise 2
	printf("---Exercise 2---\n");
	int num2;
	cout << "Input a number: ";
	cin >> num2;
	printPointAddress(&num2);

	// Exercise 3
	printf("---Exercise 3---\n");
	int num3;
	cout << "Input a number: ";
	cin >> num3;
	printPointValue(&num3);

	// Exercise 4
	printf("---Exercise 4---\n");
	int num4;
	cout << "Please input a number: ";
	cin >> num4;
	cout << *(&num4) << endl;

	// Exercise 5
	printf("---Exercise 5---\n");
	int num5;
	cout << "Please input a number: ";
	cin >> num5;
	printPointValue(&num5);

	// Exercise 6
	printf("---Exercise 6---\n");
	int num61, num62, num63;
	cout << "Please input three numbers: ";
	cin >> num61 >> num62 >> num63;
	compare(&num61, &num62, &num63);

	// Exercise 7
	printf("---Exercise 7---\n");
	int a = 4, b = 1, c = 0;
	cout << "Factorial(4): " << factorial(&a) << endl;
	cout << "Factorial(1): " << factorial(&b) << endl;
	cout << "Factorial(0): " << factorial(&c) << endl;

	// Exercise 8 (pass)
	printf("---Exercise 8---\n");


	system("pause");
	return 0;
}


void printAddress(int num){
	cout << "Address: " << &num << endl;
}

void printPointAddress(int *num){
	cout << "Address: " << &num << endl;
}

void printPointValue(int *num){
	cout << *num << endl;
}

void compare(int *num1, int *num2, int *num3){
	int max, min;
	if (*num1 < *num2){
		if (*num1 < *num3){
			min = *num1;
			if (*num2 > *num3){
				max = *num2;
			}
			else{
				max = *num3;
			}
		}
		else{
			min = *num3;
			max = *num2;
		}
	}
	else{
		if (*num2 < *num3){
			min = *num2;
			if (*num1 > *num3){
				max = *num1;
			}
			else{
				max = *num3;
			}
		}
		else{
			min = *num3;
			max = *num1;
		}
	}
	cout << "Max: " << max << " Min: " << min << endl;
}

int factorial(int *num){
	if (*num == 0){
		return 0;
	}
	else if (*num == 1){
		return 1;
	}
	else{
		int new_num = *num - 1;
		return (*num)*factorial(&new_num);
	}
}
