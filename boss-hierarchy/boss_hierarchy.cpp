#include <bits/stdc++.h>
using namespace std;

void left(int l, int r, vector<int> a)
{
    int mid = (l + r) / 2;
    cout << a[mid] << " ";
}
void right(int l, int r, vector<int> a)
{
    int mid = (l + r) / 2;
    cout << a[mid] << " ";
}
void emp(int l, int r, vector<int> a)
{
    if (l > r)
        return;
    int mid = (l + r) / 2;
    cout << a[mid] << " ";
    left(l, mid - 1, a);
    right(mid + 1, r, a);
    emp(l, mid - 1, a);
    emp(mid + 1, r, a);
}

int main()
{
    int rank;
    cin >> rank;
    int employees = (1 << rank) - 1;
    vector<int> a(employees);
    for (int i = 0; i < employees; i++)
        cin >> a[i];
    int l = 0;
    int r = employees - 1;
    emp(l, r, a);

    return 0;
}