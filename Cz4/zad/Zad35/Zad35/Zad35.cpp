#include <iostream>

using namespace std;

int main() 
{
	float sum = 0;

	for (int i = 1; i < 1000000; i++) {
		float a = 1.0 / i;

		sum += a;

	}
		cout << "suma w petli = " << sum << endl;
}
