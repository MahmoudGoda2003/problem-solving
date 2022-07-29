/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int n,a,b,x=0,y=0;
   cin>>n;
   for(int i=0;i<n;i++){
     cin>>a>>b;
     if(a!=b){
         if(a>b){
             x++;
         }else{
             y++;
         }
     }
     
     
     
     }
     
         
     if(x==y){
         cout<<"Friendship is magic!^^"<<endl;
     }else{
         if(x>y){
             cout<<"Mishka"<<endl;
         }else{
             cout<<"Chris"<<endl;
         }
     }
   
   

    return 0;
}