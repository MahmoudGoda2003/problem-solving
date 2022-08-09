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
    int n;cin>>n;
    int arr[n];
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0,b=0,x=0;bool player =true;
    
    int i=0,j=n-1;
    while(j>=i){
        if(arr[i]>arr[j]){
            x=arr[i];i++;
        }else{
            x=arr[j];j--;
        }
        
        if(player){
            a+=x;player^=1;
        }else{
            b+=x;player=!player;
        }
        
        
    }
    
    cout<<a<<" "<<b;
    





    return 0;
}


