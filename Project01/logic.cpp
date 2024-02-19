#include <iostream>
#include <string>

using namespace std;

#define size 100

string finding_the_max_group_highest_marks(int matrix[size][size], int classes, int students) {
	if (students <= 0 || students > size ||
		classes <= 0 || classes > size) {
		return "Incorrect data was entered";
	}

	string group = "";

	int max_count = 0;

	for (int i = 0; i < classes; i++) {
		int count = 0;
		for (int j = 0; j < students; j++) {
			if (matrix[i][j] >= 9) {
				count++;
			}
		}
		if (max_count < count) {
			max_count = count;
		}
	}

	for (int i = 0; i < classes; i++) {
		int count = 0;
		for (int j = 0; j < students; j++) {
			if (matrix[i][j] >= 9) {
				count++;
			}
		}
		if (max_count = count) {
			group += to_string(i + 1);
		}
	}

	return group;
}

string finding_the_max_group_lowest_marks(int matrix[size][size], int classes, int students) {
	if (students <= 0 || students > size ||
		classes <= 0 || classes > size) {
		return "Incorrect data was entered";
	}

	string group = "";

	for (int i = 0; i < classes; i++) {
		int count = 0;
		for (int j = 0; j < students; j++) {
			if (matrix[i][j] >= 0 && matrix[i][j] <= 3) {
				group += to_string(i + 1);
				break;
			}
		}
	}

	return group;
}

void groups_with_the_highest_average_performance(int matrix[size][size],
													int classes, int students) {
	if (students <= 0 || students > size ||
		classes <= 0 || classes > size) {
		return;
	}


	for (int i = 0; i < classes; i++) {
		int average_performance = 0;
		bool flag = true;
		for (int j = 0; j < students; j++) {
			average_performance += matrix[i][j];
		}
		average_performance /= students;

		int overall_average_performance = 0;
		for (int k = 0; k < classes; k++) {
			if (k == i) {
				continue;
			}
			for (int l = 0; l < students; l++) {
				overall_average_performance += matrix[k][l];
			}
		}
		overall_average_performance /= (students * classes);
		if (overall_average_performance > average_performance) {
			flag = false;
		}
		if (flag) {

			for (int h = 0; h < students; h++) {
				if (matrix[i][h] <= 9) {
					matrix[i][h] += 1;
				}
			}
		}
	}

	return;
}

void sorting_groups_by_average_performance(int matrix[size][size],
										   int classes, int students) {
	if (students <= 0 || students > size ||
		classes <= 0 || classes > size) {
		return;
	}

	int group[size];

	for (int i = 0; i < classes; i++) {
		int average_performance = 0;
		bool flag = true;
		for (int j = 0; j < students; j++) {
			average_performance += matrix[i][j];
		}
		average_performance /= students;

		int overall_average_performance = 0;
		for (int k = 0; k < classes; k++) {
			if (k == i) {
				continue;
			}
			for (int l = 0; l < students; l++) {
				overall_average_performance += matrix[k][l];
			}
		}
		overall_average_performance /= (students * classes);
		if (overall_average_performance > average_performance) {
			flag = false;
		}
		if (flag) {

			for (int h = 0; h < students; h++) {
				if (matrix[i][h] <= 9) {
					matrix[i][h] += 1;
				}
			}
		}
	}

	return;
}