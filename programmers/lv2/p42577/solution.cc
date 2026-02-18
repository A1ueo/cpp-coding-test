#include <bits/stdc++.h>

using namespace std;

// 전화번호 목록
bool solution(vector<string> phone_book) {
  bool answer = true;

  sort(phone_book.begin(), phone_book.end());

  for (size_t i = 0; i < phone_book.size() - 1; i++) {
    if (phone_book[i].length() < phone_book[i + 1].length() &&
        phone_book[i + 1].compare(0, phone_book[i].length(), phone_book[i]) ==
            0) {
      return answer = false;
    }
  }

  return answer;
}

int main() {
  cout << solution({"119", "97674223", "1195524421"}) << endl;
  cout << solution({"123", "456", "789"}) << endl;
  cout << solution({"1235", "567", "88", "123", "12"}) << endl;
}
