#include <iostream>
#include <cstdio>

using namespace std;

string repeat(string str, int amount) {
	string sum = "";

	for (int i = 0; i < amount; i++) {
		sum += str;
	}

	return sum;
}

int main()
{
	int maxValue = 7;

	cout << " |";

	for (int i = 1; i <= maxValue; i++) {
		printf("%3d", i);
	}

	cout << "\n==" + repeat("=", maxValue * 3) + '\n';

	for (int row = 1; row <= maxValue; row++) {
		cout << row << "|";

		for (int col = 1; col <= maxValue; col++) {
			printf("%3d", col * row);
		}

		cout << endl;
	}

	return 0;
}
