#include <bits/stdc++.h>

using namespace std;

// 체육복
int solution(int n, vector<int> lost, vector<int> reserve) {
  int answer = n - lost.size();

  set<int> l_set(lost.begin(), lost.end());
  unordered_set<int> r_set(reserve.begin(), reserve.end());

  for (const int &i : l_set) {
    if (r_set.find(i) != r_set.end()) {
      r_set.erase(i);
      answer++;
    } else if (r_set.find(i - 1) != r_set.end()) {
      r_set.erase(i - 1);
      answer++;
    } else if (l_set.find(i + 1) == l_set.end() &&
               r_set.find(i + 1) != r_set.end()) {
      r_set.erase(i + 1);
      answer++;
    }
  }

  return answer;
}

int main() { cout << solution(5, {2, 4}, {1, 3, 5}) << endl; }
