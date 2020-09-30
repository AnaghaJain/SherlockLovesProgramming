#include <iostream>
using namespace std;

int Bits (int n){
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    int a, b;

    for (int i=0;i<n;i++){
        cin>>a>>b;
        int ans=0;
        for (int j=a; j<=b; j++){
        ans=ans+Bits(j);
    }
        cout<<ans<<endl;
     }

    }
