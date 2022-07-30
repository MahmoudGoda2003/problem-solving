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
   int n,m,min;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>m;min=1000;vector <int> v(m);int even=0,odd=0;bool flag=true;
       for(int j=0;j<m;j++){
           cin>>v[j];if(v[j]%2==0){
               even++;
           }else{
               odd++;
           }
       }
       if(odd%2==0&&even%2==0){
           cout<<"YES"<<endl;continue;
       }else if(odd%2!=even%2){
            cout<<"NO"<<endl;continue;
       }
       sort(v.begin(),v.end());
       for(int j=0;j<m-1;j++){
           if(v[j+1]-v[j]==1&&v[j+1]%2!=v[j]%2){
               cout<<"YES"<<endl;flag=false;break;
           }
       }
       if(flag){
           cout<<"NO"<<endl;
       }
       
   }
   

    return 0;
}