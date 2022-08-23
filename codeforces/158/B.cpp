/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n;
	cin>>n;unordered_map <int,int>mp;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    mp[x]++;
	}

	ll result=mp[4];
	if(mp[1]<mp[3]){
	    result+=mp[3];
	    if(mp[2]%2==0){
	        result+=mp[2]/2;
	    }else{
	         result+=(mp[2]/2)+1;
	    }
	}else{
	    result+=mp[3];
	    mp[1]-=mp[3];
	    if((mp[2]*2+mp[1])%4==0){
	        result+=(mp[2]*2+mp[1])/4;
	    }else{
	         result+=((mp[2]*2+mp[1])/4)+1;
	    }
	}cout<<result;
	
	
	return 0;
}