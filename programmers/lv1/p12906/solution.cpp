#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (const int &i : arr)
    {
        if (answer.size() == 0 || answer.back() != i)
        {
            answer.emplace_back(i);
        }
    }

    return answer;
}
