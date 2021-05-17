#include <iostream>
using namespace std;
void insertElement(int arr[], int n, int k){
    n++;
    arr[n-1]=k;
    int i=n-1;
    while(arr[i]>arr[i/2] and i > 0){
        swap(arr[i], arr[i/2]);
        i = i/2;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;

    cout<<"Before insertion : ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    insertElement(arr, n, k);

    cout<<"After insertion : ";
    for(int i=0;i<=n;i++) cout<<arr[i]<<" ";
}
