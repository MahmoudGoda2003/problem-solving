/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main()
{
   int n,m,k;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>m>>k;
       if(m%k==0){
           cout<<m/k<<endl;
       }else if(m<k){
           cout<<1<<endl;
       }
       else {
         int ans = m;

		for (int j = sqrt(m); j >0; j--) {
			if (m % j == 0) {
			    if (j <= k) {
					ans =min(ans, m/j);
				}

				if (m / j <= k) {
					ans = min(ans, j);
				}
				}
                
			}
       
       cout<<ans<<endl;
       
   }
   
   }
    return 0;
}
