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
   pair<int,int> arr[n];
   for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      arr[i]=make_pair(x,y);
      
   }
   sort(arr,arr+n);
   for(int i=0;i<n-1;i++){
       if(arr[i].second>=arr[i+1].second){
           cout<<"Happy Alex";return 0;
       }
   }
   cout<<"Poor Alex";
   
   
    return 0;
}

