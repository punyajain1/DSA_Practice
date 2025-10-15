//Frog Jump
#include<iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solve(int ind, vector<int>& height, vector<int>& dp){
  if(ind==0) return 0;
  if(dp[ind]!=-1) return dp[ind];
  int j1=solve(ind-1,height,dp)+abs(height[ind]-height[ind-1]);
  int j2;
  if(ind>1) j2=solve(ind-2,height,dp)+abs(height[ind]-height[ind-2]);
  return dp[ind]=min(j1,j2);
}


int main() {
  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n+1,-1);
  cout<<solve(n-1,height,dp);
}