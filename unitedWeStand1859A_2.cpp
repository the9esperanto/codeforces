#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b, c;
        bool ifallev = true;
        bool ifallodd = true;
        int temp;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            if (temp & 1)
            {
                ifallev = false;
                b.push_back(temp);
            }
            else
            {
                ifallodd = false;
                c.push_back(temp);
            }
        }
        if (ifallev || ifallodd)
        {
            sort(a.begin(), a.end());
            if (a[0] == a[n - 1])
            {
                cout << -1 << endl;
            }
            else
            {
                int count = 0;
                int tempy = a[0];
                count = 1;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != tempy)
                    {
                        break;
                    }
                    count++;
                }
                cout << count << " " << n - count << endl;
                for (int i = 0; i < count; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
                for (int i = count; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}