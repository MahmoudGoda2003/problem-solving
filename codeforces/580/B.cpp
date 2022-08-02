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
 int n;vector <pair<int,long long>>arr;
 int search (int x){
     int low =0;int high=n-1;int mid=0;int ans;
     while(low<=high){
         mid =low+(high-low)/2;
         if(arr[mid].first>=x){
             high=mid-1;
         }else{
             ans=mid;
             low =mid+1;
         }
         
     }
     return ans;
 }
 
 
 
int main()
{ int d;
cin>>n>>d;long long sum=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        
        arr.push_back(make_pair(x,y));
    }sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        sum+=arr[i].second;
        arr[i].second=sum;
    }
    
    
long long m=0;

for(int i=0;i<n;i++){
    int result=search(arr[i].first+d);
    if(arr[result].first<=arr[i].first+d){
        if(i==result){
                 if(result ==0){
                      m=max(m,arr[result].second);
                 }else{
                      m=max(m,arr[result].second-arr[result-1].second);
                 }
                
        }else{
            if(i==0){
                m=max(m,arr[result].second);
            }else{
                m=max(m,arr[result].second-arr[i-1].second);
            }
            
            
            
        }
        
    }
    
}

cout<<m;
   
    return 0;
}

