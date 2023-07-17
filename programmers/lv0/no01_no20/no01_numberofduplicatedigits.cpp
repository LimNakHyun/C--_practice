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
    cout << "개수를 셀 숫자: " << n << endl;
    cout << "array 안에 있는 " << n << "의 개수: " << solution(array, n) << endl;
    /** 
     * <출력 결과>
     * 개수를 셀 숫자: 3
     * array 안에 있는 3의 개수: 4 
     * */
    return 0;
}

int solution(vector<int> array, int n) {
    int answer = count(array.begin(), array.end(), n);
    return answer;
}