#include <iostream>
#include<algorithm>
using namespace std;

void Sum_pair(int arr[], int n, int key){
    int i = 0;
    int j=n-1;

    while(i<=j){

        if(arr[i]+arr[j]==key){
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }

        else if(arr[i]+arr[j]>key){
            j--;
        }

        else if (arr[i]+arr[j]<key){
            i++;
        }
    }
    return;
}
int main() {

    cout<<"Enter the size of the array and then the numbers"<<endl;
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    sort(arr, arr+n);

    Sum_pair(arr, n, key);
}
