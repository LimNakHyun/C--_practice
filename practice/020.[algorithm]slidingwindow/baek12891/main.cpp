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
    // cout << endl;
    int S, P;
    // cout << "enter S, P value plz: " << endl;
    cin >> S >> P;
    // cout << "Printing S: " << S << endl;
    // cout << "Printing P: " << P << endl;
    // cout << "\n" << endl;
    // DNA 문자열 길이 S와 비밀번호로 사용할 부분문자열의 길이 P 선언 끝

    // 임의로 만든 DNA 문자열 선언 시작
    string DNA;
    // cout << "enter DNA string valeu plz: " << endl;
    cin >> DNA;
    // cout << "Printing DNA: " << DNA << endl;
    // cout << "\n" << endl;
    // 임의로 만든 DNA 문자열 선언 끝

    // 기본 ACGT 배열 선언 시작
    // 부분문자열에 포함되어야 할 {‘A’, ‘C’, ‘G’, ‘T’} 의 최소 개수가 공백을 구분으로 주어진다. 
    // 각각의 수는 |S| 보다 작거나 같은 음이 아닌 정수이며 총 합은 |S| 보다 작거나 같음이 보장된다.
    const int ACGT_ARRAY_SIZE = 4;      // ACGT 배열 사이즈 선언
    int default_ACGT_array[ACGT_ARRAY_SIZE] {0};    // 부분문자열에 포함되어야 할 {‘A’, ‘C’, ‘G’, ‘T’} 의 최소 개수
    // cout << "Printing [default_ACGT_array] init: " << endl;
    // printArray(default_ACGT_array, ACGT_ARRAY_SIZE);
    
    // cout << "Setting [default_ACGT_array] setting: " << endl;
    for(int i=0; i<ACGT_ARRAY_SIZE; i++)
    {
        cin >> default_ACGT_array[i];
    }

    // cout << "Printing [default_ACGT_array] complete: " << endl;
    // printArray(default_ACGT_array, ACGT_ARRAY_SIZE);
    // cout << "\n" << endl;
    // 기본 ACGT 배열 선언 끝

    // 가변 ACGT 배열 선언 시작
    // 슬라이딩 윈도우 기법으로 DNA문자열을 순회하며 업데이트 할 예정
    int dynamic_ACGT_array[ACGT_ARRAY_SIZE] {0};
    // cout << "Printing [dynamic_ACGT_array] init: " << endl;
    // printArray(dynamic_ACGT_array, ACGT_ARRAY_SIZE);

    // 문자열 순회 테스트 시작
    // cout << "string roud: " << endl;
    // for(char c: DNA)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    // 문자열 순회 테스트 끝

    // cout << "Setting [dynamic_ACGT_array] setting: " << endl;
    // for(char c: DNA)
    // {
    //     if(c == 'A') dynamic_ACGT_array[0]++;
    //     else if(c == 'C') dynamic_ACGT_array[1]++;
    //     else if(c == 'G') dynamic_ACGT_array[2]++;
    //     else dynamic_ACGT_array[3]++;
    // }
    
    // cout << "Printing [dynamic_ACGT_array] complete: " << endl;
    // printArray(dynamic_ACGT_array, ACGT_ARRAY_SIZE);
    // 가변 ACGT 배열 선언 끝

    // 가변 ACGT 배열에 부분문자열 P만큼의 기본 데이터 입력 시작

    // cout << "Setting [dynamic_ACGT_array] setting: " << endl;
    for (int i=0; i<P; i++)
    {
        if (DNA[i] == 'A')
        {
            dynamic_ACGT_array[0]++;
        }
        else if (DNA[i] == 'C')
        {
            dynamic_ACGT_array[1]++;
        }
        else if (DNA[i] == 'G')
        {
            dynamic_ACGT_array[2]++;
        }
        else
        {
            dynamic_ACGT_array[3]++;
        }
    }
    
    // cout << "Printing [dynamic_ACGT_array] complete: " << endl;
    // printArray(dynamic_ACGT_array, ACGT_ARRAY_SIZE);

    // 가변 ACGT 배열에 부분문자열 P만큼의 기본 데이터 입력 끝

    // 문자열을 순회하며 가변 ACGT 배열 업데이트 하는 동시에 비밀번호 가능 여부 체크 시작

    int answer = 0;
    bool pwdChk = true;
    for (int i=0; i<ACGT_ARRAY_SIZE; i++)
    {
        if (dynamic_ACGT_array[i] < default_ACGT_array[i])
        {
            pwdChk = false;
            break;
        }
    }
    if(pwdChk) answer++;

    for (int i=P; i<DNA.length(); i++)
    {
        pwdChk = true;
        if (DNA[i] == 'A')
        {
            dynamic_ACGT_array[0]++;
        }
        else if (DNA[i] == 'C')
        {
            dynamic_ACGT_array[1]++;
        }
        else if (DNA[i] == 'G')
        {
            dynamic_ACGT_array[2]++;
        }
        else if (DNA[i] == 'T')
        {
            dynamic_ACGT_array[3]++;
        }

        if (DNA[i-P] == 'A')
        {
            dynamic_ACGT_array[0]--;
        }
        else if (DNA[i-P] == 'C')
        {
            dynamic_ACGT_array[1]--;
        }
        else if (DNA[i-P] == 'G')
        {
            dynamic_ACGT_array[2]--;
        }
        else if (DNA[i-P] == 'T')
        {
            dynamic_ACGT_array[3]--;
        }

        for (int i=0; i<ACGT_ARRAY_SIZE; i++)
        {
            if (dynamic_ACGT_array[i] < default_ACGT_array[i])
            {
                pwdChk = false;
                break;
            }
        }
        if(pwdChk) answer++;
    }
    cout << "answer: " << answer << endl;

    // 문자열을 순회하며 가변 ACGT 배열 업데이트 하는 동시에 비밀번호 가능 여부 체크 끝

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