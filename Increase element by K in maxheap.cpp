#include <bits/stdc++.h>
using namespace std;

void increaseVal(int arr[], int n, int val, int k){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == val){
             arr[i] += k; 
             break;
        }
    }
    
//   maintaining heap property
    if(arr[(i/2) - 1] < arr[i]){
        while(arr[(i/2)] < arr[i] and i>0){ 
            swap(arr[(i/2)],arr[i]);
            i = (i/2); 
            cout<<i<<" ";
        }
    } 
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int val, k;
    cin>>val>>k;

    increaseVal(arr, n, val, k);
    cout<<"After modification resultant heap is : ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
