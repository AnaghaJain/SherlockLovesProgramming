#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;

    int a[100000];
    int cs =0;
    int max_sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cs=cs+a[i];
        if(cs<0){
            cs=0;
        }

        max_sum=max(max_sum, cs);
    }

    cout<<max_sum<<endl;
    }


}
