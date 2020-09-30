#include <iostream>
#include<cstring>
using namespace std;
int main() {
    int arr[26]={0};

    char characters[1000];
    cin>>characters;


    for(int i = 0; i< strlen(characters); i++){
        int letter = characters[i] - 'a' + 1;
        //cout<<strlen(characters)<<" ";
        arr[letter]++;
    }

    int ms = 0;
    int index = 0;

    for(int i=0; i<26; i++){
        if(arr[i]>ms){
            ms = max(ms, arr[i]);
            index = i;
        }
    }

    char alphabet = index + 'a' - 1;

    cout<<alphabet<<endl;
}
