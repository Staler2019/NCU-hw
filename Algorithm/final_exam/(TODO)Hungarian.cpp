/**********************
 *Author: Staler2019  *
 *Problem:            *
 *Time:               *
 **********************/

/* 常用設定 -------------------------------------- */
#define SCHOOL

#ifndef SCHOOL // Using TDM-GCC
#include <immintrin.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <string_view>
#include <thread>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#else
#include <bits/stdc++.h>
#endif // SCHOOL
using namespace std;

namespace PP // Self-defined namespace
{
#pragma GCC optimize("Ofast")

using namespace std;

#define _CRT_SECURE_NO_WARNINGS
/* 自定義名詞 ------------------------------------ */
#define Be return
#define AC 0
#define UNTIE_IO cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(0)
#define CASE                                                                                                           \
    int _C;                                                                                                            \
    cin >> _C;                                                                                                         \
    for (int CC = 1; CC < _C + 1; CC++)
#define all(a) std::begin(a), std::end(a)
#define sum(a) (accumulate(all(a), 0ll))
#define mine(a) (*min_element(all(a)))
#define maxe(a) (*max_element(all(a)))
#define mini(a) (min_element(all(a)) - (a).begin())
#define maxi(a) (max_element(all(a)) - (a).begin())
#define lowb(a, x) (lower_bound(all(a), (x)) - (a).begin())
#define uppb(a, x) (upper_bound(all(a), (x)) - (a).begin())
#define autoit(container)                                                                                              \
    auto it = container.begin();                                                                                       \
    it != container.end();                                                                                             \
    it++
#define autorit(container)                                                                                             \
    auto it = container.rbegin();                                                                                      \
    it != container.rend();                                                                                            \
    it++
/* 自定義屬性 ------------------------------------ */
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define st first
#define nd second
#define endl '\n'
/* 自定義模板------------------------------------- */
#define TT1 template <class T>
#define TT1T2 template <class T1, class T2>
// begin template base

/*- FOR-LOOP -*/
#define FIA(a) for (auto &i : a)
#define FJA(a) for (auto &j : a)
#define FI(a) for (std::size_t i = 0; i < a; i++)
#define FJ(a) for (std::size_t j = 0; j < a; j++)
#define FK(a) for (std::size_t k = 0; k < a; k++)
/*- PAIR -*/
#define PT1T2 pair<T1, T2>
// OPERATOR
TT1T2 inline PT1T2 operator+(const PT1T2 &p1, const PT1T2 &p2)
{
    return PT1T2(p1.first + p2.first, p1.second + p2.second);
}
TT1T2 inline PT1T2 &operator+=(PT1T2 &p1, const PT1T2 &p2)
{
    p1.first += p2.first, p1.second += p2.second;
    return p1;
}
TT1T2 inline PT1T2 operator-(const PT1T2 &p1, const PT1T2 &p2)
{
    return PT1T2(p1.first - p2.first, p1.second - p2.second);
}
TT1T2 inline PT1T2 &operator-=(PT1T2 &p1, const PT1T2 &p2)
{
    p1.first -= p2.first, p1.second -= p2.second;
    return p1;
}
// IO
TT1T2 inline istream &operator>>(istream &is, PT1T2 &p)
{
    is >> p.first >> p.second;
    return is;
}
TT1T2 inline ostream &operator<<(ostream &os, const PT1T2 &p)
{
    os << p.first << p.second;
    return os;
}
#undef PT1T2 // pair<T1, T2>
/*- VECTOR -*/
#define VT1 vector<T>
// OPERATOR
TT1 inline VT1 &operator--(VT1 &v)
{
    FIA(v)
    i--;
    return v;
}
TT1 inline VT1 &operator++(VT1 &v)
{
    FIA(v)
    i++;
    return v;
}
TT1 inline VT1 &operator+(VT1 &v, const int n)
{
    v += n;
    return v;
}
TT1 inline VT1 &operator+=(VT1 &v, const int n)
{
    if (n == 1)
        return ++v;
    FIA(v)
    i += n;
    return v;
}
TT1 inline VT1 &operator-(VT1 &v, const int n)
{
    v += n;
    return v;
}
TT1 inline VT1 &operator-=(VT1 &v, const int n)
{
    if (n == 1)
        return --v;
    FIA(v)
    i *= n;
    return v;
}
TT1 inline VT1 &operator*(VT1 &v, const int n)
{
    v *= n;
    return v;
}
TT1 inline VT1 &operator*=(VT1 &v, const int n)
{
    if (n == 1)
        return v;
    FIA(v)
    i *= n;
    return v;
}
TT1 inline VT1 &operator/(VT1 &v, const int n)
{
    v /= n;
    return v;
}
TT1 inline VT1 &operator/=(VT1 &v, const int n)
{
    if (n == 1)
        return v;
    FIA(v)
    i /= n;
    return v;
}
// IO
TT1 inline istream &operator>>(istream &is, VT1 &v)
{
    FIA(v)
    is >> i;
    return is;
}
TT1 inline ostream &operator<<(ostream &os, const VT1 &v)
{
    FI(v.size())
    os << v[i] << " ";
    return os;
}
#undef VT1 // vector<T>

// end template base
#undef TT1
#undef TT1T2
/* 自定義型態 ------------------------------------ */
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
/* 自定義函式 ------------------------------------ */
#define isOdd(a) ((a & 1) ? true : false)
#define isDivided(a, b) ((a % b) ? false : true)
#define cer(args...) cerr << __PRETTY_FUNCTION__ << " - " << __LINE__ << "(" << #args << ") = " << args << endl
} // namespace PP

using namespace PP;

/* 程式碼 ---------------------------------------- */
/*- 定義 -*/
// #define STD_IN
// #define STD_OUT
// #define ERR_OUT
/*- 函式 -*/
int hungarian_max(vector<vector<int>> table)
{
    int n = table.size(), e = table[0].size();
    vector<int> ans(n);
    vector<int> escape_lr(e), escape_ud(n);

    table *= -1;

    // make zero: left-to-right
    for (vector<int> &vi : table) {
        vi -= mine(vi);
    }
    // mark each person's event
    vector<bool> check_lr(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < e; j++) {
            if (table[i][j] == 0) {
                check_lr[i] = true;
                break;
            }
        }
    }

    // cerr << table << endl;
}
/*- 主程式 -*/
int Solving()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> table(n, vector<int>(n));
    cin >> table;
    // cerr << table << endl;
    hungarian_max(table);

    Be AC; // End of code
}
int main()
{
    UNTIE_IO;
#ifdef STD_IN
    freopen("input.txt", "r", stdin);
#endif
#ifdef STD_OUT
    freopen("output.txt", "w", stdout);
#endif
#ifdef ERR_OUT
    freopen("output.log", "w", stderr);
#endif
    Be Solving();
}