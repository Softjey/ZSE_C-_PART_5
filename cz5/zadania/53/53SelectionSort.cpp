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

  for (int i = 0; i < 7; i++)
  {
    int minIndex = i;

    for (int j = i + 1; j < 7; j++)
    {
      if (array[j] < array[minIndex])
      {
        minIndex = j;
      }
    }

    if (minIndex != i)
    {
      int temp = array[minIndex];
      array[minIndex] = array[i];
      array[i] = temp;
    }
  }

  for (int i = 0; i < 7; i++)
  {
    cout << array[i] << ' ';
  }

  cout << endl;

  return 0;
}