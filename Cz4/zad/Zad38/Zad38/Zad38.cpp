#include <iostream>

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
	const string SYMBOL = "*";

	cout << "Podaj swoj numer w dzienniku: ";
	int num;
	cin >> num;

	const int width = 5 + (num % 3);
	const int height = 11 + (num % 2);


	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;

	cout << repeat(SYMBOL, width) << endl;

	for (int i = 0; i < height - 2; i++) {
		cout << "*" << repeat(" ", width - 2) << "*" << endl;
	}

	cout << repeat(SYMBOL, width) << endl;
	

}
