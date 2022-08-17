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
#include<set>
 #include <vector>
using namespace std;                                          
#define ll long long 
bool islucky(int n){
    while(n!=0){
     if(n%10!=4&&n%10!=7){
        
        return false;
     }
     n/=10;
     
 }
 return true;
    
}



int main()
{
 int n;
 cin>>n;
for(int i=1;i<=n;i++){
    if(islucky(i)){
        if(n%i==0){
            cout<<"YES";return 0;
        }
    }
}cout<<"NO";
    return 0;
}

