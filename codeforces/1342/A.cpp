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
       long long x,y,a,b;
       cin>>x>>y>>a>>b;
       long long cost=0;
       b=min(b,2*a);
       cost=min(x,y)*b+a*(max(x,y)-min(x,y));
       cout<<cost<<endl;
       
       
       
   }
   
   
    return 0;
}

