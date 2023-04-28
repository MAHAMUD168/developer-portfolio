#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;

    int t[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> t[i];
    }
    temp = t[0] + t[1];
    int tem = t[0] + t[1];
    for (int i = 2; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            tem = tem - t[i] + t[i + 1];
            if (temp < tem)
                temp = tem;
        }
    }
    cout << temp;
}