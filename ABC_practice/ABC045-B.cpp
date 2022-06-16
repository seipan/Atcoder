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
    vector<string> S(3);
    for(ll i=0;i<3;i++) cin >> S[i];

    vector<ll> A(3,0);
    //for(ll i=0;i<3;i++) A[i] = S[i].length();

    deque<ll> deq;
    deq.push_back(0);



    while(1){
        ll next  = deq.front();
        deq.pop_front();
        ll T = S[next].size();
        if(A[next] == T){
            if(next == 0){
                cout << 'A' << endl;
            }
            if(next == 1){
                cout << 'B' << endl;
            }
            if(next == 2){
                cout << 'C' << endl;
            }
            return 0;
        }
        ll res = S[next].at(A[next])-'a';
        deq.push_back(res);
        A[next]++;
        
        
    }
}