#include<bits/stdc++.h>
#include<list>
using namespace std;
#define cases() int test_case; cin >> test_case; while(test_case--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define VI vector<int>
#define PB push_back
#define lli long long int
#define d 1000000007
int main()
{
    int n,c=0;
    cin>>n;
    for(int k=6;k<=n;k++)
    {
        int i=k;
            set <int> fac;
            while (i % 2 == 0)
        {
            fac.insert(2);
            i = i/2;
        }
        for (int j = 3; j <= sqrt(i); j = j + 2)
        {
            while (i % j == 0)
            {
                fac.insert(j);
                i = i/j;
            }
        }
        if (i > 2)
            fac.insert(i);
        if(fac.size()==2) c++;
    }
    cout<<c;

    return 0;
}