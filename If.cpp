/*Practice on Decide if/else*/
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	// Exercise 1
	printf("---Exercise 1---\n");
	int length, width;
	cout << "Please input length and width: ";
	cin >> length >> width;
	if (length == width)
	{
		cout << "The rectangle is square.";
	}
	// Exercise 2
	printf("---Exercise 2---\n");
	int x1, x2;
	cout << "Two numbers: ";
	cin >> x1 >> x2;
	if (x1 > x2)
	{
		cout << x1 << endl;
	}
	else{
		cout << x2 << endl;
	}
	// Exercise 3
	printf("---Exercise 3---\n");
	double purchased;
	int num;
	cout << "Purchased: ";
	cin >> num;
	purchased = 100 * num;
	if (purchased > 1000){
		cout << purchased * (1 - 0.1) << endl;
	}
	else{
		cout << purchased << endl;
	}
	// Exercise 4
	printf("---Exercise 4---\n");
	double salary;
	int years;
	cout << "Please input your salary and year of service: ";
	cin >> salary >> years;
	if (years > 5){
		cout << salary * 0.05 << endl;
	}
	else{
		cout << 0 << endl;
	}
	// Exercise 5
	printf("---Exercise 5---\n");
	int mark;
	cout << "Please input your marks: ";
	cin >> mark;
	if (mark <= 25){
		cout << "F" << endl;
	}
	else if (mark <= 45){
		cout << "E" << endl;
	}
	else if (mark <= 50){
		cout << "D" << endl;
	}
	else if (mark <= 60){
		cout << "C" << endl;
	}
	else if (mark <= 80){
		cout << "B" << endl;
	}
	else{
		cout << "A" << endl;
	}
	// Exercise 6
	printf("---Exercise 6---\n");
	int age_1, age_2, age_3;
	cout << "Please input your ages: ";
	cin >> age_1 >> age_2 >> age_3;
	if (age_1 > age_2){
		if (age_1 > age_3){
			cout << "Oldest: " << age_1 << endl;
			if (age_2 > age_3){
				cout << "Youngest: " << age_3 << endl;
			}
			else{
				cout << "Youngest: " << age_2 << endl;
			}
		}
		else{
			cout << "Oldest: " << age_3 << endl;
			cout << "Youngest: " << age_2 << endl;
		}
	}
	else{
		if (age_2 > age_3){
			cout << "Oldest: " << age_2 << endl;
			if (age_1 > age_3){
				cout << "Youngest: " << age_3 << endl;
			}
			else{
				cout << "Youngest: " << age_1 << endl;
			}
		}
		else{
			cout << "Oldest: " << age_3 << endl;
			cout << "Youngest: " << age_1 << endl;
		}
	}
	// Exercise 7
	printf("---Exercise 7---\n");
	double n_1;
	cout << "Input: ";
	cin >> n_1;
	if (n_1 > 0){
		cout << n_1 << endl;
	}
	else{
		cout << n_1*(-1) << endl;
	}
	// Exercise 8
	printf("---Exercise 8---\n");
	int held, attended;
	cout << "Please input the number of classes held: ";
	cin >> held;
	cout << "Please input the number of classes attended: ";
	cin >> attended;
	if (attended / held < 0.75){
		cout << "You are not allowed to attend the test." << endl;
	}
	else{
		cout << "You are allowed to attend the test." << endl;
	}
	// Exercise 9
	printf("---Exercise 9---\n");
	char medical;
	cout << "Are you have medical cause?";
	cin >> medical;
	if (medical == 'Y'){
		cout << "Sit" << endl;
	}
	else{
		cout << "No sit" << endl;
	}
	// Exercise 10
	printf("---Exercise 10---\n");
	int x = 2, y = 5, z = 0;
	cout << (x == 2) << endl;
	cout << (x != 5) << endl;
	cout << (x != 5 && y >= 5) << endl;
	cout << (z != 0 || x == 2) << endl;
	cout << !(y < 10) << endl;
	// Exercise 11
	printf("---Exercise 11---\n");
	char input_char;
	cout << "Please input a character:";
	cin >> input_char;
	if(islower(input_char)){
		cout << "Lowercase" << endl;
	}
	else{
		cout << "Uppercase" << endl;
	}
	// Exercise 12
	printf("---Exercise 12---\n");
	int year;
	cout << "Please input a year: ";
	cin >> year;
	if (((year % 100) == 0) && ((year % 400) == 0)){
		cout << "leap year" << endl;
	}
	else if (((year % 100) != 0) && ((year % 4) == 0)){
		cout << "leap year" << endl;
	}
	// Exercise 13
	printf("---Exercise 13---\n");
	int age_13;
	char sex, marital;
	cout << "Please choose your sex (M or F):";
	cin >> sex;
	cout << "Please input your age: ";
	cin >> age_13;
	cout << "Please choose your marital status (Y or N): ";
	cin >> marital;
	if (sex == 'F'){
		cout << "You will work in urban areas." << endl;
	}
	else if ((sex == 'M') && ((age_13 >= 20) && (age_13 <= 40))){
		cout << "You will work in anywhere." << endl;
	}
	else if ((sex == 'M') && ((age_13 >= 40) && (age_13 <= 60))){
		cout << "You will work in urban areas." << endl;
	}
	else{
		cout << "ERROR" << endl;
	}
	// Exercise 14
	printf("---Exercise 14---");
	int digit, num_1, num_2, num_3, num_4;
	cout << "Input a digit (xxxx):";
	cin >> digit;
	num_1 = digit % 10;
	num_2 = (digit % 100) / 10;
	num_3 = (digit % 1000) / 100;
	num_4 = (digit % 10000) / 1000;
	cout << "Input: " << digit << endl;
	cout << "Output: " << num_1 * 1000 + num_2 * 100 + num_3 * 10 + num_4 << endl;
	system("pause");
	return 0;
}
