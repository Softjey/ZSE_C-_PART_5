#include <iostream>

using namespace std;

int main()
{
  int product = 1;

  int numbers[7];

  cout << "Wprowadz 7 liczb: ";

  for (int i = 0; i < 7; i++)
  {
    cin >> numbers[i];
    product *= numbers[i];
  }

  return 0;
}