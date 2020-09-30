#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;

    int arr[30][30];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int col = m-1;
    int row = 0;

    int key;
    cin>>key;
    int flag = 0;

    while(row<n and col>=0){
        if (arr[row][col]==key){
            flag++;
            break;
        }
        else if(arr[row][col]>key){
            col--;

        }
        else{
            row++;
            col = m-1;
        }
    }

    if (flag==1){
        cout<<1;
    }
    else{
        cout<<0;
    }

}
