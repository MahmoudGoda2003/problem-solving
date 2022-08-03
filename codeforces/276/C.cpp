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
// int n;vector <pair<int,long long>>arr;
// int search (int x){
//     int low =0;int high=n-1;int mid=0;int ans;
//     while(low<=high){
//         mid =low+(high-low)/2;
//         if(arr[mid].first>x){
//             high=mid-1;
//         }else{
//             ans=mid;
//             low =mid+1;
//         }
//         
//     }
//     return ans;
// }
// 
 
 
int main(){
   int n,q;
    cin>>n>>q;long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long f[n+1];fill(f,f+n+1,0);
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        
        f[x-1]++;
        f[y]--;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=f[i];
       f[i]=sum;
    }
    sort(arr,arr+n,greater<int>());
    sort(f,f+n,greater<int>());
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i]*f[i];
    }
   cout<<ans;
   
    return 0;
}

