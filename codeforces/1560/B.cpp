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
   int n,a,b,c;
   cin>>n;
   for(int i=0;i<n;i++){
     cin>>a>>b>>c;
     if(a>2*abs(a-b)||b>2*abs(a-b)||c>2*abs(a-b)){
         cout<<-1<<endl;
     }else{
         int result=c+abs(a-b);
         while(result>2*abs(a-b)){
             result-=2*abs(a-b);
         }
         cout<<result<<endl;
     }
       
       
       
       
           
       }
      
      
   
   
   
   
   

    return 0;
}