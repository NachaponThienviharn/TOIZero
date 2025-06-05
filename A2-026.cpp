#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    using namespace std;
    int n=0,max_i=0,max=0;
    vector<string> name;
    vector<int> weight,overweight_pos;
    cin>>n;
    for (int i=0;i<n;i++) {
        string name_tmp;
        int weight_tmp;
        cin>>name_tmp>>weight_tmp;
        name.push_back(name_tmp);
        weight.push_back(weight_tmp);
        if (weight_tmp > 15) {
            if (max < weight_tmp) {
                max_i = i;
                max = weight_tmp;
            }
            overweight_pos.push_back(i);
        } 
    }
    cout<<overweight_pos.size()<<endl;
    //int previous;
    cout<<name[max_i]<<" "<<max;
    //cout<<name[overweight_pos[max_pos(overweight_pos,weight)]]<<" "<<weight[overweight_pos[max_pos(overweight_pos,weight)]];
}