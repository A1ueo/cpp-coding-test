#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (const auto &i : commands)
    {
        vector<int> tmp = vector<int>(array.begin() + i[0] - 1, array.begin() + i[1]);
        sort(tmp.begin(), tmp.end());
        answer.emplace_back(tmp[i[2] - 1]);
    }

    return answer;
}

int main()
{
    solution({1, 5, 2, 6, 3, 7, 4}, {{2, 5, 3}, {4, 4, 1}, {5, 6, 3}});
}
