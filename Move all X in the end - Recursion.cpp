#include <iostream>
using namespace std;

void moveallx (char ch[], int i, int j){
    if(ch[i]=='\0'){
        for(int a=j; a<i; a++){
            cout<<'x';
        }
        return;
    }
    if(ch[i]!='x'){
        cout<<ch[i];
        moveallx(ch, i+1, j+1);
    }

    else{
        moveallx(ch, i+1, j);
    }
}
int main() {
    char ch[1000];
    cin>>ch;
    moveallx(ch, 0, 0);
}
