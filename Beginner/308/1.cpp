// ============================================================================ //
// ||                                                                        || //
// ||             College of Engineering Guindy, Anna University             || //
// ||                           Watashi no namae wa                          || //
// ||                              Suren Yeager                              || //
// ||                                                                        || //
// ============================================================================ //

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
    ll n = 8;
    vector<ll> v(n);
    fr(i, 0, n) cin>>v[i];
    fr(i, 0, n){
        if(i > 0 and v[i] < v[i - 1]) ret("No")
        if(v[i] < 100 or v[i] > 675) ret("No")
        if(v[i] % 25) ret("No")
    }
    ret("Yes")
}

int main(){
    ll t;
    t = 1;
    while(t--) solve();
    return 0;
}