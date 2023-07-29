#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
#define ret(s) {cout<<s<<endl; return;}
#define umap unordered_map
#define uset unordered_set
#define pqu(x) priority_queue<x>
#define pqg(x) priority_queue<x, vector<x>, greater<x>>
#define upper upper_bound
#define lower lower_bound
#define all(a) begin(a),end(a)
#define sz(X) (ll)((X).size())
#define ins(x) insert(x)
#define pb push_back
#define vi vector<ll>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vp vector<pair<ll,ll>>
#define vs vector<string> 
#define vc vector<char>
#define vvc vector<vc>

const ll MOD = 998244353;
ll dp[3001][3001];

ll helper(ll ind, ll cnt, string &s){
    if(ind == s.length()){
        if(cnt == 0) return 1;
        return 0;
    }
    if(dp[ind][cnt] != -1) return dp[ind][cnt];
    if(s[ind] != '?'){
        if(s[ind] == '(') return dp[ind][cnt] = helper(ind + 1, cnt + 1, s) % MOD;
        if(s[ind] == ')' ){
            if(cnt == 0) return 0;
            return dp[ind][cnt] = helper(ind + 1, cnt - 1, s) % MOD;
        }
    }
    ll open = helper(ind + 1, cnt + 1, s) % MOD;
    ll close = cnt ? helper(ind + 1, cnt - 1, s) : 0 % MOD;
    return dp[ind][cnt] = (open + close) % MOD;
}

void solve() {
    string s;
    cin>>s;
    memset(dp, -1, sizeof(dp));
    ret(helper(0, 0, s));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    t = 1;
    for(int i = 1; i <= t; i++){
        solve();
    }
    return 0;
}
