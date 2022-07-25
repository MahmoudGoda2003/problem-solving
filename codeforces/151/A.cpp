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
{int n, k, l, c, d, p, nl, np;
    cin>>n>>k>> l>> c>> d>> p>> nl>> np;
    l=(k*l)/nl;p=p/np;c=c*d;
   
    cout<<min(min(l,c),p)/n;
        
        
        


    return 0;
}