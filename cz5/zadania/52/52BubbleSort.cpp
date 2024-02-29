#include <iostream>

using namespace std;

int main()
{
  int array[7] = {21, 7, 4, 10, 27, 8, 73};

  for (int i = 0; i < 7; i++)
  {
    cout << array[i] << ' ';
  }

  cout << endl;

  for (int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7 - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < 7; i++)
  {
    cout << array[i] << ' ';
  }

  cout << endl;

  return 0;
}