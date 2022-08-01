/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
#include<map>
#include<algorithm>
 
using namespace std;                                          
 
int main()
{
    int n,m,a;
    cin>>n>>m>>a; 
     if(m%a==0){
         m/=a;
     }else{
         m=m/a+1;
     }
 
 if(n%a==0){
         n/=a;
     }else{
         n=n/a+1;
     }
cout<<(long long)n*m<<endl;
 
    return 0;
}