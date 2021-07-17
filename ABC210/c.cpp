#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i=0;i<n;++i)
typedef long long ll;
#define SIZE 1000000000
int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> c(n);
    rep(i,n)cin >> c[i];
    vector<int> num(1000000000);
    queue<ll> P;
    ll cnt=0,tmp=0;
    rep(i,n){
        P.push(c[i]);
        num[c[i]-1]++;
        if(num[c[i]-1] == 1) cnt++;//数の測定
        if(i > k-2){
            num[P.front()-1]--;
            tmp = max(tmp,cnt);
            if(num[P.front()-1] == 0) cnt--;
            P.pop();
        }
    }

    cout << tmp << endl;
    return 0;
}
