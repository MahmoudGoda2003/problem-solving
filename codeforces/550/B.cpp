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
#include<set>
 #include <vector>
using namespace std;                                          
 
int main()
{
 int n,r,l,x;
 cin>>n>>r>>l>>x;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 
 int counter=0;
 for(int i=1;i<= (1 << n) - 1;i++){
   long long sum=0;int mx=0,mn=1e9;
    for(int j=0;j<n;j++){
        if((i>>j)&1){
            sum+=arr[j];
            mn=min(mn,arr[j]);
            mx=max(mx,arr[j]);
        }
    }
    if(sum>=r&&sum<=l&&mn!=mx){
        if((mx-mn)>=x){
            counter++;
        }
    }
   
}
 
 
 
 cout<<counter;
 
 
 
    return 0;
}

