#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define retNo {cout<<"No"<<endl; return;}
#define retYes {cout<<"Yes"<<endl; return;}

bool check(char a, char b){
    if(a == b) return 1;
    if(a == '1' and b == 'l' or a == 'l' and b == '1') return 1;
    if(a == '0' and b == 'o' or a == 'o' and b == '0') return 1;
    return 0;
}

void solve(){
    ll n;
    string a,b;
    cin>>n>>a>>b;
    for(int i = 0; i < n; i++){
        if(check(a[i], b[i]) == 0) retNo
    }
    retYes
}

int main() {
    solve();
    return 0;
}