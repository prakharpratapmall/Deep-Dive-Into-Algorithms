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
    lli n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << " " << 0 << " " << 1;
        return 0;
    }
    if (n == 0)
    {
        cout << 0 << " " << 0 << " " << 0;
        return 0;
    }
    lli a = 0, b = 1, i = 0, j = 1;
    while (b + a != n)
    {
        b = b + a;
        a = b - a;
    }
    while (i + j != a)
    {
        j = j + i;
        i = j - i;
    }
    cout << i << " " << j << " " << b;
    return 0;
}