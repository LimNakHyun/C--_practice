// arithmeticoperators.cpp
#include <iostream>   // 이건 출력을 위한 헤더 가져오기

int main()
{
    using namespace std;

    int a = 10;
    int b = 3;

    cout << "a+b=" << a+b << endl;
    cout << "a-b=" << a-b << endl;
    cout << "a*b=" << a*b << endl;
    cout << "a/b=" << a/b << endl;
    cout << "a%b=" << a%b << endl;

    int c, d, e;
    c = d = e = 10;
    e += d;     // e = e + d 와 같습니다.
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    cout << "e=" << e << endl;

    return 0;
}