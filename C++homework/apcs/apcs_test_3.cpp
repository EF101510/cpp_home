#include <iostream>
using namespace std;

int main()
{
    int game;
    cin >> game;

    int a_player_score = 0;
    int b_player_score = 0;

    for (int i = 0; i < game; i++)
    {
        int a_player, b_player;
        cin >> a_player >> b_player;

        if (a_player == 2 && b_player == 5)
        {
            a_player_score += 2;
            b_player_score -= 2;
        }

        if (a_player == 5 && b_player == 2)
        {
            a_player_score -= 2;
            b_player_score += 2;
        }

        if (a_player == 0 && b_player == 2)
        {
            a_player_score += 2;
            b_player_score -= 2;
        }

        if (a_player == 2 && b_player == 0)
        {
            b_player_score += 2;
            a_player_score -= 2;
        }

        if (a_player == 5 && b_player == 0)
        {
            a_player_score += 1;
        }

        if (a_player == 0 && b_player == 5)
        {
            b_player_score += 1;
        }

        if (a_player == 2 && b_player == 2)
        {
            a_player_score -= 1;
            b_player_score -= 1;
        }

        if (a_player == 0 && b_player == 0)
        {
        }

        if (a_player == 5 && b_player == 5)
        {
        }
    }

    cout << a_player_score << " " << b_player_score << endl;

    return 0;
}
