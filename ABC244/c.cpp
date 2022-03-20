#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll n,output=1,input;
  cin >> n;
  //1から２N+1以下なので２N+２個
  //0番目が１
  vector<int> memory(2*n+2);

  //2n+2個の数字があるのでn+1回のやり取りが行われる
  rep(i,n+1){
    if(output >= 1 && output <= 2*n +1 ){
      memory.at(output-1) = 1;
      cout << output << flush;
    }
    else
      cout <<"エラー" << flush;
    cin >> input ;
    if(input == 0) return 0;
    memory.at(input-1) = 1;
    ll j=0;
    while(memory.at(j) != 0)j++;
    output = j +1;
  }
}
