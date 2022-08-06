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
int x;
cin>>x;
x++;
while(x%10==(x/10)%10||x%10==(x/100)%10||x%10==(x/1000)%10||(x/10)%10==(x/100)%10||(x/10)%10==(x/1000)%10||(x/100)%10==(x/1000)%10){
    x++;
}
   cout<<x;
    return 0;
}

