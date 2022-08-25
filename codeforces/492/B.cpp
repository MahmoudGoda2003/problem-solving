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
 int n,d;
 cin>>n>>d;
 double arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 sort(arr,arr+n);
 double mx=2*max(arr[0],d-arr[n-1]);
 for(int i=0;i<n-1;i++){
     mx=max(mx,arr[i+1]-arr[i]);
 }
 cout<<setprecision(14)<<mx/2;
    return 0;
}

