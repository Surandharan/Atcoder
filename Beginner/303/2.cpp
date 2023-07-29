#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define retNo {cout<<"No"<<endl; return;}
#define retYes {cout<<"Yes"<<endl; return;}

struct HashVector {
    size_t operator()(const vector<int>& v) const {
        size_t seed = v.size();
        for (const int& i : v) {
            seed ^= i + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }
};

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<int>> v(m, vector<int>(n));
    for(auto &x : v){
        for(auto &i : x) cin>>i;
    }
    ll total = n * (n-1) / 2;
    unordered_set<vector<int>, HashVector> st;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n-1; j++){
            int a = v[i][j], b = v[i][j+1];
            if(a > b) swap(a,b);
            st.insert({a,b});
        }
    }
    cout<<total - st.size()<<endl;
}

int main() {
    solve();
    return 0;
}
