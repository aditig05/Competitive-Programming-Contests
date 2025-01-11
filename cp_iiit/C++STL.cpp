#include <bits/stdc++.h>
using namespace std;

int main() {
    //Vectors: are dynamic arrays. there size can be chaged using push_back and pop_back.
    //vector<int> myvector;

    // //add elements to the vector
    // myvector.push_back(10);
    // myvector.push_back(20);
    // myvector.push_back(30);

    // //size of the vector
    // cout<<"Size of the vector: "<<myvector.size()<<endl;

    //iterators: auto keyword-automatically deduces the datatype of the variablea using their first declaration.
                //pair-stores 2 single datastructures pair<int, int>p, access using p.first and p.second
    
    
    // for(auto it=myvector.begin(); it!=myvector.end(); ++it){
    //     int x=*it;
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    //set: keeps unique elements, maintains in increasing order. insertion,deletion and finding an element-O(logn)
    //multiset: keeps multiple same elements also, maintains in increasing order. insertion,deletion and finding an element-O(logn)
    int n; cin>>n; 
    multiset<int>s;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        s.insert(x);
    }
    for(auto it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    }
    auto it=s.lower_bound(3);
    if(it!=s.end()){
        cout<<"end iterator is "<<*it<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}