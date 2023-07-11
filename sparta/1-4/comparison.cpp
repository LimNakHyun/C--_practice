#include <iostream>

int main()
{
    using namespace std;
    
    int numOfWatermelons = 3;

    cout << "watermelons: " << numOfWatermelons << endl;
    cout << "numOfWatermelons >= 2: " << (numOfWatermelons >= 2) << endl;   // 컴퓨터는 0은 거짓이라는 뜻으로 출력함
    cout << "numOfWatermelons < 2: " << (numOfWatermelons < 2) << endl;
    cout << "numOfWatermelons == 2: " << (numOfWatermelons == 2) << endl;

    return 0;
}