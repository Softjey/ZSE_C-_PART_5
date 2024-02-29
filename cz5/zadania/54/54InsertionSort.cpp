#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int array[7] = {21, 7, 4, 10, 27, 8, 73};

  for (int i = 0; i < 7; i++)
  {
    cout << array[i] << ' ';
  }

  cout << endl;

  for (int i = 1; i < 7; i++)
  {
    int currentValue = array[i];
    int j = i - 1;

    while (j >= 0 && array[j] > currentValue)
    {
      array[j + 1] = array[j];

      j--;
    }

    array[j + 1] = currentValue;
  }

  for (int i = 0; i < 7; i++)
  {
    cout << array[i] << ' ';
  }

  cout << endl;

  return 0;
}