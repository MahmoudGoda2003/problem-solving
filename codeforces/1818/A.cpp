// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t-->0){
    int n, k;
    cin >> n >> k;
    string t[n];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(t[i] == t[0]) {
            ans++;
        }
    }
    cout << ans << "\n";
    }
    return 0;
}