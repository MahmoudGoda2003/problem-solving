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
    int n,m,k;long long result;
    cin>>m;
    for(int i=0;i<m;i++){
        result=1;
       cin>>n>>k;
       for(int j=0;j<k;j++){
           result=(result*n)%(long long)(pow(10,9)+7);
           
       }
       
       cout<<result<<endl;
       
       
       
    }
    
    return 0;
}