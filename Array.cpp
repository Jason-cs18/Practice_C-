/*Practice on Array*/
#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;

int positive(const array<int, 20> &a){
	int sum = 0;
	for (auto i = 0; i < 20; i++){
		if (a[i]>0){
			sum++;
		}
	}
	return sum;
}

int negative(const array<int, 20> &a){
	int sum = 0;
	for (auto i = 0; i < 20; i++){
		if (a[i]<0){
			sum++;
		}
	}
	return sum;
}

int odd(const array<int, 20> &a){
	int sum = 0;
	for (auto i = 0; i < 20; i++){
		if (a[i] % 2){
			sum++;
		}
	}
	return sum;
}

int even(const array<int, 20> &a){
	int sum = 0;
	for (auto i = 0; i < 20; i++){
		if (!(a[i] % 2)){
			sum++;
		}
	}
	return sum;
}

int zero(const array<int, 20> &a){
	int sum = 0;
	for (int i = 0; i < 20; i++){
		if (a[i] == 0){
			sum++;
		}
	}
	return sum;
}

int sum(const vector<int> &a){
	int sum1 = 0;
	for (auto i = 0; i < a.size(); i++){
		sum1 += a[i];
	}
	return sum1;
}

int product(const vector<int> &a){
	int product = 1;
	for (auto i = 0; i < a.size(); i++){
		product *= a[i];
	}
	return product;
}

int max(const array<int, 10> &a){
	int maximum = 0;
	for (int i = 0; i < 10; i++){
		if (a[i] >= maximum){
			maximum = a[i];
		}
	}
	return maximum;
}

int min(const array<int, 10> &a){
	int minimum = 0;
	for (int i = 0; i < 10; i++){
		if (a[i] <= minimum){
			minimum = a[i];
		}
	}
	return minimum;
}

int main()
{
	// Exercise 1
	printf("---Exercise 1---\n");
	int arr[10];
	for (int i = 0; i < 10; i++){
		cout << "array[" << i << "] = ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++){
		cout << arr[i] << "  ";
	}
	// Exercise 2
	printf("---Exercise 2---\n");
	array<int, 10> arr1;
	int pred, ifnot = 0;
	for (auto i = 0; i < 10; i++){
		cout << "array[" << i << "] = ";
		cin >> arr1[i];
	}
	cout << "Please input a number: ";
	cin >> pred;
	for (auto i = 0; i < arr1.size(); i++){
		if (arr1[i] == pred){
			cout << "This number is in the arr1" << endl;
			ifnot = 1;
			break;
		}
	}
	if (ifnot == 0){
		cout << "This number is not in the arr1" << endl;
	}
	// Exercise 3
	printf("---Exercise 3---\n");
	array<int, 20> arr3;
	for (auto i = 0; i < 20; i++){
		cout << "Input a number: ";
		cin >> arr3[i];
	}
	cout << "The number of positive: " << positive(arr3) << endl;
	cout << "The number of negative numbers: " << negative(arr3) << endl;
	cout << "The number of odd numbers: " << odd(arr3) << endl;
	cout << "The number of even: " << even(arr3) << endl;
	cout << "The number of zeros: " << zero(arr3) << endl;

	// Exercise 4
	printf("---Exercise 4---\n");
	array<int, 10> arr4 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	array<int, 10> arr41;
	for (int i = 9; i >= 0; i--){
		arr41[10 - i] = arr4[i];
	}
	for (int i = 0; i < 10; i++){
		cout << "arr4[" << i << "] = " << arr41[i] << endl;
	}

	// Exercise 5
	printf("---Exercise 5---\n");
	vector<int> arr5 = { 4, 34, 123, 433 };
	cout << "Sum: " << sum(arr5) << endl;
	cout << "Product: " << product(arr5) << endl;

	//Exercise 6
	printf("---Exercise 6---\n");
	array<array<int, 2>, 2> arr6 = { { { 1, 2 }, { 3, 4 } } };
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << arr6[i][j] << endl;
		}
	}

	// Exercise 7
	printf("---Exercise 7---\n");
	array<int, 10> arr7 = { 1, 2, 3, 4, 5, 6, 7 };
	cout << "Largest: " << max(arr7) << endl;
	cout << "Smallest: " << min(arr7) << endl;

	// Exercise 8
	printf("---Exercise 8---\n");
	int check = 1;
	array<int, 6> arr8 = { 2, 3, 15, 15, 3, 2 };
	for (int i = 0; i < arr8.size(); i++){
		if (arr8[i] != arr8[arr8.size() - i]){
			check = 0;
			break;
		}
	}
	if (check == 1){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	// Exercise 9
	printf("---Exercise 9---\n");
	int arr10[] = { 58, 24, 13, 15, 63, 9, 8, 81, 1, 78 };
	vector<int> arr101, arr102;
	arr101.assign(arr10, arr10 + 5);
	arr102.assign(arr10 + 5, arr + 10);

	// Exercise 10 (maximum-minimum)
	printf("---Exercise 10---\n");

	// Exercise 11 (assign)
	printf("---Exercise 11---\n");
	
	// Exercise 12 (pass) 
	printf("---Exercise 12---\n");

	// Exercise 13 (pass)
	printf("---Exercise 13---\n");

	// Exercise 14 (pass)
	printf("---Exercise 14---\n");

	// Exercise 15 (pass)
	printf("---Exercise 15---\n");

	// Exercise 16 (pass)
	printf("---Exercise 16---\n");

	// Exercise 17 (pass)
	printf("---Exercise 17---\n");

	// Exercise 18 (pass)
	printf("---Exercise 18---\n");

	system("pause");
	return 0;
}

