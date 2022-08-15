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
 
using namespace std;                                          
 
int main()
{
  long long n,k;
  cin>>n>>k;
  if(n%2==0){
      if(k>n/2){
          cout<<2+2*(k-(n/2)-1);
      }else{
           cout<<1+2*(k-1);
      }
  }else{
      if(k>(n/2)+1){
          cout<<2*(k-(n/2)-1);
      }else{
           cout<<1+2*(k-1);
      }
      
      
  }
   
    return 0;
}

