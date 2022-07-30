/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;                                          

int main()
{
   string st1,st2,st3,st4;
   cin>>st1>>st2>>st3;
   st4=st1+st2;
   sort(st4.begin(),st4.end());
   sort(st3.begin(),st3.end());
   if(st3==st4){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
    return 0;
}
