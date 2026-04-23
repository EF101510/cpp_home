#include<iostream>

using namespace std;

// Input 範例
// 3   角色總數
// 2 3 (攻擊力 防禦力)
// 1 5 (攻擊力 防禦力)
// ....

class Person {
public:
    int atk; 
    int def;

    Person():atk(0),def(0){}
    Person(int atk, int def):atk(atk),def(def){}

    int power() {
        return atk * atk + def* def;
    }

};


int main() {

    int count;
    cin >> count;

    // 輸入與保存所有的玩家數值
    Person persons[count];
    for (int i= 0; i < count;i++) {
        int atk, def;
        cin >> atk >> def;

        Person p = Person(atk, def);
        persons[i] = p;
    }

    // 找出第2高的玩家
    int first, second = -1; 
    int first_power , second_power = 0;
    for (int i=0; i < count; i++) {
        Person p = persons[i];
        
        // 判斷當前person的power 是否大於first_power
        if (p.power() > first_power ) {
            // 把原本第一名移到第二名
            second = first;
            second_power = first_power;

            // 把新的第一名取代舊的第一名
            first= i;
            first_power = p.power();

        }

        // 只判斷第2名
        if (p.power() > second) {
            second = i;
            second_power = p.power();
        }
    }

    // 第二名
    Person p = persons[second];
    cout  << p.atk << " " << p.def << endl;
}

