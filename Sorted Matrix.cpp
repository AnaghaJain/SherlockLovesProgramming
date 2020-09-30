#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    if(n==1){
        return;
    }

    for (int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }


}


int main() {

    int n, m;
    cin>>n>>m;

    int a[100][100];

    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int lineararr[10000];
    int k=0;

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            lineararr[k++]= a[i][j];
        }
    }

    bubble_sort(lineararr, k);

    int index=0;

    for (int i=n-1; i>=0; i--){
        for(int j=0; j<m; j++){
            a[i][j] = lineararr[index++];
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }




}
