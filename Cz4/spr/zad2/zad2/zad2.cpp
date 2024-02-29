#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0, ilosc = 0, liczbaWiekszych = 0;
    double srednia;

    cout << "Podaj liczbe, od ktorej bedziesz liczal liczby parzyste dwucyfrowe: ";
    cin >> liczba;

    if (liczba < 10 || liczba > 99) {
        cout << "Liczba musi byc dwucyfrowa!" << endl;
        return 0;
    }

    cout << endl;

    for (int i = 10; i < 100; i += 2) {
        suma += i;
        ilosc++;

        if (i > liczba) {
            cout << i << " ";
            liczbaWiekszych++;
        }
    }

    cout << endl;
    cout << endl;

    if (ilosc > 0) {
        srednia = static_cast<double>(suma) / ilosc;
    }
    else {
        srednia = 0;
    }

    cout << "Suma to: " << suma << endl;
    cout << "Srednia to: " << srednia << endl;
    cout << "Ilosc liczb parzystych dwucyfrowych wiekszych od liczby " << liczba << " to: " << liczbaWiekszych << endl;

    return 0;
}
