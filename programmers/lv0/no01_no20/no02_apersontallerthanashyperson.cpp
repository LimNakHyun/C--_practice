#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(int i=0; i<array.size(); i++)
    {
        if(array[i] > height) answer++;
    }
    return answer;
}

int main()
{
    vector<int> array = {149, 180, 192, 170};
    int height = 167;

    cout << "Taller people: " << solution(array, height) << endl;
    /**
     * @result
     * Taller people: 3
     */

    return 0;
}