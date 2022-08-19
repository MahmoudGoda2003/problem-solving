/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define long long ll
int main()
{
   int n;
   cin>>n;
   int sum1=0,sum2=0;int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       sum1+=arr[i];
   }
   sort(arr,arr+n,greater<int>());
   for(int i=0;i<=n;i++){
       if(sum2>sum1){
           cout<<i;return 0; 
       }
       sum2+=arr[i];
       sum1-=arr[i];
   }
   
    return 0;
}