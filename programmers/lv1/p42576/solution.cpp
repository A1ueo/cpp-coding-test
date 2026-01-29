#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";

    map<string, int> p_map;

    for (const auto &i : participant)
        p_map[i]++;

    for (const auto &i : completion)
        p_map[i]--;

    for (auto it = p_map.begin(); it != p_map.end(); it++)
    {
        if (it->second != 0)
            answer = it->first;
    }

    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << solution({"leo", "kiki", "eden"}, {"eden", "kiki"}) << endl;
}
