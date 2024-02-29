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
	for (int i = 0; i < 20; i++) {
		cout << repeat(" ", i) << "*" << endl;
	}

	system("PAUSE");
	system("cls");

	for (int i = 19; i >= 0; i--) {
		cout << repeat(" ", i) << "*" << endl;
	}
}
