#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;
    int N,K,T,pos=1, count=1;
    vector<int> dup;
    cin>>N>>K>>T;
    dup.push_back(1);
    while (true) {
        pos += K;
        if (pos > N) {
            pos -= N;
        }
        if (find(dup.begin(), dup.end(), pos) != dup.end()) {
            break;
        } else {
            dup.push_back(pos);
            count++;
        }
        if (pos == T) {
            break;
        }
    }
    cout<<count;
    return 0;
}