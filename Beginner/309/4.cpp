#include<bits/stdc++.h>
using namespace std;

#define INF LLONG_MAX
#define ll long long
#define d long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)

ll findLongestDistance(ll node, vector<vector<ll>>& list) {
    ll n = list.size();
    vector<ll> dist(n, -1);
    dist[node] = 0;

    queue<ll> q;
    q.push(node);

    while (!q.empty()) {
        ll u = q.front();
        q.pop();

        for (ll v : list[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    ll maxDistance = -1;
    for (ll i = 0; i < n; i++) {
        if (dist[i] > maxDistance) {
            maxDistance = dist[i];
        }
    }

    return maxDistance;
}


void solve(){
    ll n1, n2, m;
    cin>>n1>>n2>>m;
    
    vector<vector<ll>> list1(n1 + 1), list2(n1 + n2 + 1), edges(m);
    
    fr(i, 0, m){
        ll a, b;
        cin>>a>>b;
        if(a <= n1){
            list1[a].push_back(b);
            list1[b].push_back(a);
        }
        else{
            list2[a].push_back(b);
            list2[b].push_back(a);
        }
    }
    
    ll a = findLongestDistance(1, list1);
    ll b = findLongestDistance(n1 + n2, list2);
    
    ret(a + b + 1)
    
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}
