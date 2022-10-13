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
 int count(int n){
    int result =0;
   while(n){
       result++;
       n=n&n-1;
   }
    return  result;
} 
  
 
int main()
{
   int n, m, k; cin>> n>>m>>k;
   int x[m+1];
   for(int i=0;i<m+1;i++){
      cin>> x[i];
   }
   int result=0;
   for(int i=0;i<m;i++){
       int y = x[i]^x[m];
       if(count(y)<=k){
           result++;
       }
   }
   
   cout<<result;
   
    return 0;
}

