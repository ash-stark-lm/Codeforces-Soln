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
  int n;
  cin >> n;
  vector<int> k(n); // Stores number of people in each queue
  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }

  vector<vector<int>> products(n); // Stores product counts for each queue

  for (int i = 0; i < n; i++) {
    products[i].resize(k[i]); // Resize to fit k-i people
    for (int j = 0; j < k[i]; j++) {
      cin >>
          products[i][j]; // Read the product count of j-th person in i-th queue
    }
  }

  int min_time = INT_MAX;
  for (int i = 0; i < n; i++) {
    int time = 0;
    for (int j = 0; j < k[i]; j++) {
      time += products[i][j] * 5;
    }
    time += k[i] * 15;
    min_time = min(min_time, time);
  }
  cout << min_time << endl;

  return 0;
}