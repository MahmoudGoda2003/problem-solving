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
 
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int m;
       cin>>m;pair <char,int>arr[m] ;
       for(int j=0;j<m;j++){
           char x;
           cin>>x;
           arr[j]=make_pair(x,j);
       }
   
   sort(arr,arr+m);bool flag=true;
   for(int j=0;j<m-1;j++){
       if(arr[j].first==arr[j+1].first){
           if(arr[j+1].second-arr[j].second!=1){
               cout<<"NO"<<endl;flag=false;break;
           }
       }
   }
   if(flag){
       cout<<"YES"<<endl;
   }
   
   }
   
    return 0;
}

