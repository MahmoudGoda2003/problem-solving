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
int n;
cin>>n;
 for(int i=0;i<n;i++){
     int a,b;
     cin>>a>>b;
     if(a==0||a==0&&b==0){
         cout<<1<<endl;
     }else{
         cout<<a+b*2+1<<endl;
     }
     
     
 }
       
   
   
    return 0;
}

