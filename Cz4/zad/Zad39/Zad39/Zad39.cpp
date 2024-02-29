#include <iostream>
#include <Windows.h>

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
	const string SYMBOL = "-";
	const string CENTER_SYMBOL = "0";

	COORD centerCoord;

	cout << "Podaj x: ";
	cin >> centerCoord.X;

	cout << "Podaj y: ";
	cin >> centerCoord.Y;

	cout << "Podaj dlugosc linii: ";
	int D;
	cin >> D;

	COORD lineCoord;

	lineCoord.X = centerCoord.X - D / 2;
	lineCoord.Y = centerCoord.Y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), lineCoord);
	cout << repeat(SYMBOL, D  / 2);
	cout << CENTER_SYMBOL;
	cout << repeat(SYMBOL, D / 2);
}
