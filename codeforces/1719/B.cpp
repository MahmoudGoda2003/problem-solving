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
#include<set>
 #include <vector>
using namespace std;                                          
 
int main()
{
 int t;cin>>t;
 for(int k=0;k<t;k++){
     int x,y;
     cin>>x>>y;bool flag=true;
     vector <pair<int,int>> vec;
     for(int i=2;i<=x;i+=2){
         if(((i+y-1)*i)%4==0){
             vec.push_back(make_pair(i-1,i));
         }else if(((i+y)*(i-1))%4==0){
               vec.push_back(make_pair(i,i-1));
         }else{
             cout<<"NO"<<endl;flag=false;break;
         }
   
         
     }
     if(flag){
         cout<<"YES"<<endl;
         for(int i=0;i<vec.size();i++){
             cout<<vec[i].first<<" "<<vec[i].second<<endl;
         }
     }
     
     
     
 }
    return 0;
}

