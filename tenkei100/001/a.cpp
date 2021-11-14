#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

ll n,l,k;
vector <ll> a(1 << 18);

//方針
//区切る区間が長さLなので、中央値を取って二分探索する
//前のピースからの距離と最後のピースの長さが中央値以上かつ切れ目の数がｋ個以上かを判定
//（切れ目の数がk個以上＝ピースの数がk+1個）
//条件を満たしたならば右へ、満たさなければ左へ再度二分探索
//分割するものの長さが１になったら終了。
//判定問題がO(n)、二分探索がO(log(n))、全体計算量はO(nlog(n))

bool solve(ll m) {
    ll cnt = 0, pre = 0;
		//計算量はO(n)
    rep(i,n){
			//前のピースからの距離と最後のピースの長さがm以上の時
        if (a.at(i) - pre >= m && l - a.at(i) >= m) {
					//切れ目の数のカウントを増やす
          cnt++;
					//前のピースまでの距離を更新
          pre = a.at(i);
        }
    }
		//ピースの数がk個以上であればtrue
    if (cnt >= k) return true;
    return false;
}

int main(){
	cin >> n >>l>>k;
	rep(i,n)cin >> a.at(i);

	ll left = -1;
  ll right = l + 1;
  while (right - left > 1) {
		//中央値の計算
    ll mid = left + (right - left) / 2;
    if (solve(mid) == false) right = mid;
    else left = mid;
  }
  cout << left << endl;
	return 0;	
}