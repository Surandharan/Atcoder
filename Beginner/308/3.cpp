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

struct Person {
    ll index;
    ll heads;
    ll tails;
};

bool compare(const Person& p1, const Person& p2) {
    ll rate1 = p1.heads * (p2.heads + p2.tails);
    ll rate2 = p2.heads * (p1.heads + p1.tails);

    if (rate1 == rate2)
        return p1.index < p2.index;

    return rate1 > rate2;
}

void solve(){
    ll n;
    cin>>n;
    vector<Person> v(n);
    fr(i, 0, n) {
        cin>>v[i].heads;
        cin>>v[i].tails;
        v[i].index = i + 1;
    }
    sort(begin(v), end(v), compare);
    fr(i, 0, n) cout<<v[i].index<<" ";
    cout<<endl;
}

int main(){
    ll t;
    t = 1;
    while(t--) solve();
    return 0;
}

