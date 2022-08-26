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
  int t;
  cin>>t;
  while(t-->0){
      int n;
      cin>>n;ll sum1=1<<n,sum2=0;
    for (int i=1;i<n/2;i++){
       sum1+=(1<<i);  
    }
      
    for (int i=n/2;i<n;i++){
            sum2+=(1<<i);
        }
              cout<<abs(sum2-sum1)<<endl;
      
      
  }
    return 0;
}
