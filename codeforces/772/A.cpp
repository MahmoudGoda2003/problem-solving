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
int n,p;vector<pair<int,int>>vec;
bool ok(double t){
	int i;
	double sum=0;
	for(i=0;i<n;++i)
		if(vec[i].first*t>vec[i].second)
			sum+=vec[i].first*t-vec[i].second;
	if(sum>p*t)
		return false;
	else
		return true; 
}





int main(){
    cin>>n>>p;
    ll sum=0;ll ap=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        sum+=x;
        ap+=y;
        vec.push_back(make_pair(x,y));
    }
    
    if(p>=sum){
        cout<<-1;return 0;
    }
    double high =ap/(sum-p)+1,low=0,mid;
    
    for(int i=0;i<100;i++){
        mid=low+(high-low)/2;
        if(ok(mid)){
            low=mid;
        }else{
            high=mid;
        }
    }
    
   cout<<mid;
    
    
    
    
    
    
    
    
    return 0;
}


