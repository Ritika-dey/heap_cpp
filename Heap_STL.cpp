#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};

// vector to heap convertion
    make_heap(v.begin(), v.end());
// first element of vector will be the maximum element of heap
   cout<<"Maximum of heap : "<<v.front()<<endl;

// before sorting
   for(auto &x : v){
       cout<<x<<" ";
   }
   cout<<endl;

//sort a heap
   sort_heap(v.begin(), v.end());

//printing heap after sorting
   for(auto &x : v){
       cout<<x<<" ";
   }
}
