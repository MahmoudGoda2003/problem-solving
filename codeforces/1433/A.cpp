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
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       string str;
       cin>>str;
       int x=str[0]-'0';
       cout<<(x-1)*10+str.length()*(str.length()+1)/2<<endl;
   }
    return 0;
}


