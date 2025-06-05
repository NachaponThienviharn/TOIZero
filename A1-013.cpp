#include <bits/stdc++.h>

using namespace std;

int main() {
  int digit;
  char h;
  cin >> h >> digit;
  if (h == 'H' && digit == 4567) {
    cout << "safe unlocked";
  } else if (h == 'H' && digit != 4567) {
    cout << "safe locked - change digit";
  } else if (h != 'H' && digit == 4567) {
    cout << "safe locked - change char";
  } else {
    cout << "safe locked";
  }
}