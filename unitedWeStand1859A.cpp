#include <bits/stdc++.h>

using namespace std;

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        short int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = n - 1; i >= 0; i--)
        {
            int num = a[i];
            bool flag = false;
            for (int j = 0; j < i; j++)
            {
                if (num % a[j] == 0)
                {
                    c.push_back(num);
                    flag = true;
                    break;
                }
            }

            if (flag == false)
            {
                b.push_back(num);
            }
        }

        for (int i = 0; i < b.size(); i++)
        {
            for (int j = 0; j < c.size(); j++)
            {
                if (b[i] == c[j])
                {
                    b.push_back(b[i]);
                    c.pop_back();
                }
            }
        }

        if (b.size() != 0 && c.size() != 0)
        {
            // cout << "True" << endl;
            cout << b.size() << " " << c.size() << endl;
            for (auto x : b)
            {
                cout << x << " ";
            }
            cout << endl;

            for (auto x : c)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}