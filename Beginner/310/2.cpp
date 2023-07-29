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
#define vvi vector<vi>
#define vp vector<pair<ll,ll>>

void solve(){
    ll n, m;
    cin>>n>>m;

    vp p(n);
    // {cost, functionCount}
    vvi f(n, vi(101, 0));
    // {functions for all n products}

    fr(i, 0, n){
        //cost
        cin>>p[i].first;
        //functionCount
        cin>>p[i].second;
        //for all functions get input in f
        fr(j, 0, p[i].second){
            ll ind;
            cin>>ind;
            f[i][ind] = 1;
        }
    }

    fr(i, 0, n){
        fr(j, 0, n){
            if(i == j) continue;
            // first - cost, second - functionCount
            if(p[i].first > p[j].first) continue;
            if(p[i].second < p[j].second) continue;
            if(p[i].first == p[j].first and p[i].second == p[j].second) continue;
            // check all
            ll fl = 0;
            fr(k, 0, 101){
                if(f[i][k] == 0 and f[j][k]) {
                    fl = 1;
                    break;
                }
            }
            if(fl == 0) {
                // cout<<i<<" "<<j<<endl;
                ret("Yes")
            }
        }
    }

    ret("No")
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}