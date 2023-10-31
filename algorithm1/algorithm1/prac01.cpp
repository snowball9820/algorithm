//디버깅이 중요한 이유
//컴퓨터의 프로세스가 어떻게 동작되는지 이해
//알고리즘 동작 원리 이해
//디버깅 하고자 하는 줄에 중단점을 설정, 중단점은 여러 개 가능
//IDE의 디버깅 기능을 실행하면 코드 1줄 씩 실행하거나,
//다음 중단점까지 실행 가능, 추적할 변숫값 지정 가능
//변숫값 이외에도 원하는 수식을 입력해 논리 오류 파악

#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;
//배열에서 주어진 범위의 합을 구해
int main()
{
	int testcase;
	cin >> testcase;

	//값을 초기화
	int answer = 0;
	int A[10001] = { 0 };

	//랜덤으로 배열에 데이터를 넣음
	for (int i = 1; i < 10001; i++) {
		A[i] = rand() * 100;


	}


	for (int t = 1; t < testcase + 1; t++) {
		int start, end;
		//배열의 시작, 종료 인덱스를 받음
		cin >> start >> end;

		//시작과 종료 인덱스를 더해서 출력
		for (int i = start; i <= end; i++) {
			answer += A[i];


		}

		cout << testcase << " " << answer;

	}

}