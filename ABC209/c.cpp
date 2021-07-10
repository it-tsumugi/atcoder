#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i=0;i<n;++i)
typedef long long ll;

int main(){
    ll n,ans;
    ll cnt=1;
    cin >> n;
    vector<int> c(n);
    rep(i,n)cin >> c[i];

    //昇順にしないと場合の数が小さいやつが無くなる可能性があるので注意
    sort(c.begin(),c.end());
    rep(i,n){
        cnt *= (c[i] - i);
        if(cnt >= 1000000007)cnt %= 1000000007;
    }
    cout << cnt << endl;
}