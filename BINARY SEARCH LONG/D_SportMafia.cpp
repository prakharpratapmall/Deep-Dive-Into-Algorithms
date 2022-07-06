#include <bits/stdc++.h>
#include <list>
using namespace std;
#define cases()       \
    int test_case;    \
    cin >> test_case; \
    while (test_case--)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define VI vector<int>
#define PB push_back
#define lli long long int
#define d 1000000007
int main()
{
    lli n, k;
    cin >> n >> k;
    lli a = (sqrt(9 + 8 * (n + k)) - 3) / 2;
    cout << n - a;
    return 0;
}