#include <iostream>
using namespace std;

void Hanoi(int n, char src, char dest, char help){

    if(n==0){
        return;
    }

    Hanoi(n-1, src, help, dest);
    cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
    Hanoi(n-1, help, dest, src);

}

int main() {
    int n;
    cin>>n;

    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
