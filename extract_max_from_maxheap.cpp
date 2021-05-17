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

int extractMax(int arr[], int n){
    if(n<1) cout<<"Heap underflow"<<endl;

    int maxx = arr[0];
    arr[0] = arr[n-1];
    n--;
    max_heapify(arr, n, 0);

    return maxx;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];


    cout<<"Deleted max is  : "<<extractMax(arr, n)<<endl;
    cout<<"heap after extracting max : ";
    for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
}
