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
      string str1,str2;
      cin>>str1>>str2;
      bool flag=true;
      for(int i=0;i<n;i++){
          if(str1[i]!=str2[i]){
              if(str1[i]=='B'&&str2[i]=='G'||str2[i]=='B'&&str1[i]=='G'){
                  continue;
              }else{
                  flag=false;break;
              }
          }
          
          
          
      }
      
      if(flag){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
      
      
  }
  
  
  
    return 0;
}
