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
 
using namespace std;                                          
 
int main()
{
 string str;
 cin>>str;string st="hello";int j=0;
 for(int i=0;i<str.length();i++){
   if(str[i]==st[j]){
       j++;
       if(i<str.length()&&str[i]==str[i+1]&&st[j]!='l'){
           j--;
       }
   }
 }
if(j==5){
    cout<<"YES";
}else{
    cout<<"NO";
}
    return 0;
}

