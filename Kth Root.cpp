#include <iostream>
#include <math.h>
using namespace std;
#define ll unsigned long long

ll kroot(ll n, int  k){

    ll s=0;
    ll e=n;
    ll  ans = -1;

    while (s<=e){
        ll  mid = s + (e-s)/2;
        //unsigned long long  temp= pow(mid, k);

        if(pow(mid, k)==n){
            ans = mid;
            return mid;
        }

        if(pow(mid, k)>n){
            e= mid-1;
        }

        else {
			ans = mid;
            s = mid+1;
        }
    }
	return ans;
}
int main() {
    ll t;
    cin>>t;

    while (t--){
        ll n;
        ll k;
        cin>>n>>k;

        cout<<kroot(n, k)<<endl;
    }
}
