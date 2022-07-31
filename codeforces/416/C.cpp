/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;                                          

int main()
{
    int n;
    cin>>n; pair<pair<int,int>,int> person[n] ;
    for(int i=0;i<n;i++){
          int x,y; 
        cin>>y>>x;
        person[i]=make_pair(make_pair(x,y),i);
        
    }
     sort(person,person+n,greater<pair<pair<int,int>,int>>());
     int m;
     cin>>m;pair<int,int> arr[m] ;
     for(int i=0;i<m;i++){
       int x;
         cin>>x;
         arr[i]=make_pair(x,i);
     }
     sort(arr,arr+m);
     
     int paid=0;vector<pair<int,int>>vec;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    
         if(arr[j].first>=person[i].first.second){
            paid+=person[i].first.first;
            vec.push_back(make_pair(person[i].second,arr[j].second));
         
            arr[j].first=0;break;
        }
     }
     }
    cout<<vec.size()<<" "<<paid<<endl;
    
    for(int i=0;i<vec.size();i++){
     cout<<vec[i].first+1<<" "<<vec[i].second+1<<endl;
    }
    
     
     
     
     
     



    return 0;
}
