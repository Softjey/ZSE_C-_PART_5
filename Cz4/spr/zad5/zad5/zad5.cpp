#include <iostream>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawFigure(int width, int height) {
    int widthMiddle = width / 2;
    int startingY = 0;

    for (int y = startingY; y < startingY + height; y++) {
        gotoxy(widthMiddle, y);
        cout << "*";
    }

    for (int x = widthMiddle - width / 2; x < widthMiddle + width / 2; x++) {
        gotoxy(x, startingY + height - 1);
        cout << "*";
    }
}

int main() {
    int diaryNumber, birthMonth;
    cout << "Podaj Twoj numer w dzienniku: ";
    cin >> diaryNumber;
    cout << "Podaj Twoj miesiac urodzenia: ";
    cin >> birthMonth;

    int width = diaryNumber + 20; 
    int height = birthMonth + 5; 

    cout << "Szerokosc: " << width;
    cout << "Wysokosc: " << height;

    drawFigure(width, height);
    return 0;
}
