/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<map>
#include<algorithm>
using namespace std;                                          

int main()
{
    
    int n;
    cin>>n;int x;
    map <int,int>mp;
     
    for(int i=0;i<n;i++){
     cin>>x;
     mp[x]++;
    }
    int m;cin>>m;
    pair<int,int> arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i].first;
    }
    for(int i=0;i<m;i++){
        cin>>arr[i].second;
    }
    int index=0,sum=0,max=0;
    
    for(int i=0;i<m;i++){
        sum=0;
        sum+=mp[arr[i].first]*100+mp[arr[i].second];
        
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    cout<<index+1;
    
    
    

    return 0;
}
