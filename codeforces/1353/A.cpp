#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n,m,k;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>m>>k;
      cout<<min(m-1,2)*k<<endl;
    }
        
    
    
    return 0;}