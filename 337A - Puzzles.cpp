#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> arr(m);
  inputarr(arr, m);

  sort(arr.begin(), arr.end());

  int i = 0, j = n - 1;
  int minDiff = INT_MAX;
  while (i < m && j < m) {
    int diff = arr[j] - arr[i];
    minDiff = min(minDiff, diff);
    i++;
    j++;
  }
  cout << minDiff << endl;
  return 0;
}
