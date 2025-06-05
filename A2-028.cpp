#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    using namespace std;
    int N;
    string a,b;
    vector<int> c;
    cin>>N;
    cin>>a;
    cin>>b;
    for (int index=0; index<N; index++) {
        char a_char = a[index], b_char = b[index];
        int x=a_char - '0', y=b_char - '0';
        if (x+y != 9) {
            c.push_back(index);
        }
    }
    if (c.size() > 0) {
        cout<<"NO "<<c.size();
    } else {
        cout<<"YES";
    }
}