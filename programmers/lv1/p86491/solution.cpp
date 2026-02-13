#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;

    int width = 0, height = 0;

    for (const auto &i : sizes)
    {
        pair<int, int> p = minmax(i[0], i[1]);

        if (p.first > width)
            width = p.first;
        if (p.second > height)
            height = p.second;
    }

    answer = width * height;

    return answer;
}
