/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
#include<map>
#include<algorithm>
#include <bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<vector>
#define int long long
#define ll long long 
using namespace std;                                          



int32_t main(){

int n, m; cin >> n >> m;
 
    map<string, int> mapp; vector<string> arr(n);
    vector<set<int>> roads(n);
    for(int i=0;i<n;i++){
        string s; cin >> s;
        mapp[s] = i;
        arr[i] = s;
    }
    for(int i=0;i<m;i++){
        string s1, s2; cin >> s1 >> s2;
        int x1 = mapp[s1], x2 = mapp[s2];
        roads[x1].emplace(x2);
        roads[x2].emplace(x1);
    }
    vector<int> ans;
    for(int x=0;x<1<<n;x++){
        vector<int> v;
        for(int i=0;i<n;i++)
            if (x & (1 << i))
                v.push_back(i);
        bool flag = true;
        for (int i : v)
        {
            for (int j : v)
            {
                if (roads[i].count(j))
                    flag = false;
            }
        }
        if (flag && v.size() > ans.size())
            swap(v, ans);
    }
    cout << ans.size() << endl;
    vector<string> answers;
    for (int i : ans)
        answers.push_back(arr[i]);
    sort(answers.begin(), answers.end());
    for (auto i : answers)
        cout << i << endl;
    return 0;
}

