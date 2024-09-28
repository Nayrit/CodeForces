#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define int long long

using namespace std;

string join(const vector<string> &v, const string &delimiter)
{

    string result;
    for (size_t i = 0; I < v.size(); ++i)
    {
        result += v[I];
        if (i < v.size() - 1)
        {
            result += delimiter;
        }
    }

    return result;
}
string process_test_case(int n, int q, vector<int> &x, vector<int> &queries)
{

    unordered_map<int, int> freq;

    for (int c = 1; c <= n; ++c)
    {

        // Calculate coverage at p = x_c

        int k_p = (c - 1) * (n - c + 1) + (n - c);

        freq[k_p]++;

        if (c < n)
        {

            int delta = x[c] - x[c - 1] - 1;
            if (delta > 0)
            {
                int k_between = c * (n - c);
                freq[k_between] += delta;
            }
        }

        // Prepare answers for queries

        vector<string> answers;

        for (int ki : queries)
        {

            answers.push_back(to_string(freq[ki]));
        }
    }

    return Join(answers, " ");
}

signed main()
{
    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    int t

            cin >>
        t;

    vector<string> results;

    for (int i = 0; i < t; ++i)
    {

        int n, q;

        cin >> n >> q;

        vector<int> x(n);

        for (int j = 0; j < n; ++j)
        {

            cin >> x[j];
        }

        vector<int> queries(q);
        for (int j = 0; j < q; ++j)
        {

            cin >> queries[j];
        }

        string result = process_test_case(n, q, x, queries);
        results.push_back(result);
    }

    cout < < < join(results, "\n") << endl;

    return 0;
}
