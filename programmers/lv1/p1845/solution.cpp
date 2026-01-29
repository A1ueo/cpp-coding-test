#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    set<int> n_set(nums.begin(), nums.end());

    answer = min(nums.size() / 2, n_set.size());

    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << solution({3, 1, 2, 3}) << endl;
}
