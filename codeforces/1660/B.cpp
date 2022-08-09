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
     int m;
     cin>>m;
     int arr[m];
     for(int j=0;j<m;j++){
         cin>>arr[j];
     }
     sort(arr,arr+m);
     
     if(m==1){
         if(arr[0]==1){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
     }else if(arr[m-1]-arr[m-2]<=1){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
     
     
     
     
 }
       
   
   
    return 0;
}

