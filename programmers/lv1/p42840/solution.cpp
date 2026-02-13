#include <bits/stdc++.h>

using namespace std;

// 모의고사
vector<int> solution(vector<int> answers) {
  vector<int> answer;

  const vector<int> vec1 = {1, 2, 3, 4, 5};
  const vector<int> vec2 = {2, 1, 2, 3, 2, 4, 2, 5};
  const vector<int> vec3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

  int cnt1 = 0, cnt2 = 0, cnt3 = 0;

  for (int i = 0; i < answers.size(); i++) {
    if (vec1[i % vec1.size()] == answers[i])
      cnt1++;
    if (vec2[i % vec2.size()] == answers[i])
      cnt2++;
    if (vec3[i % vec3.size()] == answers[i])
      cnt3++;
  }

  int max_cnt = max({cnt1, cnt2, cnt3});

  if (cnt1 == max_cnt)
    answer.emplace_back(1);
  if (cnt2 == max_cnt)
    answer.emplace_back(2);
  if (cnt3 == max_cnt)
    answer.emplace_back(3);

  return answer;
}
