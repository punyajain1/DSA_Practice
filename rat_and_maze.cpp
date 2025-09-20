#include <iostream>

using namespace std;


void path(vector<vector<int>> &v,string ans, int i, int j, vector<vector<int>>& vis,int n){
    if(i==n-1 && j==n-1){
        cout<<ans<<endl;
        return;
    }
    if(i+1<n && v[i+1][j]==1 && vis[i+1][j]==0){
        vis[i+1][j]=1;
        path(v,ans+'D',i+1,j,vis,n);
        vis[i+1][j]=0;
    }
    if(j-1<n && v[i][j-1]==1 && vis[i][j-1]==0){
        vis[i][j-1]=1;
        path(v,ans+'L',i,j-1,vis,n);
        vis[i][j-1]=0;
    }
    if(j+1<n && v[i][j+1]==1 && vis[i][j+1]==0){
        vis[i][j+1]=1;
        path(v,ans+'R',i,j+1,vis,n);
        vis[i][j+1]=0;
    }
    if(i-1<n && v[i-1][j]==1 && vis[i-1][j]==0){
        vis[i-1][j]=1;
        path(v,ans+'U',i-1,j,vis,n);
        vis[i-1][j]=0;
    }
}




int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> vis(n,vector<int>(n,0));
    string ans="";
    path(v,ans,0,0,vis,n);
}