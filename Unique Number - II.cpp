#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100000];
    cin>>n;

    int x = 0;
    for (int i=0; i<n; i++){
        cin>>a[i];
        x = x^a[i];
    }

    int temp=x;
    int pos=0;
    while((temp&1)==0){
        pos++;
        temp=temp>>1;
        }

    //the first set bit is at 'pos'
    //creating the mask

    int mask=(1<<pos);

    //find those no which contain setbit at that position.

    int n1=0;
    for (int i=0; i<n; i++){
        if (a[i]&mask>0){
            n1=n1^a[i];
        }
    }

    int n2=x^n1;

    cout<<n2<<" "<<n1;


}
