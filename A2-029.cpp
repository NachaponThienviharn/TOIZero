#include <iostream>
int main() {
    using namespace std;
    int n=0;
    cin>>n;
    for (int index=0; index<=n; index++) {
        for (int index2=0; index2<index; index2++) {
            if (index != 1 && index != n) {
                if (index2 != 0 && index2 != index-1) {
                    cout<<1<<" "; 
                } else {
                    cout<<0<<" ";
                }
            } else {
                cout<<0<<" ";
            }
        }
        if (index > 0) {
            cout<<endl;
        }
    }
}