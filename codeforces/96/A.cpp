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
 cin>>str;
 bool flag=false ;int counter=1;
 for(int i=0;i<str.length()-1;i++){
     
     
     if(str[i]==str[i+1]){
         counter++;
     }else{
         counter=1;
     }
     if(counter>=7){
         flag=true;
     }
    
  
 }

 if(flag){
     cout<<"YES";
 }else{
     cout<<"NO";
 }
   
    return 0;
}

