#include <iostream>
#include <vector>

using namespace std;

void printArray(int* array, int size);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // DNA 문자열 길이 S와 비밀번호로 사용할 부분문자열의 길이 P 선언 시작
    int S, P;
    cout << "enter S, P value plz: " << endl;
    cin >> S >> P;
    cout << "Printing S: " << S << endl;
    cout << "Printing P: " << P << endl;
    // DNA 문자열 길이 S와 비밀번호로 사용할 부분문자열의 길이 P 선언 끝

    // 임의로 만든 DNA 문자열 선언 시작
    string DNA;
    cout << "enter DNA string valeu plz: " << endl;
    cin >> DNA;
    cout << "Printing DNA: " << DNA << endl;
    // 임의로 만든 DNA 문자열 선언 끝

    // 기본 ACGT 배열 선언 시작
    // 부분문자열에 포함되어야 할 {‘A’, ‘C’, ‘G’, ‘T’} 의 최소 개수가 공백을 구분으로 주어진다. 
    // 각각의 수는 |S| 보다 작거나 같은 음이 아닌 정수이며 총 합은 |S| 보다 작거나 같음이 보장된다.
    const int ACGT_ARRAY_SIZE = 4;      // ACGT 배열 사이즈 선언
    int default_ACGT_array[ACGT_ARRAY_SIZE] {0};
    cout << "array init: " << endl;
    printArray(default_ACGT_array, ACGT_ARRAY_SIZE);
    
    cout << "array setting: " << endl;
    for(int i=0; i<ACGT_ARRAY_SIZE; i++)
    {
        cin >> default_ACGT_array[i];
    }

    cout << "array complete: " << endl;
    printArray(default_ACGT_array, ACGT_ARRAY_SIZE);
    // 기본 ACGT 배열 선언 끝

    // 가변 ACGT 배열 선언 시작
    // 슬라이딩 윈도우 기법으로 DNA문자열을 순회하며 업데이트 할 예정
    int dynamic_ACGT_array[ACGT_ARRAY_SIZE] {0};
    cout << "array init: " << endl;
    for(int i=0; i<ACGT_ARRAY_SIZE; i++)
    {
        cout << dynamic_ACGT_array[i] << " ";
    }

    // 문자열 순회 테스트 시작
    // cout << "string roud: " << endl;
    // for(char c: DNA)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    // 문자열 순회 테스트 끝

    for(char c: DNA)
    {
        if(c == 'A') dynamic_ACGT_array[0]++;
        else if(c == 'C') dynamic_ACGT_array[1]++;
        else if(c == 'G') dynamic_ACGT_array[2]++;
        else dynamic_ACGT_array[3]++;
    }
    
    cout << "array complete: " << endl;
    printArray(dynamic_ACGT_array, ACGT_ARRAY_SIZE);
    // 가변 ACGT 배열 선언 끝

    return 0;
}

void printArray(int* array, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}