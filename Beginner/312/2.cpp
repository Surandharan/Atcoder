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

const ll MOD = 1e9 + 7;


void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> s(n), b(m);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(s.begin(), s.end());
    sort(b.begin(), b.end());
    ll low = 0;
    ll high = 1e9 + 10;
    while (high - low > 1) {
        ll mid = low + (high - low) / 2;
        int a1 = upper_bound(s.begin(), s.end(), mid) - s.begin();
        int b1 = lower_bound(b.begin(), b.end(), mid) - b.begin();
        if (a1 >= m - b1) high = mid;
        else low = mid;
    }
    ret(high)
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
