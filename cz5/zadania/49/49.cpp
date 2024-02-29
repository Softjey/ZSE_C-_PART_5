#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void printMatrix(const int matrix[ROWS][COLS])
{
  for (int i = 0; i < ROWS; ++i)
  {
    for (int j = 0; j < COLS; ++j)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int matrix[ROWS][COLS];

  cout << "Wczytywanie macierzy 3 na 4." << endl;
  for (int i = 0; i < ROWS; ++i)
  {
    for (int j = 0; j < COLS; ++j)
    {
      cout << "Podaj element [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  cout << "Twoja macierz:" << endl;
  printMatrix(matrix);

  int sum = 0;
  for (int i = 0; i < ROWS; ++i)
  {
    for (int j = 0; j < COLS; ++j)
    {
      sum += matrix[i][j];
    }
  }
  cout << "Suma wszystkich elementow macierzy: " << sum << endl;

  int number;
  cout << "Podaj liczbe, przez ktora mam pomnozyc macierz: ";
  cin >> number;

  for (int i = 0; i < ROWS; ++i)
  {
    for (int j = 0; j < COLS; ++j)
    {
      matrix[i][j] *= number;
    }
  }

  cout << "Macierz po pomnozeniu przez liczbe " << number << ":" << endl;
  printMatrix(matrix);

  return 0;
}
