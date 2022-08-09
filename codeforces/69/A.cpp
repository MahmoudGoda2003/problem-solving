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
    int n;
    cin>>n;int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
       int m;
        cin>>m;
        x+=m;
        cin>>m;
        y+=m;
        cin>>m;
        z+=m;
    }
    if(x==0&&y==0&&z==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}


