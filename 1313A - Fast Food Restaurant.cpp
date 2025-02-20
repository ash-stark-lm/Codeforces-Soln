#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int max_visitors(int a, int b, int c) {
  // Sort a, b, c to make sure a >= b >= c
  vector<int> dishes = {a, b, c};
  sort(dishes.rbegin(), dishes.rend());
  a = dishes[0];
  b = dishes[1];
  c = dishes[2];

  int count = 0;

  // first Serve sets of one item
  if (a > 0) {
    count++;
    a--;
  }
  if (b > 0) {
    count++;
    b--;
  }
  if (c > 0) {
    count++;
    c--;
  }
  // Sthen serve sets of two items
  if (a > 0 && b > 0) {
    count++;
    a--;
    b--;
  }
  if (a > 0 && c > 0) {
    count++;
    a--;
    c--;
  }
  if (b > 0 && c > 0) {
    count++;
    b--;
    c--;
  }
  // at last Serve sets of three items
  if (a > 0 && b > 0 && c > 0) {
    count++;
    a--;
    b--;
    c--;
  }

  return count;
}
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    cout << max_visitors(a, b, c) << endl;
  }
  return 0;
}
