#include <iostream>
#include <cstdlib> 

using namespace std;

int main()
{
    int lineCounter = 0;

    for (int i = 33; i <= 255; i++) {
        char symbol = i;

        cout << "kod znaku  " << i << "  " << symbol;

        if (i % 3 == 2) {
            cout << "\n";
            lineCounter++;

            if (lineCounter % 20 == 0) {
                system("PAUSE"); 
                system("CLS");   
            }
        }
        else {
            cout << "\t";
        }
    }
    return 0;
}
