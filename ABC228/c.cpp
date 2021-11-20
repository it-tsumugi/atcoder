#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i=0;i<n;++i)
typedef long long ll;


int main(){
    ll n,k;
    cin >> n >>k;
    vector<vector<ll>> p(n,vector<ll>(3));
    vector<ll> sum(n);
    rep(i,n){
        rep(j,3){
            cin >>p.at(i).at(j);
            sum.at(i) += p.at(i).at(j);
        }
    }
    vector<ll> maxP(n);
    rep(i,n){
        maxP.at(i) = sum.at(i) + 300;
    }

    sort(sum.begin(),sum.end(),[](int a,int b){
        return a > b;
    });

    rep(i,n){
        ll left = -1;
        ll right = n + 1;
        while (right - left > 1) {
            ll mid = left + (right - left) / 2;
            if (sum.at(mid) < maxP.at(i)) right = mid;
            else left = mid;
        }
        if(left +2 <= k)cout <<"Yes"<<endl;
        else cout <<"No"<<endl;
    }
    return 0;
}
