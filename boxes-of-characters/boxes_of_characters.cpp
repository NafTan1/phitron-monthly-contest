#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int vowel = 0;
        int consonant = 0;
        int box = 0;
        for (char c : s)
        {
            if (c >= '0' && c <= '9')
            {
                box++;
            }
            else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel++;
            }
            else
            {

                consonant++;
            }
        }

        if (vowel % 2 == 0)
        {
            if ((vowel / 2) > box)
            {
                box += vowel / 2 - box;
            }
        }
        else
        {
            if ((vowel / 2) + 1 > box)
            {
                box += (vowel / 2) + 1 - box;
            }
        }

        if (consonant % 3 == 0)
        {
            if ((consonant / 3) > box)
            {
                box += consonant / 3 - box;
            }
        }
        else
        {
            if ((consonant / 3) + 1 > box)
            {
                box += (consonant / 3) + 1 - box;
            }
        }

        cout << box << endl;
    }
    return 0;
}