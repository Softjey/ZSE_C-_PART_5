#include <iostream>
#include <cmath>

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
	int inputNum;
	cout << "Podal numer w dzienniku: ";
	cin >> inputNum;

	int num = 1000 + inputNum * 100 + 15;

	cout << "Podana liczba=1000+num*100+15 wynosi: " << num << endl;

	if (isPrime(num))
	{
		cout << "liczba " << num << " to jest liczba pierwsza" << "\n";
	}

	while (!isPrime(num)) {
		num++;
	}

	cout << "Najblizsza pierwsza liczba to: " << num << endl;

	return 0;
}
