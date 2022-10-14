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
  int t;
  cin>>t;
  while(t-->0){
      int n;
		cin>>n;
		int last=0;
		for(int i=0; i<30; ++i)
		{
			if(((n>>i)&1) == 1)
			{
				last=i;
			}
		}
		cout<<(1<<last)-1<<endl;
  }
   
   
    return 0;
}

