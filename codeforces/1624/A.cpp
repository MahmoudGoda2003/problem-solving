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


#define ll long long 
using namespace std;                                          

int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int m;
       cin>>m;int arr[m];
       for(int j=0;j<m;j++){
           cin>>arr[j];
       }sort(arr,arr+m);
       cout<<arr[m-1]-arr[0]<<endl;
   }
    return 0;
}


