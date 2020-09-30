#include <iostream>
#include<vector>
using namespace std;


#define ll long

   const ll N = 7368787;    //global variables
    int p[N+1]={0};
	vector<int> primes;

void primesieve (int *p, ll n){
    for (ll i=3; i<=n; i+=2){
        p[i]=1;
    }

    p[0]=p[1]=0;
    p[2]=1;

    for (ll i=3; i<=n; i+=2){
        if(p[i]==1){
            for (ll j=i*i; j<=n; j=j+(2*i)){
                p[j]=0;
            }
        }
    }

    primes.push_back(2);

    for (ll i=3; i<=n; i+=2){
        if (p[i]==1){
            primes.push_back(i);
        }
    }
}

int main() {

    primesieve(p, N);

	int t;
	cin>>t;

	while (t--){
    ll n;
    cin>>n;
    cout<<primes[n-1]<<endl;
	}
}
