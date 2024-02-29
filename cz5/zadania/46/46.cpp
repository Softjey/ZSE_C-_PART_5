#include <iostream>
using namespace std;

int main()
{
  int nums[8];
  int less0 = 0, equal0 = 0, greater0 = 0;

  for (int i = 0; i < 8; ++i)
  {
    cout << "Podaj a[" << i << "]: ";
    cin >> nums[i];
  }

  for (int i = 0; i < 8; ++i)
  {
    if (nums[i] > 0)
      greater0++;
    else if (nums[i] == 0)
      equal0++;
    else
      less0++;
  }

  cout << "Elementów > 0: " << greater0 << endl;
  cout << "Elementów < 0: " << less0 << endl;
  cout << "Elementów = 0: " << equal0 << endl;

  return 0;
}
