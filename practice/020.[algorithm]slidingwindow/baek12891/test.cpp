#include <iostream>

using namespace std;

void printArray(int* array, int size);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S, P;
    cin >> S >> P;

    string DNA;
    cin >> DNA;

    const int ACGT_ARRAY_SIZE = 4;      // ACGT 배열 사이즈 선언
    int default_ACGT_array[ACGT_ARRAY_SIZE] {0};    // 부분문자열에 포함되어야 할 {‘A’, ‘C’, ‘G’, ‘T’} 의 최소 개수
    
    for(int i=0; i<ACGT_ARRAY_SIZE; i++)
    {
        cin >> default_ACGT_array[i];
    }

    int dynamic_ACGT_array[ACGT_ARRAY_SIZE] {0};

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

    for (int i=P; i<S; i++)
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
    cout << answer;

    return 0;
}
