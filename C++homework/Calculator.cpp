#include <iostream>
#include <cmath>
using namespace std;

void printMenu()
{
    cout << "\n===========================" << endl;
    cout << "       簡易計算機選單      " << endl;
    cout << "===========================" << endl;
    cout << "  1. 加法       (+)" << endl;
    cout << "  2. 減法       (-)" << endl;
    cout << "  3. 乘法       (*)" << endl;
    cout << "  4. 除法       (/)" << endl;
    cout << "  5. 取餘數     (%)" << endl;
    cout << "  6. 次方       (^)" << endl;
    cout << "===========================" << endl;
    cout << "請輸入選項 (1 - 6): ";
}

int main()
{
    int choice;
    double num1, num2, result;
    char again;
    bool firstTime = true;
    char resetInput;

    do
    {
        printMenu();
        cin >> choice;

        if (choice < 1 || choice > 6)
        {
            cout << "\n[錯誤] 無效的選項，請輸入 1 到 6。" << endl;
            continue;
        }

        // 第一次一定要輸入兩個數字
        if (firstTime)
        {
            cout << "\n---------------------------" << endl;
            cout << "請輸入兩個數字: ";
            cin >> num1 >> num2;
            cout << "---------------------------" << endl;
            cout << "num1: " << num1 << ", num2: " << num2 << endl;
            firstTime = false;
        }
        else
        {
            // 非第一次，使用上次結果當作 num1，詢問是否重設
            cout << "\n上次結果為: " << result << endl;
            cout << "是否要重新輸入兩個數字？(Y = 是，N = 否): ";
            cin >> resetInput;

            if (resetInput == 'Y' || resetInput == 'y')
            {
                cout << "\n---------------------------" << endl;
                cout << "請輸入兩個數字: ";
                cin >> num1 >> num2;
                cout << "---------------------------" << endl;
            }
            else
            {
                num1 = result;
                cout << "請輸入第二個數字: ";
                cin >> num2;
                cout << "---------------------------" << endl;
            }
        }

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "【加法】結果是: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "【減法】結果是: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "【乘法】結果是: " << result << endl;
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "【除法】結果是: " << result << endl;
            }
            else
            {
                cout << "錯誤: 除數不能為 0。" << endl;
            }
            break;
        case 5:
            if (static_cast<int>(num2) != 0)
            {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "【餘數】結果是: " << result << endl;
            }
            else
            {
                cout << "錯誤: 除數不能為 0。" << endl;
            }
            break;
        case 6:
            result = pow(num1, num2);
            cout << "【次方】結果是: " << result << endl;
            break;
        }

        cout << "---------------------------" << endl;
        cout << "是否要繼續計算？(Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\n感謝使用，再見！" << endl;
    return 0;
}
