#include <iostream>
using namespace std;

int main()
{
  const int MAX_SIZE = 10;
  int array[MAX_SIZE];
  int size;

  int sign_changes = 0;

  do
  {
    cout << "Podaj ilosc elementow tablicy a (nie wiecej niz 10): ";
    cin >> size;
  } while (size > MAX_SIZE || size <= 0);

  for (int i = 0; i < size; ++i)
  {
    cout << "Podaj a[" << i << "]: ";
    cin >> array[i];
  }

  for (int i = 0; i < size - 1; ++i)
  {
    if ((array[i] < 0 && array[i + 1] >= 0) || (array[i] >= 0 && array[i + 1] < 0))
    {
      sign_changes++;
    }
  }

  cout << "Ilosc zmian znakow: " << sign_changes << endl;

  return 0;
}
