#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];

    for (int i=0;i<n; i++){
        cin>>arr[i];
    }

    int t;
    cin>>t;
    sort(arr, arr+n);

    while(t--){
        int no;
        cin>>no;

        bool present = binary_search(arr, arr+n, no);

        if(present){
            int lb = lower_bound(arr, arr+n, no) - arr;
            int ub = upper_bound(arr, arr+n, no) - arr - 1;

            cout<<lb<<" "<<ub<<endl;
        }
        else cout<<"-1 -1"<<endl;


    }


}
