#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define int long long
#define vi(n) vector<int> v(n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> mint(n);
    vector<string> s(n);

    for (int i = 0; i < n; i++) {
      int m;
      string str;
      cin >> m >> str;
      mint[i] = m;
      s[i] = str;
    }
    int minboth = LLONG_MAX;
    int min_skill1 = LLONG_MAX, min_skill2 = LLONG_MAX;

    for (int i = 0; i < n; i++) {

      if (s[i] == "11") {
        minboth = min(minboth, mint[i]);
      } else if (s[i] == "10") {
        min_skill1 = min(min_skill1, mint[i]);
      } else if (s[i] == "01") {
        min_skill2 = min(min_skill2, mint[i]);
      }
    }

    int minpossible = max(min_skill1, min_skill2);
    if (minpossible == LLONG_MAX && minboth == LLONG_MAX) {
      cout << -1 << endl;
    } else if (minpossible == LLONG_MAX) {
      cout << minboth << endl;
    } else {
      cout << min(minboth, min_skill1 + min_skill2) << endl;
    }
  }

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int min_both = LLONG_MAX, min_skill1 = LLONG_MAX, min_skill2 = LLONG_MAX;

    for (int i = 0; i < n; i++) {
      int m;
      string s;
      cin >> m >> s;

      if (s == "11") {
        min_both = min(min_both, m);    // Single book providing both skills
      } else if (s == "10") {
        min_skill1 = min(min_skill1, m); // Book providing only skill 1
      } else if (s == "01") {
        min_skill2 = min(min_skill2, m); // Book providing only skill 2
      }
    }

    // Check the minimum cost among all valid cases
    int combined = (min_skill1 == LLONG_MAX || min_skill2 == LLONG_MAX) ?
LLONG_MAX : min_skill1 + min_skill2; int result = min(min_both, combined);

    // Output result
    cout << (result == LLONG_MAX ? -1 : result) << "\n";
  }

  return 0;
}
*/