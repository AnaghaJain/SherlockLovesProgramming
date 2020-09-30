#include<iostream>
using namespace std;

int gcd(int a, int b){
	return b==0? a : gcd(b, a%b);
}
int main() {
	int n1, n2;
	cin>>n1>>n2;
	int x;
	x = gcd(n1, n2);
	int lcm = (n1*n2)/x;
	cout<<lcm;
	return 0;
}
