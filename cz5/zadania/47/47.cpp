#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 5;
  int matrix[SIZE][SIZE];

  cout << endl;

  for (int y = 0; y < SIZE; y++)
  {
    for (int x = 0; x < SIZE; x++)
    {
      if (x == y)
        matrix[y][x] = 9;
      else
        matrix[y][x] = 1;

      cout << matrix[y][x];
    }

    cout << endl;
  }

  return 0;
}