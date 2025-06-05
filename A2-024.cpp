#include <iostream>
#include <algorithm>
#include <algorithm>

int _max(std::vector<int> _list_) {
    int temp_max=0;
    for (int i=0; i<_list_.size(); i++){
        if (i==0) {
            temp_max = _list_[i];
        } else {
            if (temp_max < _list_[i]) {
                temp_max = _list_[i];
            }
        }
    }
    return temp_max;
}

int main() {
    using namespace std;
    int L,P,rabbit,monkey,frog;
    int point_rab=0,point_mon=0,point_frog=0;
    cin>>L>>P;
    cin>>rabbit>>monkey>>frog;
    for (int i=0; i<P; i++) {
        int length=0,point=0;
        cin>>length>>point;
        (length%rabbit==0)?point_rab+=point:false;
        (length%monkey==0)?point_mon+=point:false;
        (length%frog==0)?point_frog+=point:false;
    }
    vector<int> temp_list;
    //vector<string> _to_print_ = {"Rabbit","Monkey","Frog"};
    temp_list.push_back(point_rab);
    temp_list.push_back(point_mon);
    temp_list.push_back(point_frog);
    int _top_point_ = _max(temp_list);
    if (point_rab == _top_point_) {
        cout<<"Rabbit "<<point_rab<<endl;
    }
    if (point_mon == _top_point_) {
        cout<<"Monkey "<<point_mon<<endl;
    }
    if (point_frog == _top_point_) {
        cout<<"Frog "<<point_frog<<endl;
    }

}