#include <iostream>
#include<bits/stdc++.h>
using namespace std;


set <long long> SieveOfEratosthenes()
{
    const int n = 1e6;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    set<long long> res;
    for (int i = 2; i < 1e6+1; i++)
    {
        if (prime[i])
            res.insert((long long)i * i);
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t-->0) {
        int n;
        cin >> n;
        int arr[n];
        vector <int> vec;
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
            if(i>1){
                if(arr[i-2]<arr[i-1]&&arr[i]<arr[i-1]){
                    vec.push_back(i-1);
                }
            }
        }
        int ans=0;
        for (int i = 0;(!vec.empty()&&i < vec.size()-1); ++i) {
            if(vec[i+1]-vec[i]>2){
                ans++;
                arr[vec[i]] =max(arr[vec[i]-1],arr[vec[i]+1]);
            }else{
                arr[vec[i]+1]=max(arr[vec[i]],arr[vec[i+1]]);
                ans++;
                vec[i+1]=0;
                i++;
            }
        }
        if(vec.size()==1){
            ans++;
            arr[vec[0]] =max(arr[vec[0]-1],arr[vec[0]+1]);
        }else if(!vec.empty()&&vec[vec.size()-1]!=0){
            ans++;
            arr[vec[vec.size()-1]] =max(arr[vec[vec.size()-1]-1],arr[vec[vec.size()-1]+1]);
        }
        cout<<ans<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<arr[i]<<" ";
        }cout<<endl;


    }
    return 0;
}/*
5
3
2 1 2
4
1 2 3 1
5
1 2 1 2 1
9
1 2 1 3 2 3 1 2 1
9
2 1 3 1 3 1 3 1 3
 */