#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a + b >= 50) {
    cout << a + b << "\npass";
  } else {
    cout << a + b << "\nfail";
  }
}