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
int n;
bool check(int x, int y,int z,int *a){
    return y> 0 && y < n - 1 &&( a[y] < a[x] && a[y] < a[z]||a[y] > a[x] && a[y] > a[z]);
}

int main(){
int t;
cin>>t;
for(int k=0;k<t;k++){
    cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ar[n]={};int count =0;
    for(int i=1;i<n-1;i++){
        if(check(i-1,i,i+1,arr)){
           ar[i]=1;count++;
        }
    }int result=count;
    for(int i=1;i<n-1;i++){
        int x=arr[i];
       
        arr[i]=arr[i+1];
        result=min(result,count-ar[i-1]-ar[i]-ar[i+1]+check(i-1,i,i+1,arr)+check(i-2,i-1,i,arr)+check(i,i+1,i+2,arr));
        arr[i]=arr[i-1];
        result=min(result,count-ar[i-1]-ar[i]-ar[i+1]+check(i-1,i,i+1,arr)+check(i-2,i-1,i,arr)+check(i,i+1,i+2,arr));   
        arr[i]=x;
    }
    
    cout <<result<<endl;
    
}






    return 0;
}

