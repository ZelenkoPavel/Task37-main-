#include <iostream>

using namespace std;

#define size 100

void random_init_matrix(int matrix[size][size], int max, int min,
						int classes, int students);
string convert_matrix_to_string(int matrix[size][size], int classes, int students);


int main() {
	int max = 10, min = 0;

	int classes, students;

	int matrix[size][size];

	do {
		system("cls");
		cout << "Input the number of students in the classes" <<
				"and the number of classes: ";
		cin >> students >> classes;
	} while (students <= 0 || students > size ||
		classes <= 0 || classes > size);

	random_init_matrix(matrix, max, min, classes, students);

	cout << convert_matrix_to_string(matrix, classes, students) << endl;

	return 0;
}