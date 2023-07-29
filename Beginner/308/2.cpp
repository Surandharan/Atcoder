#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)

// functions

ll sum(vector<ll> &a){
    ll s = 0;
    for(ll i = 0; i < size(a); i++) s += a[i];
    return s;
}

void printV(vector<ll> &a){
    for(ll &val : a) cout<<val<<" ";
    cout<<endl;
}

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<string> v(n), col(k);
    vector<ll> cost(k + 1);
    fr(i, 0, n) cin>>v[i];
    fr(i, 0, k) cin>>col[i];
    fr(i, 0, k + 1) cin>>cost[i];
    unordered_map<string, ll> mp;
    fr(i, 1, k + 1) mp[col[i - 1]] = cost[i];
    ll c = 0;
    fr(i, 0, n) {
        if(mp[v[i]]) {
            c += mp[v[i]];
            // cout<<mp[v[i]]<<" ";
        }
        else {
            c += cost[0];
            // cout<<cost[0]<<" ";
        }
    }
    ret(c)
}

int main(){
    ll t;
    t = 1;
    while(t--) solve();
    return 0;
}