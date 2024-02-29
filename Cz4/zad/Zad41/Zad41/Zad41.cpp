#include <iostream>

using namespace std;

bool isPrime(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int start;
	int end;

	cout << "Podaj start liczbe: ";
	cin >> start;

	cout << "Podaj end liczbe: ";
	cin >> end;

	int suma = 0;

	for (int i = start; i <= end; i++) {
		if (isPrime(i)) {
			cout << "Liczba " << i << " jest pierwsa" << endl;
			suma += i;
		}
	}

	cout << "suma: " << suma << endl;
}
