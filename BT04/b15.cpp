#include <iostream>
using namespace std;

int main()
{
    int x_size, y_size;
    bool safe = true;
    cin >> y_size >> x_size;
    char world[x_size][y_size];
    for (int i = 0; i < x_size; i++)
    {
        for (int j = 0; j < y_size; j++)
        {
            cin >> world[i][j];
        }
    }

    bool can_survived = true;
    bool Y_found = false;

    for (int t = 0; t < x_size; t++)
    {
        bool can_stay = false;
        bool can_go_left = false;
        bool can_go_right = false;
        for (int j = 0; j < y_size; j++)
        {
            if (world[t][j] == 'Y')
            {

                Y_found = true;
                if (world[t + 1][j] != 'R')
                {
                    can_stay = true;
                }
                if (j < y_size - 1 && world[t][j + 1] != 'R' && world[t + 1][j + 1] != 'R')
                {

                    can_go_right = true;
                }
                if (j > 0 && world[t][j - 1] != 'R' && world[t + 1][j - 1] != 'R')
                {
                    can_go_left = true;
                }
            }
        }

        if (!can_go_left && !can_go_right && !can_stay && Y_found)
        {
            can_survived = false;
            break;
        }

        if (can_stay)
        {
            for (int j = 0; j < y_size; j++)
            {
                if (world[t][j] == 'Y')
                {
                    world[t+1][j] = 'Y';
                    break;
                }
            }
        }

        else if (can_go_left)
        {
            for (int j = 0; j < y_size; j++)
            {
                if (world[t][j] == 'Y')
                {
                    world[t+1][j - 1] = 'Y';
                    break;
                }
            }
        }

        else if (can_go_right)
        {
            for (int j = 0; j < y_size; j++)
            {
                if (world[t][j] == 'Y')
                {
                    
                    world[t+1][j + 1] = 'Y';
                    break;
                }
            }
        }

        // cout << "The road: " << endl;
        // for (int i = 0; i < x_size; i++)
        // {
        //     for (int j = 0; j < y_size; j++)
        //     {
        //         cout << world[i][j];
        //     }
        //     cout << endl;
        // }
    }
    // cout << endl;

    if (can_survived == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}