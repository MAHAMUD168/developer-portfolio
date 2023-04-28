#include <iostream>
using namespace std;
int main()
{
    string t, s;
    cin >> t >> s;
    int p;
    p = t.size();

    for (int i = 0, j = p - 1; i < p; i++, j--)
    {
        if (t[i] == s[j])
            continue;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}