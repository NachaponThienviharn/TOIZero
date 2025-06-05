#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  char n;
  cin >> t >> n;
  if (n == 'c' || n == 'C') {
    if (t >= 100) {
      cout << "gas";
    } else if (t > 0) {
      cout << "liquid";
    } else {
      cout << "solid";
    }
  } else if (n == 'f' || n == 'F') {
    if (t >= 212) {
      cout << "gas";
    } else if (t > 32) {
      cout << "liquid";
    } else {
      cout << "solid";
    }
  }
}
