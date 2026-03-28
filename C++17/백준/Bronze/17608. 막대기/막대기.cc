#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n; // 입력받을 숫자의 개수

    stack<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x); // 숫자를 스택에 삽입
    }

    // 스택이 비어있는 경우를 대비한 예외 처리가 있으면 더 좋습니다.
    if (st.empty()) {
        cout << 0 << "\n";
        return 0;
    }

    int temp = st.top(); // 가장 마지막에 입력된 값
    int count = 1;

    while (!st.empty()) {
        // 현재 스택의 맨 위 값이 이전 최댓값(temp)보다 크면
        if (st.top() > temp) {
            temp = st.top(); // 최댓값 갱신
            count++;         // 카운트 증가
        }
        st.pop(); // 확인한 값은 제거
    }

    cout << count << "\n";

    return 0;
}