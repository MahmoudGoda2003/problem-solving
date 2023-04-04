	/*
	    author : Takahashi Keisuke
	    created when : 05/08/2022; 
	*/
	#include<bits/stdc++.h> 
    
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
	using namespace std; 
	using namespace __gnu_pbds;

    #define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
	#define ll long long
	#define all(c) c.begin(), c.end()
	#define rall(c) c.rebgin(), c.rend()
	#define ff first 
	#define ss second
	#define pb push_back
	#define sz(s) s.size()
	#define allc graph 
	#define pii pair<int, int> 
	#define mp make_pair

	#ifdef port
	#include "algo/debug.h"
	#else
	#define debug(...) 42
	#endif
	#define INT int 
	using ui = unsigned;
     
    vector<int> alpha1 = {'g', 'j', 'p', 'q', 'y'};
    vector<int> alpha2 = {'b', 'd', 'f', 'h', 'k', 'l', 't'}; 
    void solve(){
         string s; 
         cin >> s;
         sort(all(alpha1)); 
         sort(all(alpha2)); 
         int cnt = 0; 
         for(int i = 0; i < sz(s); i += 1){
         	 if(find(alpha1.begin(), alpha1.end(), s[i]) != alpha1.end()) cnt -= 1; 
         	 if(find(alpha2.begin(), alpha2.end(), s[i]) != alpha2.end()) cnt += 1; 
         	 if(cnt < 0){
         	 	  cout << "NO" << '\n'; 
         	 	  return; 
         	 }


         }
         if(cnt == 0) cout << "YES" << '\n'; 
         else cout << "NO" << '\n'; 

    }
    int main(void) {
	  ios::sync_with_stdio(false);
	  cin.tie(0);
	  int t; 
	  cin >> t; 
	  while(t--) 
	  solve(); 
	  return 0;
	}
