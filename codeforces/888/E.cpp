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
int m,n;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector <int> left,right;
for(int i=0;i<n;i++){
    if(i<n/2){
        left.push_back(arr[i]);
    }else{
        right.push_back(arr[i]);
    }
}
int mx=0;ll sum=0;vector <int> l,r;
for(int i=0;i<= (1 << left.size()) - 1;i++){
    sum=0;
    for(int j=0;j<left.size();j++){
        if((i>>j)&1){
            sum+=left[j];
        }
    }
    
   l.push_back(sum%m);
}

for(int i=0;i<= (1 << right.size()) - 1;i++){
    sum=0;
    for(int j=0;j<right.size();j++){
        if((i>>j)&1){
            sum+=right[j];
        }
    }
    
   r.push_back(sum%m);
}


sort(r.begin(),r.end());
sort(l.begin(),l.end());
for(int i=0;i<l.size();i++){
    int x=m-l[i]-1;
    int y =search(x,r.size(),r);
   if ( y>= 0)
        {
            mx = max(mx, r[y] + l[i]);
        }
}

cout<<mx;













    return 0;
}

