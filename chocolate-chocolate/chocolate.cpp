#include <bits/stdc++.h>
using namespace std;

int chocolates(int wrappers)
{
    if (wrappers < 3)
        return 0;
    int newChocolates = wrappers / 3;
    int remainingWrappers = wrappers % 3;
    int total = chocolates(newChocolates + remainingWrappers);
    return total + newChocolates;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int wrappers = n / 5;
        int result = chocolates(wrappers);
        cout << result + wrappers << '\n';
    }
    return 0;
}