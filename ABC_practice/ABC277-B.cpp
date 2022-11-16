#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
typedef long long ll;
typedef long double ld;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

const double PI  = acos(-1);

#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

inline ll in_ll() {ll x; cin >> x; return x;}
inline double in_double() {{double x; cin >> x; return x;}}
inline string in_str() {string x; cin >> x; return x;}
inline int ctoi(char c) {return c - '0';}

template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}

using Graph = vector<vector<int>>;

//高速累乗
ll powpow(ll x, ll n) {
  if (n == 0) return 1;
  ll val = powpow(x, n / 2);
  val *= val;
  if (n % 2 == 1) val *= x;
  return val;
}

const ld eps = 1.0e-18;
//精度のいいsqrt
ld mysqrtl(ld x)
{
  ld a = sqrt((double)x); 
  do {
    a = (a + x/a) / 2.0L;
  } while (fabsl(x - a*a) > eps);
  return a;
}


int main(){
    ll N = in_ll();
    vector<string> S(N);
    for(ll i=0;i<N;i++) cin >> S[i];

    map<string,int> mp;

    for(ll i=0;i<N;i++){
        bool flag = false;
        char t = S[i].at(0);
        char p = S[i].at(1);

        if(t != 'H' &&t != 'D' &&t != 'C' &&t != 'S'){
            flag = true;
        }
        if(p != 'A' &&p != '2' &&p != '3' &&p != '4' && p != '5' &&p != '6' &&p != '7' &&p != '8' &&p != '9' && p != 'T' &&p != 'J' &&p != 'Q' && p != 'K'){
            flag = true;
        }
        if(mp[S[i]]) flag = true;
        mp[S[i]]++;
        if(flag){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}