#include <iostream>

using namespace std;

#define size 100



void random_init_matrix(int matrix[size][size], int max, int min);
string convert_matrix_to_string(int matrix[size][size]);


int main() {
	int max = 10, min = 0;

	int vertically, horizontally;

	int matrix[size][size];

	do {
		system("cls");
		cout << "Input the number of students in the classes" <<
				"and the number of classes: ";
		cin >> horizontally >> vertically;
	} while (horizontally <= 0 || horizontally > size ||
			 vertically <= 0 || vertically > size);

	random_init_matrix(matrix, max, min);

	cout << convert_matrix_to_string(matrix) << endl;


	return 0;
}