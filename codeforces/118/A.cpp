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
 
using namespace std;                                          
 
int main()
{
   string str;
   cin>>str;
   transform(str.begin(), str.end(), str.begin(), ::tolower);
   str.erase(remove(str.begin(), str.end(), 'u'), str.end());
   str.erase(remove(str.begin(), str.end(), 'a'), str.end());
   str.erase(remove(str.begin(), str.end(), 'i'), str.end());
   str.erase(remove(str.begin(), str.end(), 'o'), str.end());
   str.erase(remove(str.begin(), str.end(), 'e'), str.end());
   str.erase(remove(str.begin(), str.end(), 'y'), str.end());
   for(int i=0;i<str.length();i++){
     cout<<'.'<<str[i];   
   }
   
    return 0;
}