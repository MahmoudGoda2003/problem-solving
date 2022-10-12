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
   int n,m;
   cin>>n>>m;
   long long result=0;
   int x1=1,x2=1;
   for(int i=0;i<m;i++){
       cin>>x2;
       if(x2<x1){
           result+=(n-x1)+(x2);
           x1=x2;
       }else{
           result+=x2-x1;
           x1=x2;
       }
   }
   cout<<result;
   
    return 0;
}

