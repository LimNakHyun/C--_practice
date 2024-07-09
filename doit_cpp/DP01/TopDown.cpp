#include <iostream>
#include <vector>
using namespace std;

static int N;
static vector<int> D;
int fibo(int n);

int main()
{
    cout << "몇 번째 피보나치 숫자를 찾고싶나요?: ";
	cin >> N;
	D.resize(N + 1);
	
	for (int i = 0; i <= N; i++)
	{
		D[i] = -1;
	}
	D[0] = 0;
	D[1] = 1;
	fibo(N);
	cout << N << "번째 피보나치 숫자: " << D[N];
}

int fibo(int n)
{
	// 기존에 계산한 적이 있는 부분 문제는 다시 계산하지 않고 반환
	if (D[n] != -1)
	{
		return D[n];
	}
	
	// 메모이제이션: 구한 값을 바로 반환하지 않고 테이블에 저장 후 반환하도록 구현
	return D[n] = fibo(n - 2) + fibo(n - 1);
}