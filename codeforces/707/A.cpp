/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           char x;
           cin>>x;
           if(x=='C'||x=='M'||x=='Y'){
               cout<<"#Color";return 0;
           }
       }
   }
   cout<<"#Black&White";return 0;
}
