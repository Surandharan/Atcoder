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

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
typedef vector<pi> vii;
typedef vector<vi> graph;
ll mod=998244353;

template <class S,class T> ostream& operator <<(ostream& os, const pair<S,T>&p) {return os <<"(" << p.first << "," << p.second << ")";}
template <class S> ostream& operator <<(ostream& os, const vector<S>&p) {os<<"[ "; for(auto &it:p) os<<it<<" "; return os<<"]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool met = false;
    fr(i, s.length()){
        if(s[i] == '|') met = !met;
        else if(s[i] == '*'){
            if(met){
                cout<<"in";
            }
            else cout<<"out";
            return;
        }
    }
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

