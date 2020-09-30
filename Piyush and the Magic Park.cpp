#include <iostream>
using namespace std;

void piyushmagicpark(char arr[][100], int n, int m, int k, int s){
    int energy = s;
    bool success = 1;
    int i=0, j=0;

    for (int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            if(energy<k){
                success = 0;
                cout<<"No"<<endl;
                return;
            }

            if(j==m or arr[i][j]=='#'){
                break;
            }

            if(arr[i][j] == '.'){
                energy = energy - 2;
                //energy--;
            }
            if(arr[i][j]=='*'){
                energy=energy + 5;
                //energy--;
            }
            if(j!=n-1){
                energy--;
            }
    }
    }

    if(success){
        cout<<"Yes"<<endl;
        cout<<energy<<endl;
    }
return;
}

int main() {
    int n, m;
    cin>>n>>m;

    int k, s;
    cin>>k>>s;
    char park[100][100];

    for(int i= 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>park[i][j];
        }
    }

    piyushmagicpark(park, n, m, k, s);


}
