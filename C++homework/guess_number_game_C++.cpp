#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(int argc, char** argv)
{
    int guess;
    int guess_time;
    srand(time(NULL));
    int num = 1 + rand() % (10);
    cout << "�{�b�O�q�Ʀr�C���A�п�J�@�ӼƦr" << endl;
    cin >> guess;
    if (guess==num)
    {
        cout << "win" << endl;
    }
    else
    {
        cout << "��J���~�A�Э��s��J" << endl;
        cout << "�A���Ʀr��" << (guess < num ? "���T���פp" : "���T���פj") << endl;
        cout << "�A�٦� " << (3 - guess_time) << " �����|" << endl;
        guess_time = 1;
        while (guess != num && guess_time < 3)
        {
            cin >> guess;
            if (guess == num)
            {
                cout << "win" << endl;
            }
            else
            {
                cout << "��J���~�A�Э��s��J" << endl;
                cout << "�A���Ʀr��" << (guess < num ? "���T���פp" : "���T���פj") << endl;
                cout << "�A�٦� " << (3 - guess_time) << " �����|" << endl;
                guess_time++;
            }
        }
        if (guess_time == 3)
        {
            cout << "lose" << endl;
            cout << "���T���׬O�G" << num << endl;
        }
    }
}