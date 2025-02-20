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
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<string> grades(n);
  for (int i = 0; i < n; i++) {
    cin >> grades[i];
  }

  vector<bool> successful(n, false); // Track successful students

  // Iterate over each subject
  for (int j = 0; j < m; j++) {
    char maxMark = '0';

    // Find the max mark in this subject
    for (int i = 0; i < n; i++) {
      maxMark = max(maxMark, grades[i][j]);
    }

    // Mark students who have the highest mark in this subject
    for (int i = 0; i < n; i++) {
      if (grades[i][j] == maxMark) {
        successful[i] = true;
      }
    }
  }

  // Count successful students
  int cnt = count(successful.begin(), successful.end(), true);
  cout << cnt << endl;

  return 0;
}