/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
 int t;cin>>t;
 while(t-->0){
     ll n,m;
  cin>>n>>m;
  
  if(n*m>=(m-1)*n+m*(n-1)){
      cout<<"YES"<<endl;
  }else{
      cout<<"NO"<<endl;
  }
  
  
  
 }
    return 0;
}
