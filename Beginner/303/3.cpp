#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define retNo {cout<<"No"<<endl; return;}
#define retYes {cout<<"Yes"<<endl; return;}
string dirs;

struct HashVectorLL {
    size_t operator()(const vector<ll>& v) const {
        size_t seed = v.size();
        for (const ll& i : v) {
            seed ^= i + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }
};

bool dfs(ll ind, unordered_set<vector<ll>, HashVectorLL>& st, ll H, ll K, ll i, ll j){
    if(H < 0) return false;
    if(ind == dirs.length()) return true;
    if(st.count({i,j}) && H < K && ind != 0) {
        H = K;
        st.erase({i,j});
    }
    
    // dfs call
    ll a = i, b = j;
    if(dirs[ind] == 'R') a++;
    else if(dirs[ind] == 'L') a--;
    else if(dirs[ind] == 'U') b++;
    else b--;
    
    return dfs(ind + 1, st, H-1, K, a, b);
}

void solve(){
    ll N,M,H,K;
    cin>>N>>M>>H>>K>>dirs;
    unordered_set<vector<ll>, HashVectorLL> st;
    for(int i = 0; i < M; i++){
        ll a,b;
        cin>>a>>b;
        st.insert({a,b});
    }
    // index, dirs - string, initial health, k
    if(dfs(0, st, H, K, 0, 0)) retYes
    retNo
}

int main() {
    solve();
    return 0;
}