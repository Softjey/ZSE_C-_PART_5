#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int main()
{
  int tablica[MAX_SIZE];
  int liczbaElementow;

  do
  {
    cout << "Podaj liczbe elementow do wprowadzenia (max 10): ";
    cin >> liczbaElementow;
  } while (liczbaElementow < 1 || liczbaElementow > MAX_SIZE);

  for (int i = 0; i < liczbaElementow; ++i)
  {
    cout << "Podaj element [" << i << "]: ";
    cin >> tablica[i];
  }

  for (int i = 0; i < liczbaElementow / 2; ++i)
  {
    int schowek = tablica[i];
    tablica[i] = tablica[liczbaElementow - i - 1];
    tablica[liczbaElementow - i - 1] = schowek;
  }

  cout << "Odwrócona tablica:" << endl;
  for (int i = 0; i < liczbaElementow; ++i)
  {
    cout << tablica[i] << " ";
  }
  cout << endl;

  return 0;
}
