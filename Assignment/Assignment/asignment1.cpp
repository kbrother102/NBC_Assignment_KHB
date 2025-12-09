#include <iostream>

using namespace std;
/*
* - HP, MP, 공격력, 방어력을 int형 배열로 선언, 전체 값들은 0으로 초기화합니다.

    (배열 이름이 status라면 status[0]은 HP, status[3]은 방어력)

- HP와 MP를 입력 받고, HP/MP 중 하나라도 50 이하의 숫자를 입력 받을 경우 다시 입력 받습니다.
- HP와 MP에 값을 입력 받은 후 공격력과 방어력을 입력 받습니다.
- 공격력이나 방어력이 하나라도 0 이하의 숫자를 입력 받을 경우 다시 입력 받습니다.
- 스탯 관리 시스템을 시작합니다.
    - 1. HP UP 2. MP UP 3. 공격력 UP 4. 방어력 UP 5. 현재 능력치 6. Level Up 0. 나가기
    - 선택지를 출력한 후, int형 정수 하나를 입력 받아서 해당 선택지를 실행합니다.
- 포션 지급 함수를 작성합니다. HP, MP 강화 포션은 5개씩 기본 지급되며, HP, MP포션 개수로 5를 저장합니다. 함수는 다음과 같이 정의합니다.

    void setPotion(int count, int* p_HPPotion, int* p_MPPotion)

- 1, 2번을 선택 시 각각 HP/MP가 20 증가하고, 포션의 개수가 1개씩 차감 됩니다. 포션이 0개일 경우 사용할 수 없습니다.
- 3, 4번을 선택 시 각각 공격력/방어력이 2배씩 증가합니다. 이 연산은 두 가지 방법이 있으니 잘 생각해보시길 바랍니다.
- 5번 현재 HP, MP, 공격력, 방어력을 출력해줍니다.
- 6번은 레벨업, HP/MP포션을 하나씩 충전 해줍니다.
- 0번을 선택하면 프로그램을 종료합니다
*/

void InPutError() // 문자를 받았을때 버퍼(힙 영역에 존재)에 남아있는 문자를 제거
{
    if (cin.fail()) // 실패 여부 플래그(자료형 상이 등)
    {
        cin.clear(); // 상태를 정상으로 돌림( 인수 있음)
        cin.ignore(50, '\n'); // 버퍼에 있는 문자열 제거
    }
}

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{

}

enum Stat
{
    HP,
    MP,
    Atk,
    Def

};


int main()
{
    int status[4] = {};  //[0] : HP, [1] : MP, [2] : Atk, [3] : Def
    int HpPotion;
    int MPPotion;

    cout << "HP와 MP를 입력해주세요(둘 다 50이상이 되어야 합니다.)" << endl;
    cin >> status[HP];
    cin >> status[MP];
    InPutError();
    while (1)
    {
        if (status[HP] <= 50 || status[MP] <= 50)
        {
            cout << "다시 입력해주세요" << endl;
            cin >> status[HP];
            cin >> status[MP];
            InPutError();
        }
        else
        {
            break;
        }
    }

    cout << "공격력과 방어력를 입력해주세요" << endl;
    cin >> status[Atk];
    InPutError();
    cin >> status[Def];
    InPutError();
    while (1)
    {
        if (status[Atk] <= 0 || status[Def] <= 0)
        {
            cout << "다시 입력해주세요. 음수가 될 수 없습니다." << endl;
            cin >> status[Atk];
            InPutError();
            cin >> status[Def];
            InPutError();
        }
        else
        {
            break;
        }

    }
short statmanage = -1;
        cout << "스탯 관리 시스템을 시작합니다." << endl;
        cout << " - 1. HP UP 2. MP UP 3. 공격력 UP 4. 방어력 UP 5. 현재 능력치 6. Level Up 0. 나가기" << endl;
        cin >> statmanage;
    do {
         
        if (statmanage < 0 || statmanage > 6 || cin.fail())
        {
            cout << "올바른 값을 입력하세요" << endl;
            InPutError();
            cin >> statmanage;
            continue;
        }
        switch (statmanage)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        }

        cout << "루프확인용" << endl;
    } while (1);





    return 0;
}