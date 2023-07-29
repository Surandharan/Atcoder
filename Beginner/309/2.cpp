#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define d long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)

void solve(){
    ll n;
    cin>>n;
    // cout<<n<<endl;
    vector<string> v(n);
    fr(i, 0, n) cin>>v[i];
    vector<char> edges;
    fr(i, 0, n) edges.push_back(v[0][i]);
    fr(i, 1, n) edges.push_back(v[i][n - 1]);
    frr(i, n - 2, 0) edges.push_back(v[n - 1][i]);
    frr(i, n - 2, 1) edges.push_back(v[i][0]);
    
    // fr(i, 0, edges.size()) cout<<edges[i]<<" ";
    // cout<<endl;
    
    // all edge values in edges now - rotate edges by 1 index
    reverse(begin(edges), end(edges));
    reverse(begin(edges), begin(edges) + 1);
    reverse(begin(edges) + 1, end(edges));
    
    // fr(i, 0, edges.size()) cout<<edges[i]<<" ";
    // cout<<endl;
    
    ll ind = 0;
    fr(i, 0, n) v[0][i] = edges[ind++];
    fr(i, 1, n) v[i][n - 1] = edges[ind++];
    frr(i, n - 2, 0) v[n - 1][i] = edges[ind++];
    frr(i, n - 2, 1) v[i][0] = edges[ind++];
    
    fr(i, 0, n) {
        fr(j, 0, n) cout<<v[i][j];
        cout<<endl;
    }
    
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}
