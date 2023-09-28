#include <iostream>

using namespace std;

int main(void) {

	cout << "Enter number of asterisks per side: ";
	int num_A;
	cin >> num_A;

	int row;
	int column;


	for (row = 1; row <= num_A; row++) {
		for (column = 1; column <= num_A * 2 + 1; column++) {
			if (column <= num_A) {
				cout << "*";
			}
			//cout << "*";
			if (column == num_A + 1) {
				cout << " ";
			}
			if (column == num_A + 2) {
				cout << "*";
			}
			if (column > num_A + 2 && column < num_A * 2 + 1) {
				if (row == 1 || row == num_A) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			if (column == num_A * 2 + 1)
				cout << "*";

		}
		cout << endl;
	}
	
	
	//The code below makes the hollow box underneath the solid
	/*
	//solid
	for (row = 1; row <= num_A; row++) {
		for (column = 1; column <= num_A; column++) {
			cout << "*";
		}
		cout << endl;
	}

	//cout << " " << endl;

	
	//hollow top
	for (row = num_A + 2; row < num_A + 3; row++) {
		for (column = 1; column <= num_A; column++) {
			cout << "*";
		}
		cout << endl;
	}
	
	//hollow space
	for (row > num_A + 2; row < num_A * 2 + 1; row++) {
		for (column = 1; column <= num_A; column++) {
			if (column == 1 || column == num_A) {
				cout << "*";
			}
			else {
				if (column > 1 && column < num_A) {
					cout << " ";
				}
			}
		}
		cout << endl;
	}

	//hollow bottom
	for (row = num_A * 2 + 1; row < num_A * 2 + 2; row++) {
		for (column = 1; column <= num_A; column++) {
			cout << "*";
		}
		cout << endl;
	}
	*/


}