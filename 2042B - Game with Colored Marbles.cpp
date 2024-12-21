#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    inputarr(arr, n);

    unordered_map<int, int> mp;
    for (auto &x : arr) {
      mp[x]++;
    }
    int total = mp.size();
    int single_value = 0;
    for (auto &x : mp) {
      if (x.second == 1) {
        single_value++;
      }
    }

    int alice_score = total + ((single_value + 1) / 2) - (single_value) / 2;
    cout << alice_score << endl;
  }
  return 0;
}
