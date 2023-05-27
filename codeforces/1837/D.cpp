#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> bal(n + 1);
        for(int j = 0; j < n; j++)
            if(s[j] == '(')
                bal[j + 1] = bal[j] + 1;
            else
                bal[j + 1] = bal[j] - 1;

        if(bal.back() != 0)
            cout << -1 << endl;
        else
        {
            if(*min_element(bal.begin(), bal.end()) == 0 || *max_element(bal.begin(), bal.end()) == 0)
            {
                cout << 1 << endl;
                for(int j = 0; j < n; j++)
                {
                    if(j) cout << " ";
                    cout << 1;
                }
                cout << endl;
            }
            else
            {
                cout << 2 << endl;
                vector<int> ans;
                int cur = 0;
                while(cur < n)
                {
                    int w = (s[cur] == '(' ? 1 : 2);
                    do
                    {
                        cur++;
                        ans.push_back(w);
                    }
                    while(bal[cur] != 0);
                }
                for(int j = 0; j < n; j++)
                {
                    if(j) cout << " ";
                    cout << ans[j];
                }
                cout << endl;
            }
        }
    }    
}