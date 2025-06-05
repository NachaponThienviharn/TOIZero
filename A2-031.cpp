#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    using namespace std;
    int length=0,n=0;
    vector<char> chromosome_1,chromosome_2;
    cin>>length;
    for (int i=0; i<length; i++){
        char x;
        cin>>x;
        chromosome_1.push_back(x);
    }
    for (int i=0; i<length; i++) {
        char x;
        cin>>x;
        chromosome_2.push_back(x);
    }
    cin>>n;
    for (int i=0; i<n; i++) {
        int a=0,b=0;
        char c=0;
        cin>>a>>b>>c;
        if (a==1) {
            //cout<<chromosome_1[b]<<endl;
            chromosome_1[b] = c;
        } else {
            //cout<<chromosome_2[b]<<endl;
            chromosome_2[b] = c;
            
        }
    }
    vector<char> temp;
    int correct = 0;
    for (int i=0; i<length; i++) {
        cout<<chromosome_1[i]<<" ";
        temp.push_back(chromosome_1[i]);
        temp.push_back(chromosome_2[i]);
        if ((find(temp.begin(),temp.end(),'A') != temp.end() && find(temp.begin(),temp.end(),'T') != temp.end()) || find(temp.begin(),temp.end(),'C') != temp.end() && find(temp.begin(),temp.end(),'G') != temp.end()) {
            correct++;
        }
        temp.clear();
    }
    cout<<endl;
    for (int i=0; i<length; i++) {
        cout<<chromosome_2[i]<<" ";
    }
    cout<<endl<<length-correct;
    return 0;
}