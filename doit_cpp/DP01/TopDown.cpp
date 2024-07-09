#include <iostream>
#include <vector>
using namespace std;

static int N;
static vector<int> D;
int fibo(int n);

int main()
{
    cout << "�� ��° �Ǻ���ġ ���ڸ� ã��ͳ���?: ";
	cin >> N;
	D.resize(N + 1);
	
	for (int i = 0; i <= N; i++)
	{
		D[i] = -1;
	}
	D[0] = 0;
	D[1] = 1;
	fibo(N);
	cout << N << "��° �Ǻ���ġ ����: " << D[N];
}

int fibo(int n)
{
	// ������ ����� ���� �ִ� �κ� ������ �ٽ� ������� �ʰ� ��ȯ
	if (D[n] != -1)
	{
		return D[n];
	}
	
	// �޸������̼�: ���� ���� �ٷ� ��ȯ���� �ʰ� ���̺� ���� �� ��ȯ�ϵ��� ����
	return D[n] = fibo(n - 2) + fibo(n - 1);
}