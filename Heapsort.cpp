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

void build_heap(int arr[], int n){
   for(int i = (n/2)-1;i>=0;i--){
       max_heapify(arr, n, i);
   }
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int size = n;

    // to convert it to a heap
    build_heap(arr, n);

    // sorting
    for(int i = n-1 ; i>0 ; i--){
        swap(arr[0],arr[i]);
        n--;
        max_heapify(arr, n, 0);
    }


    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}
