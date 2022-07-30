/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
   int n,m,min;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>m;min=1000;vector <int> v(m);
       for(int j=0;j<m;j++){
           cin>>v[j];
       }
       sort(v.begin(),v.end());
       for(int j=0;j<m-1;j++){
           if(v[j+1]-v[j]<min){
               min=v[j+1]-v[j];
           }
       }
       
       cout<<min<<endl;
   }
   

    return 0;
}