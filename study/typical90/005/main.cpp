#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

// MOD
constexpr int MOD = 1000000007;

// N の対数
constexpr int LOG = 62;

int main() {
    // 入力
    long long N, B, K;
    cin >> N >> B >> K;
    vector<int> C(K);
    for (auto& ci : C) cin >> ci;

    // dp[i] と dp[j] を掛け合わせて dp[i+j] を得る処理
    // tj: 10^j を B で割ったあまり
    auto mul = [&](const vector<long long>& dpi, const vector<long long>& dpj,
                   long long tj) -> vector<long long> {
        vector<long long> res(B, 0);
        for (long long p = 0; p < B; ++p) {
            for (long long q = 0; q < B; ++q) {
                res[(p * tj + q) % B] += dpi[p] * dpj[q];
                res[(p * tj + q) % B] %= MOD;
            }
        }
        return res;
    };

    // ten[i]: 10^(2^i) を B で割ったあまり
    vector<long long> ten(LOG, 10);
    for (int i = 1; i < LOG; ++i) {
        ten[i] = (ten[i - 1] * ten[i - 1]) % B;
    }

    // dp[2^i][r] を doubling[i][r] で書くことにする
    vector<vector<long long>> doubling(LOG, vector<long long>(B, 0));

    // 初期化 (doubleing[0] := dp[1])
    for (int k = 0; k < K; ++k) {
        doubling[0][C[k] % B] += 1;
    }

    // ダブリング
    for (int i = 1; i < LOG; ++i) {
        doubling[i] = mul(doubling[i - 1], doubling[i - 1], ten[i - 1]);
    }

    // ダブリングした結果をもとに答えを求める
    vector<long long> res(B, 0);
    res[0] = 1;
    for (int i = 0; i < LOG; ++i) {
        // N を二の冪乗の積で表すときに、2^i を含むかどうか
        if (N & (1LL << i)) {
            res = mul(res, doubling[i], ten[i]);
        }
    }
    cout << res[0] << endl;
}

// bool check(ll num, vector<int> list) {
//     int d = num % 10;
//     auto it = std::find(list.begin(), list.end(), d);
//     if (it != list.end()) {
//         if (num / 10 == 0) return true;
//         check(num / 10, list);
//     }
//     else return false;
// }

// int main() {
//     ll n; int b, k;
//     cin >> n >> b >> k;

//     vector<int> c(k);

//     rep (i, k) cin >> c[i];

//     ll min = pow(10, n - 1) / b + 1;
//     ll max = pow(10, n) / b;

//     cout << min << '~' << max << endl;

//     int cnt = 0;

//     for (ll i = min; i <= max; ++i) {

//         bool is_valid = check(min * b, c);
//         if (is_valid == true) cnt++;
//     }

//     cout << cnt << endl;

//     return 0;
// }

// --------------------------------
// Reference
// --------------------------------
// #DP/動的計画法 #繰り返し二乗法 #ダブリング
// 与えられた数字から整数を作る、その整数がある数の倍数になる、という問題ではDPで考えてみる！
