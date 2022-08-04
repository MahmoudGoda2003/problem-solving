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
#define ll long long 
 
using namespace std;                                          
int main(){
int n,k;
cin>>n>>k;ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    sort(arr,arr+n);
    ll sum=0;ll f=0,result =0;
    int j=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while((i-j+1)*arr[i]-sum>k){
            sum-=arr[j];
            j++;
        }
        if(i-j+1>f){
            f=i-j+1;
            result=arr[i];
        }
        
    }
    cout<<f<<" "<<result;
    

   
    return 0;
}


