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

int timeDifference(int currentTime, int alarmTime) {
  int diff = (alarmTime - currentTime + 1440) % 1440;
  return diff;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, h, m;
    cin >> n >> h >> m;

    int bedtime = h * 60 + m; // Bedtime in total minutes
    int minTime = 1440;       // Maximum possible time difference (1 day)

    for (int i = 0; i < n; ++i) {
      int H, M;
      cin >> H >> M;

      int alarmTime = H * 60 + M; // Alarm time in total minutes
      minTime = min(minTime, timeDifference(bedtime, alarmTime));
    }

    // Convert the minimum time difference back to hours and minutes
    int sleepHours = minTime / 60;
    int sleepMinutes = minTime % 60;

    cout << sleepHours << " " << sleepMinutes << endl;
  }

  return 0;
}