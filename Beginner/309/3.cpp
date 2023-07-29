#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define d long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)

void solve(){
    ll n, k, totalPills = 0;
    cin>>n>>k;
    vector<pair<ll,ll>> vp(n);
    fr(i, 0, n) {
        cin>>vp[i].first;
        cin>>vp[i].second;
        totalPills += vp[i].second;
    }
    sort(begin(vp), end(vp));
    if(totalPills <= k) ret(1);
    fr(i, 0, n){
        totalPills -= vp[i].second;
        if(totalPills <= k) ret(vp[i].first + 1);
    }
    ret(vp.back().first + 1);
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}
