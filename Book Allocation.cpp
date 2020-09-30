#include <iostream>
#include<climits>
using namespace std;

bool ispossible(int arr[], int n, int m, int curr_min){
    int StudentUsed =1;
    int pagesread = 0;

    for(int i=0; i<n; i++){
        if(pagesread+arr[i]>curr_min){
            StudentUsed++;
            pagesread=arr[i];

            if(StudentUsed>m){
                return false;
            }
        }
        else{
            pagesread+=arr[i];
        }
    }
    return true;
}

int findpages(int arr[], int n, int m){
    long long sum = 0;

    if(n<m){
        return -1;
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    int s= arr[n-1];
    int e=sum;
    int ans = INT_MAX;

    while(s<=e){
        int mid = (s+e)/2;

        if(ispossible(arr, n, m, mid)){
            ans=min(ans, mid);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;

}


int main() {

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        int arr[1000];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<findpages(arr, n, m)<<endl;
    }

    return 0;
}
