/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;                                          

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;cin>>str;
        if(str.length()>10){
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }else{
            cout<<str<<endl;
        }
        
        
    }
    

    return 0;
}
