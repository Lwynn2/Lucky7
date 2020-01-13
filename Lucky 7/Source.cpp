//Luke Wynn
//This is my own work
//Lucky 7

#include<iostream>
using namespace std;

int luckyOne() {


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

int luckyTwo() {
	
}

int luckyThree() {

}

int luckyFour() {

}

int luckyFive() {

}

int luckySix() {

}

int luckySeven() {

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