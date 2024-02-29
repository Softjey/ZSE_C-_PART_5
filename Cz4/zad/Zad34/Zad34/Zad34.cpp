#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	cout << "Podaj numer w dzienniku: ";
	int num;
	cin >> num;

	for (int i = num + 180; i <= num + 200; i++) {
		printf("SQRT(%d) = %.2f\n", i, sqrt(i));

	}
}

