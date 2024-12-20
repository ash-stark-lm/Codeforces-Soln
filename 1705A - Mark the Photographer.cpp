#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;
    int m = 2 * n;

    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      a[i] = arr[i];
    }
    for (int i = n; i < m; i++) {
      b[i - n] = arr[i];
    }

    bool possible = true;
    int i = 0, j = 0;

    while (i < n && j < n) {
      if (b[j] - a[i] < x) {
        possible = false;
        break;
      }
      i++;
      j++;
    }

    cout << (possible ? "YES" : "NO") << endl;
  }

  return 0;
}