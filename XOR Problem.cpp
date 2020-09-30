#include<iostream>
using namespace std;

int main () {

	int x, y;
	cin>>x>>y;

	int ans=0;
	int abc;

	for (int i=x; i<=y; i++){
		for (int j=x; j<=y; j++){
			abc = i^j;
			if (abc>ans){
				ans=abc;
			}
		}
	}

	cout<<ans;

	return 0;
}
