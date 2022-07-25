/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;                                          

int main()
{
   int n,x;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x;int j=1;
       while(true){
           
           if(x==pow(10,j)){
               cout<<0<<endl;break;
           }else if(pow(10,j)>x){
              
              cout<<(int)(x-pow(10,j-1))<<endl;break;
              
               
           }else{
               j++;
           }
            
       }
       
       
       
       
   }
    
    
    
    

    return 0;
}
