/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{int n,x,y,z,a;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x>>y>>z;
    a=z%x;
    if(a==y){
        cout<<z<<endl;
    }else if(a<y){
        cout<<z-x+(y-a)<<endl;
    }else{
        cout<<z-(a-y)<<endl;
    }
    
    
    
    
}
        
        
        


    return 0;
}