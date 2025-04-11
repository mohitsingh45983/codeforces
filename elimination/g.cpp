#include <bits/stdc++.h>
using namespace std;

struct Triangle
{
    int y0, y1, y2;
};

bool intersects(int y, const Triangle &t)
{
    return min({t.y0, t.y1, t.y2}) <= y && y <= max({t.y0, t.y1, t.y2});
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Triangle> triangles(n);
    set<int> y_values;

    for (int i = 0; i < n; i++)
    {
        int x0, y0, x1, y1, x2, y2;
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
        triangles[i] = {y0, y1, y2};
        y_values.insert(y0);
        y_values.insert(y1);
        y_values.insert(y2);
    }

    vector<int> y_sorted(y_values.begin(), y_values.end());
    int max_hit = 0;

    for (int y : y_sorted)
    {
        int count = 0;
        for (const auto &t : triangles)
        {
            if (intersects(y, t))
            {
                count++;
            }
        }
        max_hit = max(max_hit, count);
    }

    cout << max_hit << '\n';
    return 0;
}
