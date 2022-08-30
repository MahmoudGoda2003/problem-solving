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
int main(){
  int t;
  cin>>t;
  while(t-->0){
      int n;
      cin>>n;
      string str1;
      cin>>str1;
      string str2="Timru";
      if(n>5){
          cout<<"NO"<<endl;
          continue;
      }
      sort(str1.begin(),str1.end());
      
      if(str2==str1){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
  }
  
  
  
    return 0;
}
