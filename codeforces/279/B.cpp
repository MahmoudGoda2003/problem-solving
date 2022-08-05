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
 int n,d;
 cin>>n>>d;int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 
 int j=0,i=0;long long sum=0;int mx=0;
 
 while(i<n&&j<n){
   
        if (sum <= d){
            sum += arr[j];
            if (sum <= d){
                mx = max(mx, j - i + 1);
            }
            j++;
        }
        else{
            sum -= arr[i];
            i++;
        }
     
     
 }
 
 cout<<mx;
 
   
    return 0;
}


