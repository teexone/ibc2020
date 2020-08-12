#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <bitset>
/*#if !defined(ONLINE_JUDGE)
#include "prettyprint.hpp"
#endif*/
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef long double ld;

#define all(x) x.begin(), x.end()
#define pi 3.14159265358979323846
#define testcases(f) int _q = 0; if(f) cin >> _q; while(_q--)


template<class Container> istream& operator>> (istream &in, vector<Container> &c) {for(auto &x :c) in >> x; return in; }
template<class A, class B> istream& operator>> (istream &in, pair<A, B> &c) {in >> c.first >> c.second; return in; }
template<class Container> ll gcd(Container &a) { auto g = *a.begin(); for(auto &x : a) g = __gcd(g, x); return g; }
template<typename T> T Min(const T &a){ return a; }
template<typename T, typename ...Args> T Min(const T &a, const Args&... args) { T b = Min(args...); return (a < b ? a : b);}
template<typename T> T Max(const T &a) { return a; }
template<typename T, typename ...Args> T Max(const T &a, const Args&... args) { T b = Max(args...); return (a > b ? a : b); }
template<typename T> T gcd(const T &a){ return a; }

vector<vector<int>> permutations;
void fill_permutations(vector<int> a, int i, int n) {
    if(i == n)
        permutations.push_back(a);
    else {
        for (int j = i; j < n; j++)
        {
            swap(a[i], a[j]);
            fill_permutations(a, i + 1, n);
            swap(a[i], a[j]);
        }
    }
}
int main() {
  int n;
  cin >> n;
  vector<vector<int>> d(n, vector<int>(n, 0));
  cin >> d;
  vector<int> a(n);
  for(int i = 0; i < n; i++) a[i] = i;
  fill_permutations(a, 0, n);
  int ans = INT_MAX;
  for(auto x: permutations) {
      int cans = 0;
      for(int i = 1; i < x.size(); i++)
          cans += d[x[i - 1]][x[i]];
      cans += d[x.back()][x[0]];
      ans = min(ans, cans);
  } cout << ans;

}