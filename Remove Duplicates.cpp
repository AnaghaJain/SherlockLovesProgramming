#include <iostream>
#include<cstring>
using namespace std;

void dublicate_letters(char string[], int i){
    if(string[i] == '\0'){
        return;
    }

    if(string[i-1]==string[i]){
        return dublicate_letters(string, i+1);
    }
    else{
        cout<<string[i];
        return dublicate_letters(string, i+1);
    }
}

int main() {
    char string[1000];
    cin>>string;
    int n = strlen(string);

    dublicate_letters(string, 0);

}
