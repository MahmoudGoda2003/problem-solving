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
 
int main()
{
    int n,time;
    int a[35],b[35];
    cin>>n>>time;
    int min_time=0,max_time=0;
    vector<int>result;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        min_time+=a[i];
        max_time+=b[i];
        result.push_back(a[i]);
    }
    if(min_time<=time && time<=max_time){
        cout<<"YES\n";
        if(min_time<time){
        for(int i=0;i<n;i++){
                int df=b[i]-a[i];
            while(df>0){
                    if(min_time==time){
                        break;
                        
                    }
                min_time++;
                result[i]++;
                df--;
            }
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
        cout<<endl;
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
