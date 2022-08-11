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

int t;
cin>>t;
for(int k=0;k<t;k++){
ll sum=0;bool flag=false;;int n;cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    sum+=x;
    if(x==1){
        flag=true;
    }
    
}

if(flag){
    if(sum%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}else{
    if(n%2==0){
      if(sum%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }else{
        cout<<"No"<<endl;
    }
}
    
    

    
}








    return 0;
}


