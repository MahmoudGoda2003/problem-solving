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
#include<set>
 #include <vector>
using namespace std;                                          
#define ll long long 
int main()
{
 ll n;
 cin>>n;
int counter=0;
 while(n!=0){
     if(n%10==4||n%10==7){
         counter++;
     }
     n/=10;
     
 }
 if(counter==4||counter==7){
     cout<<"YES";
 }else{
     cout<<"NO";
 }
    return 0;
}

