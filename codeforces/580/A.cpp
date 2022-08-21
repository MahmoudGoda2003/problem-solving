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
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int j=0,i=0;
    
  int mx=0;
  while(j<n-1){
      if(arr[j]<=arr[j+1]){
          j++;mx=max(mx,j-i+1);
      }else{
          mx=max(mx,j-i+1);
          j++;
          i=j;
      }
  }
if(mx==0){
    cout<<n;return 0;
}
   cout<<mx;
    return 0;
}

