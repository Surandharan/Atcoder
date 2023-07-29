#include<bits/stdc++.h>
using namespace std;

#define pb emplace_back
#define in insert
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define per(i,a,b) for(ll i=a;i>=b;i--)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define sz(x) (lli)(x).size()
#define fin(o,a) (o).find(a)!=(o).end()
#define retYes {cout<<"Yes"<<endl;return;}
#define retNo {cout<<"No"<<endl;return;}
#define retYES {cout<<"YES"<<endl;return;}
#define retNO {cout<<"NO"<<endl;return;}

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
typedef vector<pi> vii;
typedef vector<vi> graph;
ll mod=10000000007;

template <class S,class T> ostream& operator <<(ostream& os, const pair<S,T>&p) {return os <<"(" << p.first << "," << p.second << ")";}
template <class S> ostream& operator <<(ostream& os, const vector<S>&p) {os<<"[ "; for(auto &it:p) os<<it<<" "; return os<<"]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}


void solve(){
    int n,target;
    cin>>n>>target;
    vector<int> v(n);
    fr(i,n) cin>>v[i];
    unordered_multiset<int>st(all(v));
    fr(i,n){
        if(st.count(v[i]+target)) retYes;
    }
    retNo;
}

void solve2(){
    solve();
}

void solve1(){
    int t;
    cin>>t;
    while(t--) solve();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //solve1();
    solve2();
    return 0;
}

