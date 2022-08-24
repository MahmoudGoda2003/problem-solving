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
 
using namespace std;                                          
 #define ll long long
int main()
{
  int n,m;
  cin>>m>>n;int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int mn =1e9; sort(arr,arr+n);
  for(int i=0;i<=n-m;i++){
    mn=min(mn,arr[i+m-1]-arr[i]);
      
  }
  if(mn!=1e9)
   cout<<mn;
  else
  cout<<0;
    return 0;
}

