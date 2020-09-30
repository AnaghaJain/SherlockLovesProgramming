#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second<p2.second;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int, int>> v;

    for(int i=0; i<n; i++){
        int center, radius;
        cin>>center>>radius;
        v.push_back(make_pair(center+radius, center-radius));
    }

        sort(v.begin(), v.end());

        int ans = 1;
        int finish = v[0].first;

        for(int i = 0; i<n; i++){
            if(v[i].second>=finish){
                finish = v[i].first;
                ans++;
            }
        }
        cout<<n-ans<<endl;

    }
