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
  int a,b,c;
  cin>>a>>b>>c;
  if(a==1){
      b++;
  }if(b==1){
      if(a<c){
          a++;
      }else{
          c++;
      }
  }if(c==1){
      b++;
  }cout<<a*b*c<<endl;
  
    return 0;
}