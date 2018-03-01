/*Practice on Functions*/
#include<iostream>
#include<ctype.h>
using namespace std;

inline void sum();
inline float product();
inline void circle();
inline void maximum();
inline void minimum();
inline void odd();
void elligiable();
void prime();
void marks();
int Factorial(int num);
int Multiplication(int num);
int PrimeFactors(int num);
int Fibonacci(int num);
int pow(int num1, int num2);


int main()
{
	// Exercise 1
	printf("---Exercise 1---\n");
	sum();

	// Exercise 2
	printf("---Exercise 2---\n");
	product();

	// Exercise 3
	printf("---Exercise 3---\n");
	circle();

	// Exercise 4
	printf("---Exercise 4---\n");
	maximum();
	minimum();
	
	// Exercise 5
	printf("---Exercise 5---\n");
	odd();

	// Exercise 6
	printf("---Exercise 6---\n");
	elligiable();

	// Exercise 7
	printf("---Exercise 7---\n");
	prime();

	// Exercise 8
	printf("---Exercise 8---\n");
	marks();

	// Exercise 9
	printf("---Exercise 9---\n");
	cout << "Factorial(4): " << Factorial(4) << endl;
	cout << "Factorial(1): " << Factorial(1) << endl;
	cout << "Factorial(0): " << Factorial(0) << endl;

	// Exercise 10
	printf("---Exercise 10---\n");
	Multiplication(15);

	// Exercise 11 (Difficult)
	printf("---Exercise 11---\n");
	//PrimeFactors(10);

	// Exercise 12
	printf("---Exercise 12---\n");
	cout << "Fibonacci(3): " << Fibonacci(3) << endl;
	cout << "Fibonacci(4): " << Fibonacci(4) << endl;

	// Exercise 13 (pass)
	printf("---Exercise 13---\n");

	// Exercise 14
	printf("---Exercise 14---\n");
	cout << "Pow(3, 4): " << pow(3, 4) << endl;

	// Exercise 15 (pass)
	printf("---Exercise 15---\n");
	
	// Exercise 16 (pass)
	printf("---Exercise 16---\n");

	system("pause");
	return 0;
}

inline void sum(){
	float a, b;
	cout << "Input two numbers: ";
	cin >> a >> b;
	cout << a + b << endl;
}

inline float product(){
	float a, b;
	cout << "Input two numbers: ";
	cin >> a >> b;
	cout << a * b << endl;
	return a * b;
}

inline void circle(){
	float r;
	cout << "Radius: ";
	cin >> r;
	cout << "Area: " << 3.14 * r * r << " " << "Circunference: " << 2 * 3.14 * r << endl;
}

inline void maximum(){
	int a, b, c;
	cout << "Three numbers: ";
	cin >> a >> b >> c;
	if ((a > b) && (a > c)){
		cout << a << endl;
	}
	else if ((b > a) && (b > c)){
		cout << b << endl;
	}
	else{
		cout << c << endl;
	}
}

inline void minimum(){
	int a, b, c;
	cout << "Three numbers: ";
	cin >> a >> b >> c;
	if ((a < b) && (a < c)){
		cout << a << endl;
	}
	else if ((b < a) && (b < c)){
		cout << b << endl;
	}
	else{
		cout << c << endl;
	}
}

inline void odd(){
	int num;
	cout << "Number: ";
	cin >> num;
	if (num % 2){
		cout << "ODD" << endl;
	}
	else{
		cout << "EVEN" << endl;
	}
}

void elligiable(){
	int age;
	cout << "Please input your age: ";
	cin >> age;
	if (age >= 18){
		cout << "You're elligiable to vote." << endl;
	}
	else{
		cout << "You're not elligiable.";
	}
}

void prime(){
	int num, prime_num = 1;
	cout << "Input a number: ";
	cin >> num;
	if (num == 2){
		cout << "Yes" << endl;
	}
	else{
		for (int i = 2; i < num; i++){
			if ((num % i) == 0){
				cout << "No" << endl;
				prime_num = 0;
				break;
			}
		}
		if (prime_num == 1){
			cout << "Yes" << endl;
		}
	}
}

void marks(){
	int mark;
	cout << "Input your marks: ";
	cin >> mark;
	if (mark >= 91){
		cout << "AA" << endl;
	}
	else if (mark >= 81){
		cout << "AB" << endl;
	}
	else if (mark >= 71){
		cout << "BB" << endl;
	}
	else if (mark > 61){
		cout << "BC" << endl;
	}
	else if (mark > 51){
		cout << "CD" << endl;
	}
	else if (mark > 41){
		cout << "DD" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
}
int Factorial(int num){
	if (num == 0){
		return 0;
	}else if(num == 1){
		return 1;
	}
	else{
		return num * Factorial(num - 1);
	}
}

int Multiplication(int num_1){
	if (num_1 == 1){
		cout << 1 * 15 << endl;
		return 1;
	}
	else{
		cout << num_1 * 15 << endl;
		return Multiplication(num_1 - 1);
	}
}

int Fibonacci(int num){
	if (num == 0){
		return 0;
	}
	else if (num == 1){
		return 1;
	}
	else{
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int pow(int num1, int num2){
	if (num2 == 0){
		return 1;
	}
	else{

		return num1 * pow(num1, num2 - 1);
	}
}
