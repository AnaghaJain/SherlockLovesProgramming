#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(char *c){
    stack <char> s;
    for(int i=0; c[i]!='\0'; i++){
        char ch= c[i];
        if(ch=='('){
            s.push(ch);
        }
        else if (ch==')'){
            if(s.empty() or s.top()!='('){
                return false;
            }
            s.pop();
        }

        if(ch=='{'){
            s.push(ch);
        }
        else if (ch=='}'){
            if(s.empty() or s.top()!='{'){
                return false;
            }
            s.pop();
        }
        if(ch=='['){
            s.push(ch);
        }
        else if (ch==']'){
            if(s.empty() or s.top()!='['){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    char ch[100000];
    cin>>ch;

    if(isValid(ch)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}
