/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <cstring>
#include<cmath>
using namespace std;

int main()
{
    int n,m,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>m;bool flag=true;
       for(int j=0;j<m;j++){
          cin>>x;
         if(pow((int)sqrt(x),2)!=x){
             
             flag=false;
         }
       }
       if(flag==false){
           cout<<"Yes"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
    }
    
    return 0;
}