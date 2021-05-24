#include <bits/stdc++.h>
using namespace std;
void kmostOccurrence(int arr[], int n, int k){
   map<int,int>m;
   for(int i=0;i<n;i++) m[arr[i]]++;

   priority_queue<pair<int,int>> q;
   for(auto p:m){ 
       q.emplace(p.second,p.first); 
   }

   while(k--){
       cout<<q.top().second<<" ";
       q.pop();
   }
}

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    kmostOccurrence(arr, n, k);
}
