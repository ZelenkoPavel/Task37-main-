#include <iostream>
#include <string>
#include <time.h>

using namespace std;

#define size 100

void random_init_matrix(int matrix[size][size], int max, int min,
						int classes, int students) {
	srand(time(NULL));
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	for (int i = 0; i < classes; i++) {
		for (int j = 0; j < students; j++) {
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[size][size], int classes, int students) {
	if (students <= 0 || students > size ||
		classes <= 0 || classes > size) {
		return "Incorrect data was entered";
	}

	string msg = "";

	for (int i = 0; i < classes; i++) {
		for (int j = 0; j < students; j++) {
			if (matrix[i][j] < 0) {
				msg += to_string(matrix[i][j]) + " ";
			}
			else if (matrix[i][j] >= 0 && matrix[i][j] < 10) {
				msg += " " + to_string(matrix[i][j]) + " ";
			}
			else {
				msg += to_string(matrix[i][j]) + " ";
			}
		}
		msg += "\n";
	}

	return msg;
}