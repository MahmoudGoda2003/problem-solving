/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/

 #include <bits/stdc++.h>
using namespace std;                                          
 #define ll long long



int main()
{
 int t;
 cin>>t;
 while(t-->0){
  int w, h, n;
  cin >> w >> h >> n;
  int result = 1;
  while (w % 2 == 0) {
    w /= 2;
    result*=2;
  }
  while (h % 2 == 0) {
    h /= 2;
    result*=2;
  }
  if(result>=n){
      cout<<"YES"<<endl;
  }else{
      cout<<"NO"<<endl;
  }
 }
    return 0;
}

