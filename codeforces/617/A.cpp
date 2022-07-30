/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;                                          

int main()
{
    int n;
    cin>>n;
    if(n%5==0){
        cout<<n/5;
    }else{
        cout<<n/5+1;
    }
    
    

    return 0;
}
