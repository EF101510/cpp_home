#include <iostream>
#include <cmath>
using namespace std;

void printMenu() {
    cout << "\n===========================" << endl;
    cout << "       ²���p������      " << endl;
    cout << "===========================" << endl;
    cout << "  1. �[�k       (+)" << endl;
    cout << "  2. ��k       (-)" << endl;
    cout << "  3. ���k       (*)" << endl;
    cout << "  4. ���k       (/)" << endl;
    cout << "  5. ���l��     (%)" << endl;
    cout << "  6. ����       (^)" << endl;
    cout << "===========================" << endl;
    cout << "�п�J�ﶵ (1 - 6): ";
}

int main() {
    int choice;
    double num1, num2, result;
    char again;
    bool firstTime = true;
    char resetInput;

    do {
        printMenu();
        cin >> choice;

        if (choice < 1 || choice > 6) {
            cout << "\n[���~] �L�Ī��ﶵ�A�п�J 1 �� 6�C" << endl;
            continue;
        }



        // �Ĥ@���@�w�n��J��ӼƦr
        if (firstTime) {
            cout << "\n---------------------------" << endl;
            cout << "�п�J��ӼƦr: ";
            cin >> num1 >> num2;
            cout << "---------------------------" << endl;
            cout  << "num1: " << num1 << ", num2: " << num2 << endl;
            firstTime = false;
        } else {
            // �D�Ĥ@���A�ϥΤW�����G��@ num1�A�߰ݬO�_���]
            cout << "\n�W�����G��: " << result << endl;
            cout << "�O�_�n���s��J��ӼƦr�H(Y = �O�AN = �_): ";
            cin >> resetInput;

            if (resetInput == 'Y' || resetInput == 'y' ) {
                cout << "\n---------------------------" << endl;
                cout << "�п�J��ӼƦr: ";
                cin >> num1 >> num2;
                cout << "---------------------------" << endl;
            } else {
                num1 = result;
                cout << "�п�J�ĤG�ӼƦr: ";
                cin >> num2;
                cout << "---------------------------" << endl;
            }
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "�i�[�k�j���G�O: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "�i��k�j���G�O: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "�i���k�j���G�O: " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "�i���k�j���G�O: " << result << endl;
                } else {
                    cout << "���~: ���Ƥ��ର 0�C" << endl;
                }
                break;
            case 5:
                if (static_cast<int>(num2) != 0) {
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "�i�l�ơj���G�O: " << result << endl;
                } else {
                    cout << "���~: ���Ƥ��ର 0�C" << endl;
                }
                break;
            case 6:
                result = pow(num1, num2);
                cout << "�i����j���G�O: " << result << endl;
                break;
        }

        cout << "---------------------------" << endl;
        cout << "�O�_�n�~��p��H(Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\n�P�¨ϥΡA�A���I" << endl;
    return 0;
}
