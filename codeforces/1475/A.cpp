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
       long long n;
       cin>>n;
       if((n&n-1)!=0){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }
   
   
    return 0;
}

