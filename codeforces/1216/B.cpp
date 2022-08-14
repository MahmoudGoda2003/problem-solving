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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


#define ll long long 
using namespace std;                                          

int search (int x,int n,vector<int> &arr){
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

 
 
 

int main(){
int n;
cin>>n;
pair<int,int> arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i].first;
    arr[i].second=i;
}
sort(arr,arr+n,greater<pair<int,int>>());
ll ans=0;
for(int i=0;i<n;i++){
    ans+=arr[i].first*i+1;
}cout<<ans<<endl;
for(int i=0;i<n;i++){
 cout<<arr[i].second+1<<" ";   
}cout<<endl;
    return 0;
}