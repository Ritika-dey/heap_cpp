#include <iostream>
using namespace std;

void max_heapify(int arr[], int n, int i){
    int left_child = 2*i + 1;
    int right_child = 2*i + 2;
    int maxx;
    if(left_child < n and arr[left_child] > arr[i]) maxx = left_child;
    else maxx = i;
    if(right_child < n and arr[right_child] > arr[maxx]) maxx = right_child;

    if(i != maxx){
        swap(arr[i],arr[maxx]);
        max_heapify(arr, n, maxx);
    }
}
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int idx ;
    cin>>idx;
    max_heapify(arr, n, idx);

    cout<<"After heapify : ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
