#include <iostream>
#include <vector>
#include <algorithm>
bool IsEven(int n) {
    return n%2==0?true:false;
}
int main() {
    using namespace std;
    vector<int> _array_;
    int to_print1=-1,to_print2=-1;
    for (int i=0; i<25; i++) {
        int x=0;
        cin>>x;
        _array_.push_back(x);
    }
    int row0=0,row1=0,row2=0,row3=0,row4=0;
    int c0=0,c1=0,c2=0,c3=0,c4=0;
    for (int index=0; index<_array_.size(); index++) {
        int value = _array_[index];
        if (index<5) {
            row0 += value;
        } else if (index<10) {
            row1 += value;
        } else if (index<15) {
            row2 += value;
        } else if (index<20) {
            row3 += value;
        } else if (index<25) {
            row4 += value;
        }
        index%5==0?c0+=value:false;
        (index-1)%5==0?c1+=value:false;
        (index-2)%5==0?c2+=value:false;
        (index-3)%5==0?c3+=value:false;
        (index-4)%5==0?c4+=value:false;
    }
    bool row=false,column=false;
    int return_true = -1;
    IsEven(row0)==false?to_print1=0:false;
    IsEven(row1)==false?to_print1=1:false;
    IsEven(row2)==false?to_print1=2:false;
    IsEven(row3)==false?to_print1=3:false;
    IsEven(row4)==false?to_print1=4:false;
    IsEven(c0)==false?to_print2=0:false;
    IsEven(c1)==false?to_print2=1:false;
    IsEven(c2)==false?to_print2=2:false;
    IsEven(c3)==false?to_print2=3:false;
    IsEven(c4)==false?to_print2=4:false;
    cout<<to_print1<<" "<<to_print2;
    return 0;
}