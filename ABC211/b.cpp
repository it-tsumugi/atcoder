#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    int cnt = 0;
    vector<string> s(4);
    rep(i,4)cin >> s.at(i);

    rep(i,4){
        if(s.at(i) == "H")cnt++;
        else if(s.at(i) == "2B")cnt+=2;
        else if(s.at(i) == "3B")cnt+=3;
        else if(s.at(i) == "HR")cnt+=4;
    }    
    if(cnt == 10)cout << "Yes" <<endl;
    else cout << "No" <<endl;
    return 0;
}
   