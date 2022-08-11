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
int n;vector<pair<int,int>>vec;
bool ok(double t){
    double l=0,r=1e9,x,y;
for(int i=0;i<n;i++){
   x=vec[i].first+t*vec[i].second;
   y=vec[i].first-t*vec[i].second;    
   l=max(l,y);
    r=min(r,x);
}
if(l<=r){
    return false;
}return true;

}





int main(){
    cin>>n;vec.resize(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first;
    }

for(int i=0;i<n;i++){
        cin>>vec[i].second;
    }
    
    double high =1e9,low=0,mid;
    
    for(int i=0;i<500;i++){
        mid=low+(high-low)/2;
        if(ok(mid)){
            low=mid;
        }else{
            high=mid;
        }
    }
    
   printf("%lf",mid);
    
    
    
    
    
    
    
    
    return 0;
}


