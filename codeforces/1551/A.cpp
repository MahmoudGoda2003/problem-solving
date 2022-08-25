/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/

 #include <bits/stdc++.h>
using namespace std;                                          
 #define ll long long



int main()
{
 int t;
 cin>>t;
 while(t-->0){
     int n;cin>>n;
     int x=n/3,y=n/3;
     if(n%3==1){
         x++;
     }else if(n%3==2){
         y++;
     }
     cout<<x<<" "<<y<<endl;
     
 }
    return 0;
}

