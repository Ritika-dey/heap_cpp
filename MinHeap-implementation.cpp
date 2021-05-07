#include <bits/stdc++.h>
using namespace std;

int size = 9, curr =0;
int arr[9]; 
void insert(int val){ 
    if(curr<size){
        arr[curr] = val;
        int i= curr;
        while(i > 0 and arr[(i-1)/2] > arr[i]){ 
             int temp = arr[(i-1)/2];
             arr[(i-1)/2] = arr[i];
             arr[i] = temp;
             i = (i-1)/2; 
        }
        curr++;
    }
    else{
        cout<<"Heap is full"<<endl;
    }
}
int main() {
    int val;
    cin>>val;
    insert(val);
    while(1){
        cin>>val;
        if(val == -1) break;
        insert(val);
    }

    cout<<"Given heap is : ";
    for(int i=0;i<curr;i++){
        cout<<arr[i]<<" ";
    }
}
