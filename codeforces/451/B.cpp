/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define long long ll
int main()
{
  int n;
  cin>>n;
  int arr[n];
 vector <int>vec;
  for(int i=0;i<n;i++){
      cin>>arr[i];
     
  }
  for(int i=0;i<n;i++){
        if(i==0&&arr[0]>arr[1]){
         vec.push_back(i);
      }else if(i==n-1&&arr[n-1]<arr[n-2]){
          vec.push_back(i);  
      }else{
          if(i>0&&i<n-1&&((arr[i]<arr[i+1]&&arr[i]<arr[i-1])||(arr[i]>arr[i+1]&&arr[i]>arr[i-1]))){
             vec.push_back(i);
              
          }
      }
   

  }
  if(vec.size()==0){
       cout<<"yes"<<endl;
  cout<<1<<" "<<1;return 0;
  }

  for(int i=0;i<(vec[1]-vec[0]+1)/2;i++){
      int temp=arr[vec[0]+i];
      arr[vec[0]+i]=arr[vec[1]-i];
      arr[vec[1]-i]=temp;
  }
 
  
  
  for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
          cout<<"no";return 0;
      }
  }
  cout<<"yes"<<endl;
  cout<<vec[0]+1<<" "<<vec[1]+1;
    return 0;
}
