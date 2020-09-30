#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100000];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n; i++){
        if(a[i]==a[i+2]){
            i=i+2;
        }
        else{
            cout<<a[i];
        }
    }


}
