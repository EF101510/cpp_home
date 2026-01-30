#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 找出所有字串的最長共同開頭
string longest(vector<string>& words) 
{
    if (words.size() == 0) return "";   // 如果沒有任何字串，回傳空字串

    string answer = "";                 // 存最後的共同前綴
    string firstWord = words[0];        // 用第一個字當標準

    // 一個一個字母檢查
    for (int pos = 0; pos < firstWord.size(); pos++) 
    {
        char letter = firstWord[pos];   // 目前要比對的字母

        // 檢查每一個字串
        for (int i = 0; i < words.size(); i++) 
        {
            // 如果字太短，或這個位置的字母不同，就結束
            if (pos >= words[i].size() || words[i][pos] != letter) 
            {
                return answer;
            }
        }

        // 全部一樣，加入答案
        answer += letter;
    }

    return answer;
}
