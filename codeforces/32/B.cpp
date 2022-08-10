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


#define ll long long 
using namespace std;                                          

int main(){
  string str;
  cin>>str;
  
  for(int i=0;i<str.length();i++){
     if(str[i]=='.'){
         cout<<'0';
     }else if(str[i]=='-') {
         if(i<str.length()-1&&str[i+1]=='-'){
             cout<<'2';i++;
         }else if(i<str.length()-1&&str[i+1]=='.'){
             cout<<'1';i++;
         }
     }
     
      
      
      
      
  }
    return 0;
}


