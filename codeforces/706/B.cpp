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
 int n;vector <int>arr;
 int search (int x){
     int low =0;int high=n-1;int mid=0;int ans;
     while(low<=high){
         mid =low+(high-low)/2;
         if(arr[mid]>x){
             high=mid-1;
         }else{
             ans=mid;
             low =mid+1;
         }
         
     }
     return ans;
 }
 
 
 
int main()
{
  cin>>n;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }sort(arr.begin(),arr.end());
   
   int m; cin>>m;int x;
   for(int i=0;i<m;i++ ){
       cin>>x;
       int result =search(x);
       if(arr[result]<=x){
           cout<<result+1<<endl;
       }else{
           cout<<0<<endl;
       }
       
   }
   
   
   
    return 0;
}

