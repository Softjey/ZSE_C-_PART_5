#include <iostream>

using namespace std;

int main()
{
	float sum = 0;

	for (;;) {
		cout << "Podaj liczbe do sumowania: ";
		float num;
		cin >> num;

		if (num < 0) {
			continue;
		}

		if (num == 0) {
			break;
		}

		sum += num;
		cout << "Suma czesciowa wynosi: " << sum << endl;
	}


}
