#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define do double
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

void solve(){
    ll n, p, q, mini = INT_MAX;
    cin>>n>>p>>q;
    vi v(n);
    fr(i, 0, n) {
        cin>>v[i];
        mini = min(mini, v[i]);
    }
    ret(min(p, q + mini))
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}