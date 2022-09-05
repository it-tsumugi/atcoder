#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll l1,l2,r1,r2,ans=0;
	cin >> l1 >> r1 >> l2 >> r2;
  vector<ll> arr(100);

  rep(i,100){
    if(l1 <= i && i <= r1)
      arr[i] +=1;
    if(l2 <= i && i <= r2)
      arr[i] +=1;
  }
  rep(i,100){
    if(arr[i] == 2) ans++;
  }

  if(ans != 0)cout << ans -1<< endl;
  else cout << ans << endl;
}
