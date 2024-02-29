#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj miesiac twojego urodzenia: ";
    int startMys = 1;
    cin >> startMys;

    const int endMys = startMys + 30;


    for (int i = startMys; i <= endMys; i++) {
        if (i % 2 == 0) {
            cout << i << ' ';
        }
    }
}
