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
 
using namespace std;                                          
 
int main()
{
  int n;
  cin>>n;
  int even=0,odd=0,indo=0,inde=0;
  for(int i=0;i<n;i++){
      int x;cin>>x;
      if(x%2==0){
          even++;
          inde=i;
      }else{
          odd++;
          indo=i;
      }
    
  }
  if(odd==1){
      cout<<indo+1;
  }else{
      cout<<inde+1;
  }
  
   
    return 0;
}

