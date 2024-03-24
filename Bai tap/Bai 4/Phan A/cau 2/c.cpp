#include <iostream>
#include <string>

using namespace std;

char a[] = "abcd";
int main()
{
  int n = sizeof(a) / sizeof(a[0]);
  cout << n;
  return 0;
}
