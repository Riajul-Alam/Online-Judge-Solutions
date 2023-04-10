#include <bits/stdc++.h>
using namespace std;

int f(int day,int last,vector<vector<int>>&points,vector<vector<int>>&dp) {
  if (dp[day][last]!=-1)return dp[day][last];
  if(day==points.size()-1){
    int maxi=0;
    for(int i=0;i<=2;i++){
      if (i!=last)
        maxi=max(maxi,points[points.size()-1][i]);
    }
    return dp[day][last]=maxi;
  }
  int maxi=0;
  for (int i=0;i<=2;i++){
    if (i!=last) {
      int activity=points[day][i]+f(day+1,i,points,dp);
      maxi=max(maxi,activity);
    }
  }
  return dp[day][last]=maxi;
}
int main() {
  int n;cin>>n;
  vector<vector<int>>points;
  for(int i=0;i<n;i++){
    vector<int>tm;
    for(int i=0;i<=2;i++){
      int x;cin>>x;tm.push_back(x);
    }
    points.push_back(tm);
  }
  vector<vector<int>>dp(n,vector<int>(4,-1));
  cout <<f(0,3,points,dp)<<endl;
}