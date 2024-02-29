#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;

    for (int i = 5; i <= sqrt(number); i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

int w(int i) {
    return i * i + i + 41;
}

int main() {
    for (int i = 0; i < 40; ++i) {

        if (i % 5 == 0 && i != 0) {
            system("pause");
        }

        int result = w(i);
        cout << "i=" << i << " w(" << i << ")=" << result << endl;
    }
    return 0;
}
