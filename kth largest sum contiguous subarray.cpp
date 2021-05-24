#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
  
    //cumulative sum
    int cum[n+1];
    cum[0] = 0;
    for(int i=1;i<=n;i++)
      cum[i] = cum[i-1] + arr[i-1];
 
    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int val = cum[j] - cum[i-1]; 
            minheap.push(val);
            if(minheap.size() > k) minheap.pop();
        }
    } 
    
    cout<<minheap.top()<<endl;
}
