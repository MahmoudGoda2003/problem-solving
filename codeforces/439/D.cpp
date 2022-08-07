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
int n,m; 
 
ll ans(int x,int *a,int *b){
    ll result=0;
    for(int i=0;i<n;i++){
        if(a[i]<x){
            result+=x-a[i];
        }else{
            break;
        }
    }
    
    for(int i=0;i<m;i++ ){
        if(b[i]>x){
            result+=b[i]-x;
        }else{
            break;
        }
    }
    
    return result;
    
} 
 
 
int main(){
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<m;i++){
    cin>>b[i];
}
sort(b,b+m,greater<int>());

int low=0,high=1e9,mid1=0,mid2=0;
while(high-low>=3){
    mid1=low+(high-low)/3;
    mid2=high-(high-low)/3;
    ll ans1=ans(mid1,a,b);
    ll ans2=ans(mid2,a,b);
    if(ans2<ans1){
        low=mid1;
    }else{
        high=mid2;
    }
    
}ll mn=1e18;
for(int i=low;i<=high;i++){
    mn=min(mn,ans(i,a,b));
}
cout<<mn;

    return 0;
}

