#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define fr(i,a,b) for(int i=a;i<b;i++)
#define all(v) v.begin(),v.end()

vvi rotate(vvi b){
    vvi a=b;
    int n=a.size();
    fr(i,0,n) reverse(all(a[i]));
    fr(i,0,n){
        fr(j,0,i){
            swap(a[i][j],a[j][i]);
        }
    }
    return a;
}

bool check(vvi &a, vvi &b){
    int n=a.size(),m=a[0].size();
    fr(i,0,n){
        fr(j,0,m){
            if(a[i][j] and !b[i][j]) return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vvi a(n,vi(n)),b(n,vi(n));
    fr(i,0,n){
        fr(j,0,n){
            cin>>a[i][j];
        }
    }
    fr(i,0,n){
        fr(j,0,n){
            cin>>b[i][j];
        }
    }
    fr(i,0,4){
        if(check(a,b)){
            cout<<"Yes"<<endl;
            return 0;
        }
        a=rotate(a);
    }
    cout<<"No"<<endl;
    return 0;
}
