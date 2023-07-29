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
#define vp vector<pair<ll,ll>>
#define vs vector<string> 
#define vc vector<char>
#define vvc vector<vc>

const ll MOD = 1e9 + 7;

vi curr;

void print(vi &tmp){
    fr(i, 0, tmp.size()) cout<<tmp[i] + 1<<" ";
    cout<<endl;
}

ll dfs(ll node, vi &v){
    ll slow = node, fast = node;
    
    do {
        slow = v[slow];
        fast = v[v[fast]];
    } while (slow != fast);

    fast = node;
    while (slow != fast) {
        slow = v[slow];
        fast = v[fast];
    }

    curr.push_back(slow);
    ll start = v[slow];
    while (start != slow) {
        curr.push_back(start);
        start = v[start];
    }

    return curr.size();
}

void solve(){
    ll n;
    cin>>n;
    vi v(n);
    fr(i, 0, n) {
        cin>>v[i];
        v[i]--;
    }
    curr.clear();
    ll cycleSize = 0;

    fr(i, 0, n){
        if(curr.size() == 0){
            cycleSize = dfs(i, v);
        }
    }

    if(cycleSize){
        cout<<cycleSize<<endl;
        print(curr);
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
