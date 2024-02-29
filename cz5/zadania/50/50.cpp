#include <iostream>
using namespace std;

const int SIZE = 3;

void printMatrix(const int matrix[SIZE][SIZE + 2])
{
  for (int i = 0; i < SIZE; ++i)
  {
    for (int j = 0; j < SIZE + 2; ++j)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int matrix[SIZE][SIZE];

  for (int i = 0; i < SIZE; ++i)
  {
    for (int j = 0; j < SIZE; ++j)
    {
      cout << "Element [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  int fullMatrix[SIZE][SIZE + 2];
  for (int i = 0; i < SIZE; ++i)
  {
    for (int j = 0; j < SIZE + 2; ++j)
    {
      if (j < SIZE)
      {
        fullMatrix[i][j] = matrix[i][j];
      }
      else
      {
        fullMatrix[i][j] = matrix[i][j - SIZE];
      }
    }
  }

  cout << "Macierz 3x5:" << endl;
  printMatrix(fullMatrix);

  int determinant = 0;
  for (int i = 0; i < SIZE; ++i)
  {
    determinant += fullMatrix[0][i] * fullMatrix[1][i + 1] * fullMatrix[2][i + 2];
  }
  for (int i = 0; i < SIZE; ++i)
  {
    determinant -= fullMatrix[2][i] * fullMatrix[1][i + 1] * fullMatrix[0][i + 2];
  }

  cout << "Wartosc wyznacznika: " << determinant << endl;

  return 0;
}
