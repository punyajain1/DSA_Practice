#include <iostream>

using namespace std;

void solve(vector<int> &v , int i , int sum, int target , vector<int>ans){
    if(i==v.size()){
        if(sum==target){
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(v[i]);
    solve(v,i+1,sum+v[i],target,ans);
    ans.pop_back();
    solve(v,i+1,sum,target,ans);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int t=4;
    vector<int> ans;
    solve(v,0,0,t,ans);
}