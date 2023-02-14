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

   string str ;
   cin>>str;
    for (int i = 0; i < str.length(); ++i) {
        int num1 = int(str[i]-'0');
        for (int j = i+1; j<str.length(); ++j) {
            int num2 = int(str[i]-'0')*10+int(str[j]-'0');
            for (int k =j+1; k<str.length(); ++k) {
                int num3 = int(str[i]-'0')*100+int(str[j]-'0')*10+int(str[k]-'0');
                if(num3%8==0){
                    cout<<"YES"<<endl;
                    cout<<num3<<endl;
                    return 0;
                }
            }
            if(num2%8==0){
                cout<<"YES"<<endl;
                cout<<num2<<endl;
                return 0;
            }
        }
        if(num1%8==0){
            cout<<"YES"<<endl;
            cout<<num1<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
