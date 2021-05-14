#include <iostream>
using namespace std;

void min_heapify(int arr[], int n, int i){
    int left_child = 2*i + 1;
    int right_child = 2*i + 2;
    int minn;
    if(left_child < n and arr[left_child] < arr[i]) minn = left_child;
    else minn = i;
    if(right_child < n and arr[right_child] < arr[minn]) minn = right_child;

    if(i != minn){
        swap(arr[i],arr[minn]);
        min_heapify(arr, n, minn);
    }
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int idx ;
    cin>>idx;
    
    min_heapify(arr, n, idx);

    cout<<"After heapify : ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
