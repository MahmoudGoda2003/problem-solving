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
 
int main()
{
  int t;
  cin>>t;
  while(t-->0){
      int n,x;
      cin>>n>>x;
      if(n==1||n==2){
          cout<<1<<endl;
      }else{
          x= (n+x-2)%x==0? (n+x-2)/x:((n+x-2)/x)+1;
          cout<<x<<endl;
      }
      
  }
   
    return 0;
}

