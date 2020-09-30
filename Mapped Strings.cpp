#include <iostream>
using namespace std;

void MappedString (char *inp, char *out, int i, int j){
    if (inp[i]=='\0'){
        out[j]='\0';
        cout<<out;
        return;
    }

    int digit = inp[i]-'0';
    char ch= digit + 'A' - 1;
    MappedString(inp, out, i+1, j+1);

    if (inp[i+1]!='\0' and inp[i+1]=='0'){

        int secondDigit = inp[i+1]-'0';
        int no= digit*10 + secondDigit;

        if (no<=26){
            ch = no + 'A' - 1;
            MappedString(inp, out, i+2, j+1);
        }

    }
    return;
}

int main() {
    char inp[1000000];
    cin>>inp;

    char out[1000000];
    MappedString(inp, out, 0, 0);
}
