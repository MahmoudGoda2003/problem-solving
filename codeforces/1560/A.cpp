/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int n,k;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>k;int j=0;
       while(true){
           if(k==0){
             cout<<j-1<<endl; break;
           }
           if(j%3!=0&&j%10!=3){
               k--;
           }
           j++;
           
           
       }
      
      
   }
   
   
   
   

    return 0;
}