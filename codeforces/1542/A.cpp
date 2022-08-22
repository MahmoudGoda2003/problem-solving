/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,cnt[2]={0};
		cin>>n;
		for(int i=1,x;i<=n*2;i++)cin>>x,cnt[x%2]++;
		if(cnt[0]==n)puts("Yes");
		else puts("No");
	}
	return 0;
}