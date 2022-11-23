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
   int t;
   cin>>t;
   while(t-->0){
       long long n,k;
       cin>>n>>k;
       if(k*k>n){
           cout<<"NO"<<endl;
       }
       else if(n%2==k%2){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
       
       
       
       
   }

    return 0;
}