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
  int t;
  cin>>t;
  while(t-->0){
      int n,m;
      cin>>n>>m;
      if(n==1&&m==1){
          cout<<0<<endl;
      }else if(n>m){
      cout<<(n-1)+(m-1)+m<<endl;
      }else{
          cout<<n-1+m-1+n<<endl;
      }
      
      
  }
  
  
  
    return 0;
}