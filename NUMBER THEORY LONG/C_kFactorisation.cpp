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

    vector<int> factors;
    int n, k;
    cin >> n >> k;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            n = n / i;
            factors.push_back(i);
        }
    }
    if (n > 2)
    {
        factors.push_back(n);
    }
    if (factors.size() < k)
    {
        printf("-1");
        return 0;
    }
    for (int i = 0; i < k - 1; i++)
    {
        printf("%d ", factors[i]);
    }
    lli answer = 1;
    for (int i = k - 1; i < factors.size(); i++)
    {
        answer *= factors[i];
    }
    printf("%lld", answer);
    return 0;
}