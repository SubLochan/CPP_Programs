#include <iostream>
#include <vector> // used for Vector methods like size(),push_back(),back()
#include <algorithm> // used for sort method
#include <cmath> // used for sqrt method
using namespace std;
using ll = long long;

ll cross(const pair<ll,ll>& o,
         const pair<ll,ll>& a,
         const pair<ll,ll>& b) {
    // (a - o) x (b - o)
    return (a.first - o.first) * (b.second - o.second)
         - (a.second - o.second) * (b.first - o.first);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<pair<ll,ll>> pts(N);
    for (int i = 0; i < N; i++) {
        cin >> pts[i].first >> pts[i].second;
    }

    // Sort by x, then y
    sort(pts.begin(), pts.end());

    // Build the Bowl
    vector<pair<ll,ll>> lower;
    for (auto& p : pts) {
        while (lower.size() >= 2 &&
               cross(lower[lower.size()-2], lower.back(), p) <= 0) {
            lower.pop_back();
        }
        lower.push_back(p);
    }

    // Sum distances along the lower hull
    double perim = 0.0;
    for (int i = 1; i < (int)lower.size(); i++) {
        ll dx = lower[i].first  - lower[i-1].first;
        ll dy = lower[i].second - lower[i-1].second;
        perim += sqrt(double(dx*dx + dy*dy));
    }

    // Round half-up and output
    int answer = int(perim + 0.5);
    cout << answer << "\n";
    return 0;
}