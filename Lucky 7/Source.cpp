//Luke Wynn
//This is my own work
//Lucky 7

#include<iostream>
#include<fstream>
using namespace std;

void luckyOne() {


	int n, largest, smallest;
	int num[50];
	n = 5;

	for (int i = 0; i < n; i++) {
		cout << "Enter number " << (i + 1) << ": ";
		cin >> num[i];
	}

	largest = num[0];
	for (int i = 1; i < n; i++) {
		if (largest < num[i])
			largest = num[i];
	}
	smallest = num[0];
	for (int i = 1; i < n; i++) {
		if (smallest > num[i])
			smallest = num[i];
	}
	cout << "Largest number is: " << largest << endl;
	cout << "Smallest number is: " << smallest << endl;
}

void luckyTwo() {
	int i;
	int sum = 0;
	for (i = 1; i <= 50; i++) {
		if ((i % 7 == 0) && (i > 0)) {
			sum += i;
		}
	}	
	cout << "sum = " << sum << endl;
}

void luckyThree() {
	int i, fact = 1;
	for (i = 1; i <= 10; i++) {
		if ((i > 0) && (i <= 10)) {
			fact = fact * i;
			cout << "Factorial of " << i << " is: " << fact << endl;
		}
	}
}

void luckyFour() {
	char string1[20];
	int i, length;
	int flag = 0;

	cout << "Enter a word: ";
	cin >> string1;

	length = strlen(string1);

	for (i = 0; i < length; i++) {
		if (string1[i] != string1[length - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag) {
		cout << string1 << " is not a palindrome." << endl;
	}
	else {
		cout << string1 << " is a palindrome." << endl;

	}
}

void luckyFive() {
	int num, i;
	int p = 0, flag = 0;
	cout << "Enter a positive number: " << endl;
	cin >> num;
	p = num / 2;
	for (i = 2; i <= p; i++) {
		if (num % i == 0)
		{
			cout << "Number is not Prime." << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "Number is Prime." << endl;
}

void luckySix() {
	int arr[] = { 4,7,1,9,80,-44,5,-1,4,34,87,-23,54,-743,901 };
	int numItems = sizeof(arr) / sizeof(int);
	int sum = 0;
	int i = 0;
	while (i < numItems) {
		sum = sum + arr[i];
		i++;
	}
	cout << "average = " << sum / double(numItems) << endl;
}

void luckySeven() {
	ifstream fin("input.in");
	if (!fin) {
		cerr << "file not found...";
		exit(2);
	}
	int Snum;
	cout << "Enter the number of strings to read: ";
	cin >> Snum;
	string* strArr = new string[Snum];
	string str;
	int i = 0;
	while (i<Snum) {
		fin >> strArr[i];
		i++;
	}
	string max = strArr[0];
	for (int i = 1; i < Snum; i++) {
		if (strArr[i].size() > max.size()) max = strArr[i];
	}
	cout << "The largest word is: " << max << endl;
}


	int main()
	{
		int lucky;
		cout << "Select a Lucky to test ";
		cin >> lucky;
		if (lucky == 1) luckyOne();
		else if (lucky == 2) luckyTwo();
		else if (lucky == 3) luckyThree();
		else if (lucky == 4) luckyFour();
		else if (lucky == 5) luckyFive();
		else if (lucky == 6) luckySix();
		else if (lucky == 7) luckySeven();

		return 0;
}