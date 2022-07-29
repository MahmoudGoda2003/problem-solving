#include <iostream>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n,m,even,odd;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;int x=0; even=0; odd=0;
        for(int j=0;j<m;j++){
            cin>>x;
            if(j%2!=x%2){
                if(x%2==0){
                    even++;
                    
                }else{
                    odd++;
                }
            }
        }
  
   if(even!=odd){
        cout<<-1<<endl;
    }else{
        cout<<odd<<endl;
    }
    
    }
    
    
   
    
    
    return 0;
}