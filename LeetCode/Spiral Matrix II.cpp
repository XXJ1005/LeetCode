#if 0
#include "common.h"

vector<vector<int>> generateMatrix(int n) {
	vector<vector<int>> result;
	if (n <= 0)  return result;
	for (int i = 0; i < n; i++) {
		vector<int> temp(n, 1);
		result.push_back(temp);
	}

	int row = 0, colum = 0;
	int count = 2;
	result[0][0] = 1;
	for (int i = 0; i < 2 * n - 1; i++) {
		switch (i % 4) {
		case 0: {
			colum++;
			while (colum < n - i / 4) {
				result[row][colum] = count;
				colum++;
				count++;
			}
			colum--;
			break;
		}
		case 1: {
			row++;
			while (row < n - i / 4) {
				result[row][colum] = count;
				row++;
				count++;
			}
			row--;
			break;
		}
		case 2: {
			colum--;
			while (colum >= i / 4) {
				result[row][colum] = count;
				colum--;
				count++;
			}
			colum++;
			break;
		}
		case 3: {
			row--;
			while (row > i / 4) {
				result[row][colum] = count;
				row--;
				count++;
			}
			row++;
			break;
		}
		default: break;
		}
	}

	return result;
}

int main() {
	int n;
	while (cin >> n) {
		vector<vector<int>> hh = generateMatrix(n);

		for (int i = 0; i < hh.size(); i++) {
			for (int j = 0; j < hh[i].size(); j++) {
				cout << hh[i][j] << " ";
			}
			cout << endl;
		}
	}
	int j;
	cin >> j;
	return 0;
}
#endif