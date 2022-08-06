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
int n,m;
cin>>n>>m;int count=0;
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        if(j*j+i==m&&i*i+j==n){
            count++;
            break;
        }
    }
}
cout<<count;
    return 0;
}

