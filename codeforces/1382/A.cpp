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

 
int main(){
int t,n,m;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n>>m;
    bool flag=true;
    map<int,int>mp;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        mp[x]=2;
    }
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        if(mp[x]==2){
        mp[x]--;    
        }
    }
   
    for (auto& it : mp) {
        if (it.second == 1) {
            cout<<"YES"<<endl;
            cout <<1<<" "<<it.first <<endl;
            flag = false;break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }mp.clear();
    
    
    
    
}
    return 0;
}

