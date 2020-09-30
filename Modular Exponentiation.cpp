#include <iostream>
using namespace std;

#define ll long long

int power_optimised(int a, int b, int c){
    ll ans=1;

    while(b--){
        ans=(ans*a)%c;
    }
    return ans;
}
int main() {
    int a, b, c;
    cin>>a>>b>>c;

    ll x = power_optimised(a, b, c);
	cout<<x<<endl;
}
