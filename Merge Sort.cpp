#include <iostream>
using namespace std;
#define ll long long

void merge(ll int *a, int s, ll int e){
    int mid= (s+e)/2;
    int i=s;
    int k=s;
    int j=mid+1;
    int n=e+1;


    ll int temp[200000];

    while(i<=mid && j<=e){

        if(a[i]<a[j]){
            temp[k]=a[i];
            i++;
            k++;
        }

        else {
            temp[k]=a[j];
            j++;
            k++;
        }

    }
        while (i<=mid){
            temp[k]=a[i];
            k++;
            i++;
        }

        while (j<=e){
            temp[k]=a[j];
            j++;
            k++;
        }


    for(int i=s; i<=e; i++){
        a[i]=temp[i];
    }

}

void mergesort (ll int *a, int s, int e){
    if(s>=e){
        return;
    }

    ll int mid= (s+e)/2;

    mergesort (a, s, mid);
    mergesort (a, mid+1, e);
    merge (a, s, e);
}


int main() {

    ll int n;
    cin>>n;

    ll int arr[200000];

    for(ll int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergesort(arr, 0, n-1);

    for(ll int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
