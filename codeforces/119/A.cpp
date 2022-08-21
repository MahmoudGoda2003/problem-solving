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
 
int gcd(int x, int y)
{
    return (x==0)? y : gcd(y % x, x);
}
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int k = 0;
    while (n >= 0)
    {
        ++k;
        n -= gcd((k & 1) ? a : b, n);
    }
    if (k & 1) cout << 1; else cout << 0;
    return 0;
}