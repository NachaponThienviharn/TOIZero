#include <iostream>
#include <vector>
#include <algorithm>

bool findElement(char x, std::vector<char> y) {
    if (find(y.begin(),y.end(),x) != y.end()) {
        return true;
    } else {
        return false;
    }
}

int maxElement(std::vector<int> x){
    int M=0;
    for (int i=0;i<x.size();i++) {
        if (M<x[i]) {
            M = x[i];
        }
    }
    return M;
}

int main() {
    using namespace std;
    string x;
    int cbU=0,cbB=0;
    vector<char> reqU = {'U','u'};
    vector<char> reqB = {'B','b'};
    cin>>x;
    for (int i=0;i<x.size();i++){
        //cout<<x[i]<<endl;
        if (findElement(x[i],reqU)) {
            cbU++;
        } else if (findElement(x[i],reqB)) {
            cbB++;
        }
    }
    if (cbB >= 1 && cbU >= 2) {
        vector<int> cbUset;
        cbU = 0;
        for (int i=0;i<x.size();i++){
            if (findElement(x[i],reqU)) {
                if (cbU == 0 && i > 0) {
                    if (findElement(x[i-1],reqB)) {
                        cbU++;
                    }
                } else if (cbU > 0) {
                    cbU++;
                }
            } else {
                cbUset.push_back(cbU);
                cbU = 0;
            }
        }
        if (cbU > 0) {
            cbUset.push_back(cbU);
            cbU = 0;
        }
        cout<<"Yes "<<maxElement(cbUset);
    } else {
        if (cbB >= 1) {
            int num=0;
            for (int i=0;i<x.size();i++) {
                if (x[i] == 'b' || x[i] == 'B') {
                    num = i;
                }
            }

            for (int i=0;i<x.size();i++) {
                if (i > num) {
                    cout<<"U";
                } else {
                    cout<<x[i];
                }
            }
        } else {
            int a=0;
            for (int i=0;i<x.size();i++) {
                if (a >= 3) {
                    a=0;
                }
                if (a==0) {
                    cout<<"B";
                } else {
                    cout<<"U";
                }
                a++;
            }
        }
    }
    return 0;
}