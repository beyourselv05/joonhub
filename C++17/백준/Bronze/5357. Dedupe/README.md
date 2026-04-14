# [Bronze IV] Dedupe - 5357 (중복제거)

### PS Procedure

총 3번 순회한다. 순회 과정중에서 ABBBBAACC, 첫 라운드를 확인해보자. 입력받고 첫번째인덱스, 두번째인덱스를 비교해서 같으면 스킵하고 다르면 첫번째 인덱스를 벡터에 push한다. [0]과 [1] 비교한것처럼 [1]과 [2]도 비교한다. 쭉 쭉 하다보면 A 푸시, B, A, C를 푸시해서 정답이 나온다. 한 라운드가 끝나면 다음 입출력을 보장해야하기에 벡터를 초기화해준다. 사이즈 변수에 ABAC의 사이즈인 4를 저장하고 pop_back 멤버함수를 4번 사용해서 initialization을 시켜준다. 이걸 n만큼 반복한다. 사실 벡터를 사용하지 않고 순회 안의 for문, al.length()만큼 반복하는 반복문에서 바로바로 출력해줘도 된다는 생각이 들긴 하였으나 (벡터 컨테이너 없이도 문제풀이가 가능하다는 소리) 그냥 오기가 생겨서 만들던대로 구현했다.

[문제 링크](https://www.acmicpc.net/problem/5357) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2026년 3월 30일 23:40:38

### 문제 설명

<p>Redundancy in this world is pointless. Let’s get rid of all redundancy. For example AAABB is redundant. Why not just use AB? Given a string, remove all consecutive letters that are the same.</p>

### 입력 

 <p>The first line in the data file is an integer that represents the number of data sets to follow. Each data set is a single string. The length of the string is less than 100. Each string only contains uppercase alphabetical letters.</p>

### 출력 

 <p>Print the deduped string.</p>

