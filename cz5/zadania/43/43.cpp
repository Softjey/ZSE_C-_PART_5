#include <iostream>
using namespace std;

int main() {
    const int size = 7; 
    int numbers[size];
    int sum = 0;
    double average;

    cout << "Wprowadz 7 liczb: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = static_cast<double>(sum) / size;

    cout << "Suma: " << sum << endl;
    cout << "Srednia arytmetyczna: " << average << endl;

    return 0;
}
