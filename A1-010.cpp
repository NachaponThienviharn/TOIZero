#include<bits/stdc++.h>

using namespace std;

int main() {
  int age; char s;
  cin>>age>>s;
  if (age<18||(s=='s'||s=='S')) cout<<20;
  else cout<<50;
}