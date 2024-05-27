/**
* \file FinalExam.cpp
* \brief Program allows user to do many things with a 4 x 3 matrix.
* \details This program allows the user to input 12 values for a 4 x 3 matrix, to then use 
* this program to check the sum, see the matrix, and count the amount of 1.0's in the matrix.
* \Author Vahe Ohanyan
* \Version 1.0.0
* \copyright University of Nicosia
*/

#include <iostream>
using namespace std;

void fillInMatrix(double[4][3], const int, const int);
void sumMatrix(double[4][3], const int, const int);
void showMatrix(double[4][3], const int, const int);
void countOnesMatrix(double[4][3], const int, const int);

/**
* function<code>main</code> This is the main function.
* <BR>
* details this function runs the whole program, including the main menu.
*/
int main() {

	const int x = 4;
	const int y = 3;
	double matrix[x][y];	
	int choice = 0;

	do {
		cout << "1) Enter data in matrix (range -2.5 to range 2.5)" << endl;
		cout << "2) Sum of all numbers" << endl;
		cout << "3) Show data in Matrix" << endl;
		cout << "4) Show the number of elements with value 1.0" << endl;
		cout << "5) Exit" << endl;
		cin >> choice;
		
		switch (choice) {

		case 1:
			fillInMatrix(matrix, x, y);
			break;
		case 2:
			sumMatrix(matrix, x, y);
			break;
		case 3:
			showMatrix(matrix, x, y);
			break;
		case 4:
			countOnesMatrix(matrix, x, y);
			break;
		case 5:
			break;
		}
	} while (choice != 5);

	return 0;
}

/**
* function<code>fillInMatrix</code> Allows the user to fill in the array with values.
* <BR>
* details this functions allows for a user to input values and those values
* go into their designated index into the matrix.
* @param matrix this is the main matrix.
* @param x this is for the x axis of the matrix.
* @param y this is for the y axis of the matrix.
*/
void fillInMatrix(double matrix[4][3], int x, int y) {

	double input = 0;
	int counter = 0;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {

			do {
				cout << "Enter value for matrix position " << counter << ": ";
				cin >> input;
			} while (input < -2.5 or input > 2.5);

			matrix[i][j] = input;
			counter++;
		}
	}

}

/**
*function<code>sumMatrix</code> sums all the values in the matrix and shows it to the user.
* <BR>
* details this function sums all the values one by one and then shows the sum to the user.
* @param matrix this is the main matrix.
* @param x this is for the x axis of the matrix.
* @param y this is for the y axis of the matrix.
*/
void sumMatrix(double matrix[4][3], int x, int y) {

	double sumOfMatrix = 0;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {

			sumOfMatrix += matrix[i][j];
		}
	}
	cout << "The sum of the matrix is: " << sumOfMatrix << endl;
}

/**
*function<code>showMatrix</code> shows the values at every index in the matrix.
* <BR>
* details this functions shows the user the vales that are in the matrix by makes a table.
* @param matrix this is the main matrix.
* @param x this is for the x axis of the matrix.
* @param y this is for the y axis of the matrix.
*/
void showMatrix(double matrix[4][3], int x, int y) {

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {

			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}

}

/**
*function<code>countOnesMatrix</code> shows the user how many 1.0's are in the matrix.
* <BR>
* details this function counts how many 1.0's are in the matrix and lets the user know.
* @param matrix this is the main matrix.
* @param x this is for the x axis of the matrix.
* @param y this is for the y axis of the matrix.
*/
void countOnesMatrix(double matrix[4][3], int x, int y) {

	int totalOnes = 0;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {

			if (matrix[i][j] == 1.0) {

				totalOnes++;
			}

		}
	}

	cout << "The total amount of 1.0's are: " << totalOnes << endl;
}