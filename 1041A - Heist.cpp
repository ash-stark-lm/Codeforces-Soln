
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  int n;
  cin >> n;

  vector<int> arr(n);
  inputarr(arr, n);
  sort(arr.begin(), arr.end());
  int diff = arr[n - 1] - arr[0];
  int size = n;
  cout << diff - size + 1 << endl;

  return 0;
}