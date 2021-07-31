#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

int main(){
    ll cnt=0;
    bool flag;
    string x;
    
    cin >> x;
    if(x.at(0)==x.at(1) && x.at(1) == x.at(2) && x.at(2) == x.at(3))flag=true;
    else {
        rep(i,3){
            int buf1,buf2;
            if(x.at(i) == '9' && x.at(i+1) == '0') buf1 = -1;
            else buf1 = ctoi(x.at(i));
            buf2 = ctoi(x.at(i+1));
            if(buf1+1 == buf2)cnt++;
        }
    }

    if(cnt == 3) flag=true;

    if(flag==true)cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}
   