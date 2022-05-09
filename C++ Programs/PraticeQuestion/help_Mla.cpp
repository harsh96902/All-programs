#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vll vector<long long>
using   pi = pair<int, int>;
// #define mp make_pair
#define fi first
#define se second
using   vi = vector<int>;
using   vvi = vector<vector<int>>;
using   vb = vector<bool>;
using   vs = vector<string>;
using   vpi = vector<pi>;
using   ump = unordered_map<int, int>;
using   mapi = map<int, int>;
#define sz(x) x.size()
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define raint(x) x.rbegin(), x.rend()
//  #define reverse(x) reverse(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define fr(i,a,b) for(int i = (a); i < (b); ++i)
#define rf(i,b,a) for(int i = (b)-1; i >= (a); --i)
#define eachi(x,a) for(auto &x: a)
#define eacho(x,a) for(auto x: a)
#define ci(X)               int X; cin>>X;
#define cii(X, Y)           int X, Y; cin>>X>>Y;
#define ciii(X, Y, Z)       int X, Y, Z; cin>>X>>Y>>Z;
#define ciiii(W, X, Y, Z)   int W, X, Y, Z; cin>>W>>X>>Y>>Z;
#define maxelement(x) *std::max_element((x).begin(), (x).end())
#define maxeleindex(x) std::max_element((x).begin(),(x).end())-(x).begin()
#define minelement(x) *std::min_element((x).begin(), (x).end())
#define mineleindex(x) std::min_element((x).begin(),(x).end())-(x).begin()


int sum1 = 0, sum2 = 0;
void solve()
{
  ciii(m1, m2, n);
  vector<int> v(n);
  eachi(x, v)cin >> x;

  sort(all(v));

  for (int i = n - 1; i >= 0; i--) {
    int f = sum1 - sum2;
    int g = sum2 - sum1;
    if (abs(m1 * v[i] + f) < abs(m2 * v[i] + g)) {

      sum1 += m1 * v[i];
    }

    else {

      sum2 += m2 * v[i];
    }

  }
  cout << max(sum1, sum2);

}



signed main()
{
  /*#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
  #endif*/
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test_cases = 1;
//   cin >> test_cases;
  while (test_cases--)
  {
    solve();
  }
  return 0;

}
//for binary search , use lb(all(v),x)-v.begin() to find the position of index


////////////////// SET or UNORDERED_SET///////////
/*
find() // to find particular value in logn
erase("only iterator or value")//to remove particular element in set
count("value") // to find occurence of particular number
 */
//Insert in unordered set takes 0(1) and finding particular element also takes o(1)


//////// MULTISET ////////
/*insert() //takes logn time
find() //takes log(n) time*/
//also allows multiple same values in multiset