#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define d long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)

void solve(){
    ll n, in;
    cin>>n>>in;
    // 1 is the parent of all
    vector<vector<ll>> list(n + 1);
    ll person = 2;
    fr(i, 0, n - 1) {
        ll parent;
        cin>>parent;
        list[parent].push_back(person++);
    }
    vector<ll> ins(n + 1);
    fr(i, 0, in){
        ll p, insurance;
        cin>>p>>insurance;
        ins[p] = max(ins[p], insurance + 1);
    }
    queue<pair<int,int>> q;
    q.push({1, ins[1]});
    
    ll res = 0;
    
    while(!q.empty()){
        ll s = q.size();
        fr(k, 0, s){
            auto p = q.front();
            q.pop();
            
            ll curr = p.first, insurance = p.second;
            insurance = max(insurance, ins[p.first]);
			// cout<<curr<<" "<<insurance<<endl;
            if(insurance > 0){
            	res++;
            }
            
            for(auto &it : list[curr]){
                q.push({it, insurance - 1});
            }
        }
    }
    
    ret(res)
}

int main(){
    ll t = 1;
    while(t--) solve();
    return 0;
}
