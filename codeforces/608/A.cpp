/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;                                          

int main()
{
   int n,s;
   cin>>n>>s;int result=s;int x,y;
   for(int i=0;i<n;i++){
       cin>>x>>y;
       result=max(result,x+y);
   }
   cout<<result;
   
   
   
    return 0;
}
