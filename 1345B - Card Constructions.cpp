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

int cards_needed(int h) { return (3 * h * h + h) / 2; }

// Function to compute the number of pyramids that can be constructed
int count_pyramids(int n) {
  int count = 0;
  while (n >= 2) { // Minimum cards required for height 1 is 2
    int h = 1;
    // Find the maximum height pyramid that can be built
    while (cards_needed(h + 1) <= n) {
      h++;
    }
    // Deduct the cards for the pyramid of height h
    n -= cards_needed(h);
    count++;
  }
  return count;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << count_pyramids(n) << endl;
  }
  return 0;
}