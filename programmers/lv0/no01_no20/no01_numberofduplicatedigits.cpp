// no01_numberofduplicatedigits.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n);

int main()
{
    vector<int> array = {1, 3, 3, 3, 3, 2};
    int n = 3;
    cout << "������ �� ����: " << n << endl;
    cout << "array �ȿ� �ִ� " << n << "�� ����: " << solution(array, n) << endl;
    /** 
     * <��� ���>
     * ������ �� ����: 3
     * array �ȿ� �ִ� 3�� ����: 4 
     * */
    return 0;
}

int solution(vector<int> array, int n) {
    int answer = count(array.begin(), array.end(), n);
    return answer;
}