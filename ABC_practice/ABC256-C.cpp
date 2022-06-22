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
    ll h[3];
    ll w[3];
    for(ll i=0;i<3;i++) cin >> h[i];
    for(ll i=0;i<3;i++) cin >> w[i];

    ll ans = 0;
    
    for(ll i=1;i<=28;i++){
      for(ll j=1;j<=28;j++){
        for(ll k=1;k<=28;k++){
          for(ll t=1;t<=28;t++){
            ll h_1 = h[0] - i - j;
            ll h_2 = h[1] - k - t;

            ll w_1 = w[0] - i - k;
            ll w_2 = w[1] - j - t;

            ll res1 = h[2] - w_1 - w_2;
            ll res2 = w[2] - h_1 - h_2;
            if(h_1<=0 || h_2<=0 || w_1<=0 || w_2<=0 || res1 <=0 || res2<=0) continue;
            if(res1 == res2) ans++;
          }
        }
      }
    }

    cout << ans << endl;
}