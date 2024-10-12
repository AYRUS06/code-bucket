#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getKthDigitFromLast(int n, int k)
{
  int i = 0;
  while (i < k)
  {
    n = n / 10;
    i++;
  }
  return n % 10;
}

int main()
{
  int n;
  cin >> n;
  if (n != 0)
  {
    if (n % 2 == 0)
      cout << "Mahmoud" << endl;
    else
      cout << "Ehab" << endl;
  }
  return 0;
}