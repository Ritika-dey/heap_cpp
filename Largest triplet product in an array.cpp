#include <bits/stdc++.h>
using namespace std;

void LTP(int arr[], int n){
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        if(i>1){
           int a = q.top();
           q.pop();
           int b = q.top();
           q.pop();
           int c = q.top();
           q.pop();
           cout<<(a*b*c)<<" ";
           q.push(a);
           q.push(b);
        }
        else cout<<-1<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    LTP(arr,n);
}
