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
 #include <vector>
using namespace std;                                          
 
int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector <int>vec(n,0);

for(int i=0;i<n;i++){
    if(arr[i]==0){
        continue;
    }else if(i-arr[i]>=0){
     vec[i-arr[i]]++;   
    }else{
        vec[0]++;
    }
    vec[i]--;
}

   for(int i=1;i<n;i++){
       vec[i]+=vec[i-1];
   }
  
   
   int result=0;
   for(int i=0;i<n;i++){
       if(vec[i]==0){
           result++;
       }
   }
   
   cout<<result;
   
    return 0;
}

