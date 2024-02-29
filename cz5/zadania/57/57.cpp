#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Wprowadz ktory element ciagu Fibonacciego chcesz zobaczyc: ";
  cin >> n;
  int tablica[n];

  for (int i = 0; i < n; i++)
  {
    if (i < 2)
    {
      tablica[i] = 1;
    }
    else
    {
      tablica[i] = tablica[i - 1] + tablica[i - 2];
    }

    cout << i + 1 << " wyraz ciagu Fibonacciego: " << tablica[i] << endl;
  }

  return 0;
}