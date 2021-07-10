#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    ll n,x; 
    cin >> n >> x;
    ll a[n];
    rep(i,n)cin >> a[i];


    rep(i,n){
        if((i+1)%2 == 0){//偶数番目の時
            x -= a[i]-1;
        }
        else{
            x -= a[i];
        }
        if(x < 0) break;
    }
    if(x >= 0) cout << "Yes"<<endl;
    else cout << "No"<<endl;
}
