/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
#include<map>
#include<algorithm>
#include<cstring>
#include<cmath>
#define ll long long 

using namespace std;                                          
ll m;
ll search(ll x,ll *arr){
    ll low =0,high=m-1,mid=0;ll ans=10e9;
    while(high>=low){
        mid=low+(high-low)/2;
        if(arr[mid]==x){
            ans=0;break;
        }else if(arr[mid]>x){
            high=mid-1;
            if(arr[mid]-x<ans){
                ans=arr[mid]-x;
            }
        }else{
            low =mid+1;
            if(x-arr[mid]<ans){
                ans=x-arr[mid];
            }
        }
    }
    return ans;
}




 main(){
int n;
cin>>n>>m;ll c[n];ll p[m];
for(int i=0;i<n;i++){
    cin>>c[i];
}
for(int i=0;i<m;i++){
    cin>>p[i];
}


ll mx=0;ll j=0;
for(int i=0;i<n;i++){
    j=search(c[i],p);
       mx=max(j,mx);
    
}

   cout<<mx;
    return 0;
}


