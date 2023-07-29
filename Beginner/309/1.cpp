#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define d long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)

void solve(){
    vector<vector<ll>> v{{1,2,3}, {4,5,6}, {7,8,9}};
    ll a, b;
    cin>>a>>b;
    ll ai, aj, bi, bj;
    fr(i, 0, 3) fr(j, 0, 3) if(v[i][j] == a) ai = i, aj = j;
    fr(i, 0, 3) fr(j, 0, 3) if(v[i][j] == b) bi = i, bj = j;
    if(ai == bi) ret("Yes")
    ret("No")
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}
