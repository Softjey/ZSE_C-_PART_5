#include <iostream>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawCross(int centerX, int centerY) {
    int halfSize = 5 / 2; 
    for (int i = -halfSize; i <= halfSize; ++i) {
        gotoxy(centerX + i, centerY); 
        cout << "*";
    }
    for (int i = -halfSize; i <= halfSize; ++i) {
        gotoxy(centerX, centerY + i); 
        cout << "*";
    }
}

int main() {
    int centerX = 60;
    int centerY = 13;

    system("cls"); 
    drawCross(centerX, centerY); 
    gotoxy(0, 24);

    return 0;
}
