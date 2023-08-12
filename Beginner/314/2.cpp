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

void solve(){
    ll n;
    cin>>n;
    vector<unordered_set<int>> mp(n);
    fr(i, 0, n){
        ll cnt;
        cin>>cnt;
        fr(j, 0, cnt){
            ll val;
            cin>>val;
            mp[i].insert(val);
        }
    }

    ll x;
    cin>>x;

    vp p;
    fr(i, 0, n){
        if(mp[i].count(x)){
            p.pb({sz(mp[i]), i + 1});
        }
    }
    if(sz(p) == 0) ret(0) 
    sort(all(p));
    vi sp;
    ll f = p.front().first;
    fr(i, 0, sz(p)){
        if(p[i].first == f){
            sp.pb(p[i].second);
        }
        else break;
    }
    cout<<sz(sp)<<endl;
    fr(i, 0, sz(sp)) cout<<sp[i]<<" ";
    

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
