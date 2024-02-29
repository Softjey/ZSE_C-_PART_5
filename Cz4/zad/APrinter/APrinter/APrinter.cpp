#include <iostream>
#include <string>

using namespace std;

string repeat(string str, int amount) {
	string result = "";

	for (int i = 0; i < amount; i++) {
		result += str;
	}

	return result;
}

int main()
{
	const int MIN_HEIGHT = 5;
	const int MAX_HEIGHT = 50;
	const string symbol = "A";
	const string separator = " ";
	int height;

	do {
		cout << "Podaj wysokosc litery A(min 5, max 50):";
		cin >> height;
	} while (MIN_HEIGHT > height || height > MAX_HEIGHT);
	
	const int width = height * 2 - 1;
	const int middle = (height / 2) - 1;

	const string firstString = repeat(separator, width / 2) + symbol + repeat(separator, width / 2) + '\n';

	cout << firstString;

	int row = 0;

	while (row + 1 < height) {
		const int spaceInside = row * 2 + 1;
		const string spaceOutside = repeat(separator, (width - spaceInside - 2) / 2);

		if (row == middle) {
			cout << spaceOutside + repeat(symbol, spaceInside + 2) + spaceOutside + '\n';
			row++;
			continue;
		}

		cout << spaceOutside + symbol + repeat(separator, spaceInside) + symbol + spaceOutside + '\n';
		row++;
	}

	return 0;
}
