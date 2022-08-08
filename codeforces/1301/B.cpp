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
#include<vector>
#define ll long long 
using namespace std;                                          

vector <int>vec;

int ans(int z){
    int result=0;
    for(int i=0;i<vec.size()-1;i++){
       int x=vec[i],y=vec[i+1];
        if(x==-1){
            x=z;
        }
        if(y==-1){
            y=z;
        }
        
        result=max(result,abs(x-y));
         
    }
    
    
    
    return result;
}



int main(){
int t;
cin>>t;
for(int k=0;k<t;k++){
int n;
cin>>n;vec.resize(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}

int low=0,high=1e9,mid1=0,mid2=0;
while(high-low>=3){
    mid1=low+(high-low)/3;
    mid2=high-(high-low)/3;
    int ans1=ans(mid1);
    int ans2=ans(mid2);
    
    if (ans1 <= ans2){
                high = mid2;
            }else{
                low = mid1;
            }
}
int result=0,mx=1e9;
for(int i=low;i<=high;i++){
    int x=ans(i);
    if(x<mx){
        mx=x;
        result=i;
    }
    
}    

    cout<<mx<<" "<<result<<endl;
    
    
    
    
    
}
    
  







    return 0;
}

