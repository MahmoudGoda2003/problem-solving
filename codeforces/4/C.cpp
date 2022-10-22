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
   int n;
   cin>>n;
   map<string,int> mp;
   for(int i=0;i<n;i++){
       string x;
       cin>>x;
       mp[x]++;
       if(mp[x]-1==0){
           cout<<"OK"<<endl;
       }else{
           cout<<x<<mp[x]-1<<endl;
       }
       
       
       
   }
    return 0;
}

