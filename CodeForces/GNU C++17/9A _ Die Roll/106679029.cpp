#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int a, b;
  cin >> a >> b;
  int Gcd = 6 - max(a, b) + 1;
  int gcd = __gcd(Gcd, 6);
  cout << Gcd / gcd << '/' << 6 / gcd << endl;
}