#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n,m;
    cin>>n;ll sum;
    for(int i=0;i<n;i++){
      cin>>m;sum=0;
      for(int j=1;j<=m/2;j++){
          sum+=(ll)(8*j)*j;
          
          
          
          
      }
    cout<<sum<<endl;  
    }
    
    
    return 0;
}