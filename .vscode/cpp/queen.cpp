#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    // cout << s << n << t;

    while (t--)
    {

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i + 1] == 'G')
            {
                s[i + 1] = s[i];
                s[i] = 'G';
            }
        }
    }
    cout << s;
}