#include<iostream>
using namespace std;

void spiral_print(int arr[][10], int n, int m){
    int startrow=0;
    int endrow= n-1;
    int startcol=0;
    int endcol = m-1;

    while(startrow<=endrow and startcol<=endcol){
        for(int i=startrow; i<=endrow; i++){
            cout<<arr[i][startcol]<<", ";
        }
        startcol++;

        for(int i=startcol; i<=endcol; i++){
            cout<<arr[endrow][i]<<", ";
        }
        endrow--;

        if(endrow>startrow){

            for(int i=endrow; i>=startrow; i--){
                cout<<arr[i][endcol]<<", ";
            }
            endcol--;
        }

        if(endcol>startcol){
            for(int i=endcol; i>=startcol; i--){
                cout<<arr[startrow][i]<<", ";
            }
            startrow++;
        }
    }
     cout<<"END"<<endl;

}

int main(){
    int n, m;
    cin>>n>>m;

    int a[10][10];

    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    spiral_print(a, n, m);

}
