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
		int n;cin>>n;
		int counter=0;
		for(int i=0;i<2*n;i++){
		    int x;
		    cin>>x;
		    if(x%2==1){
		        counter++;
		    }
		    
		}
		if(counter==n){
		    cout<<"YES"<<endl;
		}else{
		    cout<<"NO"<<endl;
		}
	}
	return 0;
}