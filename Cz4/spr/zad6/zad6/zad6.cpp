#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


void setRandomColor() {
	int randomColor = rand() % 15 + 1;
	int randomBackground = rand() % 15 + 1;
	

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), randomColor | randomBackground << 4);
}

void resetColor() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void printSurnamesLine(string surname) {
	for (int i = 0; i < 6; i++) {
		setRandomColor();
		cout << surname;
		resetColor();
		cout << "   ";
	}
}

int main()
{
	string surname = "Mysiv";

	for (int i = 0; i < 3; i++) {
		if (i % 2 == 0) {
			cout << "      ";
		}
		
		printSurnamesLine(surname);
		cout << endl;
	}

    resetColor();
}
