#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
#define MAX 1000

int main(){
  ll n,num=0;
  cin >> n;
  vector <ll>s(n);
  rep(i,n)cin >> s.at(i);
  bool flag = false;

  rep(i,n){
    flag =false;
    for(int j =1;j<=MAX;j++){
      for(int k =1;k<=MAX;k++){
        if(s[i] == 4*j*k + 3*j +3*k){
          flag = true;
        }
      }
    }
    if(flag == false)num++;
  }
  cout << num <<endl;
  return 0;
}