#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N, K;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N >> K;
  auto Q = queue<ll>{};
  for (auto i = 1; i <= N; ++i) {
    Q.push(i);
  }

  ll ct = N;
  while (K <= ct) {
    auto f = Q.front();
    Q.pop();

    for (auto i = 1; i < K; ++i) {
      Q.pop();
    }

    Q.push(f);

    ct -= K - 1;
  }

  cout << Q.front();

  return 0;
}