#include <bits/stdc++.h>
using namespace std;

int extractMax(int arr[], int n){
    if(n<1) { 
        return -1;
    }

    int maxx = INT_MIN, i;
    for(i = n/2;i<n;i++){
        maxx = max(maxx, arr[i]);
    } 
    return maxx;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];


    cout<<"Deleted max is  : "<<extractMax(arr, n)<<endl; 
}
