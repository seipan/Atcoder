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
    ll H = in_ll();
    ll W = in_ll();

    vector<string> S(H);
    for(ll i=0;i<H;i++) cin >> S[i];

    vector<vector<int>> data(H, vector<int>(W,0));

    for(ll i=0;i<H;i++){
        for(ll j=0;j<W;j++){
            bool flag = true;
            if(S[i].at(j) == '#'){
                flag = false;
                if(i+1 < H && S[i+1].at(j) == '#') flag = true;
                if(i -1 >=0 && S[i-1].at(j) == '#')flag = true;
                if(j+1 < W && S[i].at(j+1) == '#')flag = true;
                if(j-1 >= 0 && S[i].at(j-1) == '#')flag = true;

            }
            if(!flag){
                cout << i+1 << " "<< j+1 << endl;
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}