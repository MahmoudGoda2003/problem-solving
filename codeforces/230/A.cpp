/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<map>
#include<algorithm>
using namespace std;                                          

int main()
{
    int n,str;
    cin>>str>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(str>arr[i].first){
            str+=arr[i].second;
        }else{
            cout<<"NO";return 0;
        }
        
        
    }
    cout<<"YES";
    

    return 0;
}