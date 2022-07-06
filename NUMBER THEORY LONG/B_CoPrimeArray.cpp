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
#define d 1000000000
lli nextinsert(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[d];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p] && prime[p] > n)
            return prime[p];
}
int main()
{
    int n, count = 0, j = 1;
    cin >> n;
    lli a[n], b[2 * n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (__gcd(a[i], a[i - 1]) == 1)
        {
            b[j] = a[i];
            j++;
            continue;
        }
        else
        {
            count++;
            b[j] = 1;
            j++;
            b[j] = a[i];
            j++;
        }
    }
    b[n + count - 1] = a[n - 1];
    cout << count << "\n";
    for (int i = 0; i < n + count; i++)
        cout << b[i] << " ";
    return 0;
}