#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int numberOfJumps;
  cout << "Podaj ilosc skokow narciarskich odnotowanych przez trenera: ";
  cin >> numberOfJumps;

  int jumps[numberOfJumps];

  cout << "Podaj jakie wyniki skokow uzyskał zawodnik: ";
  for (int i = 0; i < numberOfJumps; ++i)
  {
    cin >> jumps[i];
  }

  int start, finish;
  cout << "Podaj długosc sprawdzanego okresu (liczby rozdziel enterem): ";
  cin >> start >> finish;

  if (start < 0 || start >= finish || finish > numberOfJumps)
  {
    cerr << "Nieprawidłowy zakres.\n";
    return 1;
  }

  bool isReadyForCompetition = true;

  for (int i = start + 1; i < finish; ++i)
  {
    if (jumps[i] <= jumps[i - 1])
    {
      isReadyForCompetition = false;

      break;
    }
  }

  if (isReadyForCompetition)
    cout << "TAK - jedziemy na zawody\n";
  else
    cout << "Nic z tego - za mało bananów!\n";

  return 0;
}
