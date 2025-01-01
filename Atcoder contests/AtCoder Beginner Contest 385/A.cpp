#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    if(A+B==C){
        cout<<"Yes";
    }
    else if(A+C==B){
        cout<<"Yes";
    }
    else if(B+C==A){
        cout<<"Yes";
    }
    else if(A==B && B==C){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}