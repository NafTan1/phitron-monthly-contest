#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    for (int i = sz - 1; i >= 0; i--)
    {
        char c = tolower(s[i]);
        cout << c;
    }
    return 0;
}