#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>m;vector<int>v(m) ;
      for(int j=0;j<m;j++){
          cin>>v[j];
      }
        vector <int>x=v;
        sort(x.begin(),x.end());
        for(int j=0;j<m;j++){
            if(v[j]!=x[1]){
                cout<<j+1<<endl;break;
            }
        }
        
        
    }
    
    return 0;
}