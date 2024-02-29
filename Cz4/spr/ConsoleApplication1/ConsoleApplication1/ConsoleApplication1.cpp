#include <iostream>
using namespace std;

bool isPrime(int liczba) {
    if (liczba <= 1) return false;
    if (liczba <= 3) return true;

    if (liczba % 2 == 0 || liczba % 3 == 0) return false;

    for (int i = 5; i * i <= liczba; i += 6) {
        if (liczba % i == 0 || liczba % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int dol, gora;
    cout << "Podaj dolna liczbe przedzialu przeszukiwania=";
    cin >> dol;
    cout << "Podaj gorna liczbe przedzialu przeszukiwania=";
    cin >> gora;

    cout << "Znalezione liczby blizniacze to:\n";

    for (int i = dol; i <= gora; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << "   " << i + 2 << endl;
        }
    }

    cout << "Aby kontynuowac, nacisnij dowolny klawisz . . .\n";

    return 0;
}