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
 
int main()
{
  int n,t;
  cin>>n>>t;
   if(n==1&&t==10)
            cout<<"-1\n";
        else if(n>=2&&t==10)
        {
            for(int i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0\n";
        }
        else
        {
            for(int i=1;i<=n;i++){
                cout<<t;
            }
            cout<<endl;
        }
  
  
   
    return 0;
}

