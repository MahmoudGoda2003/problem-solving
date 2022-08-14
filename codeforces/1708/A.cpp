#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll oo = LONG_LONG_MAX;
const ll N = 1e5 + 10;

vector <int>s2,s1;
vector<vector<int>> dp;
ll n;

ll solve(ll sl1, ll sl2,vector<vector<int>>& dp){
    if (sl1 == n || sl2 == n)
        return 0;
    if (dp[sl1][sl2] != -1) {
        return dp[sl1][sl2];
    }
    if (s1[sl1] == s2[sl2])
        return dp[sl1][sl2]=solve(sl1 + 1, sl2 + 1,dp) + 1;
    else
        return dp[sl1][sl2]=max(solve(sl1 + 1, sl2,dp), solve(sl1, sl2 + 1,dp));
}

int main() {
   int t;
   cin>>t;
   for(int k=0;k<t;k++){
       int n;cin>>n;
       int arr[n];cin>>arr[0];bool flag= true;
       for(int i=1;i<n;i++){
           cin>>arr[i];
           if(arr[i]%arr[0]!=0){
               flag=false;
               
           }
       }
       if(flag){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
           
   }
   
   
    return 0;
}