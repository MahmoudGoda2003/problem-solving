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
 #define ll long long
int main()
{
 int t;
 cin>>t;
 while(t-->0){
     int n;
     cin>>n;
     ll sum=0;
     bool even =false,odd=false;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         sum+=x;
         if(x%2==0){
             even=true;
         }else{
             odd=true;
         }
     }
     if(sum%2==1){
         cout<<"YES"<<endl;
     }else{
         if(odd&&even){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
     }
     
     
     
 }
 
    return 0;
}

