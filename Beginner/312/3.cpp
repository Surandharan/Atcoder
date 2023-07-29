#include<bits/stdc++.h>
using namespace std;

#define ll long long
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
#define vvvi vector<vvi>
#define vp vector<pair<ll,ll>>
#define vs vector<string> 
#define vc vector<char>
#define vvc vector<vc>

const ll MOD = 1e9 + 7;

bool check(vvc &v, ll i, ll j){
        ll fl = 0;
        fr(k, i + 0, i + 3){
            fr(l, j + 0, j + 3){
                if(v[k][l] == '.') return false;
            }
        }
        fr(k, i + 6, i + 9){
            fr(l, j + 6, j + 9){
                if(v[k][l] == '.') return false;
            }
        }
        fr(k, j + 0, j + 4){
            if(v[i + 3][k] == '#') return false;
        }
        fr(k, i + 0, i + 4){
            if(v[k][j + 3] == '#') return false;
        }
        fr(k, j + 5, j + 9){
            if(v[i + 5][k] == '#') return false;
        }
        fr(k, i + 5, i + 9){
            if(v[k][j + 5] == '#') return false;
        }
        return true;
}

void solve(){
    ll n, m;
    cin>>n>>m;
    vvc v(n, vc(m));
    fr(i, 0, n) fr(j, 0, m) cin>>v[i][j];
    
    fr(i, 0, n - 8){
        fr(j, 0, m - 8){
            if(check(v, i, j)) cout<<i + 1<<" "<<j + 1<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    t = 1;
    for(int i = 1; i <= t; i++){
        solve();
    }
    return 0;
}
