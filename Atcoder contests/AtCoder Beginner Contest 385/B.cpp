#include<bits/stdc++.h>
using namespace std;
int main(){
    int H,W,X,Y;
    cin>>H>>W>>X>>Y;
    X--;
    Y--;
    vector<vector<char>>grid(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>grid[i][j];
        }
    }
    string line;
    cin >> line;
    vector<vector<bool>>check(H,vector<bool>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            check[i][j]=false;
        }
    }
    int n = line.size();
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(line[i]=='R'){
            if(Y+1<W && grid[X][Y+1]=='.'){
                Y=Y+1;
            }
            else if(Y+1<W && grid[X][Y+1]=='@'){
                Y=Y+1;
                if(check[X][Y]==false){
                    check[X][Y]=true;
                    cnt++;
                } 
            }
        }
        else if(line[i]=='L'){
            if(Y-1>=0 && grid[X][Y-1]=='.'){
                Y=Y-1;
            }
            else if(Y-1>=0 &&grid[X][Y-1]=='@'){
                Y=Y-1;
                if(check[X][Y]==false){
                    check[X][Y]=true;
                    cnt++;
                }
            }
        }
        else if(line[i]=='U'){
            if(X-1>=0 && grid[X-1][Y]=='.'){
                X=X-1;
            }
            else if(X-1>=0 && grid[X-1][Y]=='@'){
                X=X-1;
                if(check[X][Y]==false){
                    check[X][Y]=true;
                    cnt++;
                }
            }
        }
        else if(line[i]=='D'){
            if(X+1<H && grid[X+1][Y]=='.'){
                X=X+1;
            }
            else if(X+1<H && grid[X+1][Y]=='@'){
                X=X+1;
                if(check[X][Y]==false){
                    check[X][Y]=true;
                    cnt++;
                }
            }
        }
    }
    cout<<X+1<<" "<<Y+1<<" "<<cnt<<endl;
}
    
