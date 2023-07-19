#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float answer = num1 / (float)num2 * 1000;
    return answer;
}

int main()
{
    int num1 = 16;
    int num2 = 7;

    cout << solution(num1, num2) << endl;

    return 0;
}