#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[1000][1000];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0, k=n-1; j<=k; j++, k--){
            swap(arr[i][j], arr[i][k]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i){
                swap(arr[i][j], arr[j][i]);
            }
        }


    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}
