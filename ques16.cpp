//Frog Jump with k Distances

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solve(int i,vector<int> height,vector<int> &dp,int k){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int m=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            int jump = solve(i - j, height, dp, k)+abs(height[i]-height[i-j]);
            m = min(jump,m);
        }
    }
    return dp[i]=m;
}

int main() {
  vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    int k = 2;
    vector<int> dp(n, -1);
    cout << solve(n - 1, height, dp, k);
}