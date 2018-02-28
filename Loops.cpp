/*Practice on Loop*/
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	// Exercise 1
	printf("---Exercise 1---\n");
	int quit = 0, number, sum=0;
	while (quit < 10){
		cout << "Input a number: ";
		cin >> number;
		sum += number;
		quit++;
	}
	cout << "The average is: " << sum / 10 << endl;
	// Exercise 2 (pass)
	// Exercise 3 (pass)
	// Exercise 4 (pass)
	// Exercise 5
	printf("---Exercise 5---\n");
	int num = 4, product = 1;
	if (num == 1){
		cout << 1 << endl;
	}
	else if (num == 0){
		cout << 0 << endl;
	}
	else{
		for (int i = 1; i <= num; i++){
			product *= i;
		}
		cout << product << endl;
	}
	// Exercise 6 
	printf("---Exercise 6---\n");
	int num_1 = 24, num_2 = 36, gcd;
	if (num_1 < num_2){
		for (int i = 2; i < num_1; i++){
			if (((num_1%i) == 0) && ((num_2%i) == 0)){
				gcd = i;
			}
		}
		cout << gcd << endl;
	}
	else if (num_1 > num_2){
		for (int i = 2; i < num_2; i++){
			if (((num_1%i) == 0) && ((num_2%i) == 0)){
				gcd = i;
			}
		}
		cout << gcd << endl;
	}
	else{
		cout << num_1 << endl;
	}
	// Exercise 7 (pass)
	// Exercise 8 (pass)
	// Exercise 9 (pass)
	// Exercise 10
	printf("---Exercise 10---\n");
	cout << "Please input a number: ";
	cin >> num;
	int loop = 10, digit;
	while (loop){
		if (num / loop){
			digit = loop;
		}
		else{
			loop = 0;
		}
		loop *= 10;
	}
	cout << digit << endl;
	digit *= 10;
	int res = 0;
	for (int i = 10; i <= digit; i *= 10){
		res += (num % i) * 10 / i;
	}
	cout << res << endl;
	// Exercise 11
	printf("---Exercise 11---\n");
	int a, b, c, sum_num = 0;
	for (int i = 100; i <= 500; i++){
		a = i % 10;
		b = i % 100 / 10;
		c = i % 1000 / 100;
		if ((a*a*a + b*b*b + c*c*c) == i){
			cout << i << endl;
			sum_num++;
		}
	}
	cout << "Total: " << sum_num << endl;
	// Exercise 12
	printf("---Exercise 12---\n");
	int ifelse = 0;
	for (int i = 1; i <= 100; i++){
		for (int j = 2; j < i; j++){
			if ((i % j) == 0){
				ifelse = 0;
				break;
			}
			else{
				ifelse = 1;
			}
		}
		if (i == 2){
			cout << i << endl;
		}
		if (ifelse == 1){
			cout << i << endl;
		}
	}
	// Exercise 13 (pass)
	// Exercise 14 (pass)
	system("pause");
	return 0;
}
