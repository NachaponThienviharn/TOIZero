#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;
    vector<int> scoreVector;
    int n;
    int max=0,Mcount=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        int score_tmp;
        cin>>score_tmp;
        scoreVector.push_back(score_tmp);
        if (max < score_tmp) {
            max = score_tmp;
        }
    }
    for (int i=0; i<scoreVector.size(); i++) {
        if (scoreVector[i] == max) {
            Mcount++;
        }
    }
    cout<<max<<endl<<Mcount;
    return 0;
}