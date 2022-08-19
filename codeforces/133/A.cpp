/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define long long ll
int main()
{
   string str;
   cin>>str;
   for(int i=0;i<str.length();i++){
       if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
           cout<<"YES";return 0;
       }
   }
   cout<<"NO";
    return 0;
}