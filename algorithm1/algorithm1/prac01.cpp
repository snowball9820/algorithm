//������� �߿��� ����
//��ǻ���� ���μ����� ��� ���۵Ǵ��� ����
//�˰��� ���� ���� ����
//����� �ϰ��� �ϴ� �ٿ� �ߴ����� ����, �ߴ����� ���� �� ����
//IDE�� ����� ����� �����ϸ� �ڵ� 1�� �� �����ϰų�,
//���� �ߴ������� ���� ����, ������ ������ ���� ����
//������ �̿ܿ��� ���ϴ� ������ �Է��� �� ���� �ľ�

#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;
//�迭���� �־��� ������ ���� ����
int main()
{
	int testcase;
	cin >> testcase;

	//���� �ʱ�ȭ
	int answer = 0;
	int A[10001] = { 0 };

	//�������� �迭�� �����͸� ����
	for (int i = 1; i < 10001; i++) {
		A[i] = rand() * 100;


	}


	for (int t = 1; t < testcase + 1; t++) {
		int start, end;
		//�迭�� ����, ���� �ε����� ����
		cin >> start >> end;

		//���۰� ���� �ε����� ���ؼ� ���
		for (int i = start; i <= end; i++) {
			answer += A[i];


		}

		cout << testcase << " " << answer;

	}

}