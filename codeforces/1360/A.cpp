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
   int n,x,y;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x>>y;
       if(min(x,y)*2>=max(x,y)){
           cout<<pow(min(x,y)*2,2)<<endl;
       }else{
           cout<<pow(max(x,y),2)<<endl;
       }
       
       
   }
   

    return 0;
}