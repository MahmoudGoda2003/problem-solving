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
  int x;
  cin>>x;ll sum=0;int i;
  for( i=1;sum<=x;i++){
      
      sum+=(i*(i+1))/2;
  }
  cout<<i-2;
    return 0;
}
