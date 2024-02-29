#include <windows.h>
#include <iostream>

using namespace std;

void SetColor(int color)
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, color);
}

void SetCursor(short x, short y)
{
  HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD cursorPos;
  cursorPos.X = x;
  cursorPos.Y = y;
  SetConsoleCursorPosition(consoleHandle, cursorPos);
}

const int START_ON_LINE = 10;
const int WIDTH = 80;
const int HEIGHT = 15;
const int LINE_LENGTH = 7;
const int SLEEP_TIME = 50;
const char SYMBOL = '*';
const int colors[LINE_LENGTH] = {12, 14, 10, 2, 3, 5, 1};
const int SOUND_FREQ[] = {
    262, 294, 330, 349, 392, 440, 494,
    523, 587, 659, 698, 784, 880, 988,
    1047, 1175, 1319, 1397, 1568, 1760, 1976};

void GenerateSound(int note)
{
  int noteDiapazon = sizeof(SOUND_FREQ) / sizeof(SOUND_FREQ[0]);

  if (note >= 0 && note < noteDiapazon)
  {
    Beep(SOUND_FREQ[note], SLEEP_TIME * LINE_LENGTH);
  }
}

void drawLine(int y)
{
  int arraySize = sizeof(SOUND_FREQ) / sizeof(SOUND_FREQ[0]);
  int noteIndex = (HEIGHT + START_ON_LINE - y) % arraySize;
  GenerateSound(noteIndex);

  for (int i = 0; i < LINE_LENGTH; ++i)
  {
    SetColor(colors[i]);
    cout << SYMBOL;
  }

  Sleep(SLEEP_TIME);
}

int main()
{
  int x = 5;
  int y = HEIGHT + START_ON_LINE;
  int stepX = 1;
  int stepY = 1;

  while (x < (WIDTH / 2) && y >= START_ON_LINE)
  {
    SetCursor(x, y);
    drawLine(y);

    if (x % 5 == 0)
    {
      stepX++;
    }

    x += stepX;
    y -= stepY;
  }

  while (x < WIDTH && y <= HEIGHT + START_ON_LINE)
  {
    SetCursor(x, y);
    drawLine(y);

    if (x % 5 == 0)
    {
      stepX--;
    }

    x += stepX;
    y += stepY;
  }

  SetColor(7);
  SetCursor(0, HEIGHT + START_ON_LINE + 5);

  return 0;
}
