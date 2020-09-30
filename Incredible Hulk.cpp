#include<iostream>
using namespace std;

int Bits(int n){
	int count=0;
	while (n!=0){
		if (n&1==1){
			count++;
		}
		n=(n>>1);
	}
	return count;
}

int main() {
	int n;
	cin>>n;

	int no;

	for (int i=0; i<n; i++){

		cin>>no;
		cout<<Bits(no)<<endl;

	}
	return 0;
}
