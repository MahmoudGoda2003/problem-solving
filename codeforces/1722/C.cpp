/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define long long ll
int main(){
  int t;
  cin>>t;
  while(t-->0){
      int n;
      cin>>n;
     map<string,int> mp1;
     map<string,int> mp2;
     map<string,int> mp3;
      for(int i=0;i<n;i++){
          string x;
          cin>>x;
          mp1[x]=-1;
      }
      
      for(int i=0;i<n;i++){
          string x;
          cin>>x;
          mp2[x]=-1;
      }
      for(int i=0;i<n;i++){
          string x;
          cin>>x;
          mp3[x]=-1;
      }
      int x=0,y=0,z=0;
        
    for (auto i : mp1){
        if(mp2[i.first]==0&&mp3[i.first]==0){
            x+=3;
        } if(mp2[i.first]==-1&&mp3[i.first]==0){
            x++;
        } if(mp2[i.first]==0&&mp3[i.first]==-1){
            x++;
        }
        
    }
      
      for (auto a : mp2){
        if(mp2[a.first]==-1&&(mp1[a.first]==0&&mp3[a.first]==0)){
            y+=3;
        } if(mp2[a.first]==-1&&(mp1[a.first]==-1&&mp3[a.first]==0)){
            y++;
        }if(mp2[a.first]==-1&&(mp1[a.first]==0&&mp3[a.first]==-1)){
            y++;
        }
        
    }
    
    for (auto b : mp3){
        if(mp3[b.first]==-1&&(mp2[b.first]==0&&mp1[b.first]==0)){
            z+=3;
        } if(mp3[b.first]==-1&&(mp2[b.first]==-1&&mp1[b.first]==0)){
            z++;
        } if(mp3[b.first]==-1&&(mp2[b.first]==0&&mp1[b.first]==-1)){
            z++;
        }
        
    }




      
      cout<<x<<' '<<y<<" "<<z<<endl;
  
  }
  
    return 0;
}
