#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> a(n);
    long long x;
    cin >> x;
    a[0] = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        a[i] = a[i - 1] + x;
    }

    int q;
    cin >> q;
    while (q--)
    {
        long long s;
        cin >> s;
        int l = 0, r = n - 1;
        if (s > a[n - 1])
        {
            cout << -1 << '\n';
            continue;
        }
        if (s > a[n - 1])
        {
            cout << -1 << '\n';
            continue;
        }
        while (l < r)
        {
            int m = (l + r) / 2;
            if (a[m] >= s)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << l + 1 << '\n';
        }

    return 0;
}