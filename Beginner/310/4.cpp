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
#define vs vector<string> 

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll ones = 0, zeros = 0, res = 0;
    fr(i, 0, n){
        if(s[i] == '0'){
            res += i;
            ones++;
        }
        else {
            res += i + 1 - ones;
            ones++;
        }
    }

    ret(res)
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}