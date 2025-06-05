#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, odd=0, even=0;
  cin>>a>>b>>c;
  if(a%2==1) odd++;
  else even++;
  if(b%2==1) odd++;
  else even++;
  if(c%2==1) odd++;
  else even++;
  cout<<"even "<<even<<endl;
  cout<<"odd "<<odd<<endl;
}