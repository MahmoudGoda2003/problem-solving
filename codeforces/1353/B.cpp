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
      cin>>m>>k;int a[m],b[m];
      for(int j=0;j<m;j++){
         cin>> a[j];
      }
      for(int j=0;j<m;j++){
         cin>> b[j];
      }
          sort(a,a+m);sort(b,b+m);          
         for(int j=0;j<k;j++){
             if(a[j]< b [m-j-1]){
                 a[j]=b[m-j-1];
             }else{
                 break;
             }
         }int sum=0;     
     for(int j=0;j<m;j++){
         sum+=a[j];
      }
     cout<<sum<<endl;
        }
        
        
    
    
    return 0;
}