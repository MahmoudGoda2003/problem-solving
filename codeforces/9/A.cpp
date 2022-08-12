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
int x,y;
cin>>x>>y;
int z=max(x,y);
z=7-z;
if(z==3){
    cout<<"1/2";
}else if(z==4){
    cout<<"2/3";
}else if(z==2){
    cout<<"1/3";
}else if(z==6){
    cout<<"1/1";
}
else{
    cout<<z<<"/"<<6;
}

    return 0;
}


