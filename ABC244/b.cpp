#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll n,x=0,y=0;
  string t;
  cin >> n >>t ;
  vector<string> dir = {"east","souse","west","nourse"};
  ll j = 0;

  rep(i,n){
    
    if(t.at(i) == 'S'){
      if(dir.at(j) == "east")
        x++;
      else if(dir.at(j) == "souse")
        y--;
      else if(dir.at(j) == "west")
        x--;
      else if(dir.at(j) == "nourse")
        y++;
    }else if(t.at(i) == 'R'){
        if(j == 3)
          j = 0;
        else
          j++;
        
    }else{
      cout <<"エラー"<< endl;
    }
  }
  cout << x << ' '<< y <<endl;
}
