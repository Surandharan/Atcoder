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

vector<int> dirs{0, -1, 0, 1, 0};
string snuke = "snuke";

bool dfs(ll i, ll j, vector<vector<ll>> &visited, vector<vector<char>> &mat, ll ind){
    if(i == size(mat) - 1 and j == size(mat[0]) - 1) return true;
    visited[i][j] = 1;
    // cout<<i<<" "<<j<<" "<<mat[i][j]<<" "<<snuke[ind + 1]<<endl;
    fr(k, 0, 4){
        ll r = i + dirs[k], c = j + dirs[k + 1];
        if(r < 0 or c < 0 or r == size(mat) or c == size(mat[0]) or visited[r][c] or mat[r][c] != snuke[(ind + 1) % 5]) continue;
        if(dfs(r, c, visited, mat, ind + 1)) return true;
    }
    return false;
}

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<char>> mat(n, vector<char> (m));
    fr(i, 0, n) fr(j, 0, m) cin>>mat[i][j];
    vector<vector<ll>> visited(n, vector<ll> (m));
    if(mat[0][0] != 's') ret("No")
    // cout<<"dfs done"<<endl;
    if(dfs(0, 0, visited, mat, 0)) ret("Yes")
    ret("No")
}

int main(){
    ll t;
    t = 1;
    while(t--) solve();
    return 0;
}