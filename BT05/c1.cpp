#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int main()
{
    srand(time(0));
    int m, n;
    int num_bomb;
    bool is_dead = false;
    int x, y;
    cin >> m >> n >> num_bomb;
    char grid[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = '.';
        }
    }

    while (num_bomb > 0)
    {
        int rand_x = rand() % m;
        int rand_y = rand() % n;
        if (grid[rand_x][rand_y] == '.')
        {
            grid[rand_x][rand_y] = '*';
            num_bomb--;
        }
    }

    // Print map
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Let play!" << endl;

    while (is_dead == false)
    {
        cout << "Choose x, y: " << endl;
        cin >> x >> y;

        while (x >= m || y >= n)
        {
            cout << "Your x,y is invalid!. Choose x, y again: " << endl;
            cin >> x >> y;
        }

        int count_bomb = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[x][y] == '*')
                {
                    is_dead = true;
                }
            }
        }
        if (is_dead == false)
        {
            if (grid[x - 1][y] == '*' && x > 0)
            {
                count_bomb++;
            }
            if (grid[x + 1][y] == '*' && x < m - 1)
            {
                count_bomb++;
            }
            if (grid[x + 1][y + 1] == '*' && x < m && y < n - 1)
            {
                count_bomb++;
            }
            if (grid[x - 1][y - 1] == '*' && x > 0 && y > 0)
            {
                count_bomb++;
            }
            if (grid[x - 1][y + 1] == '*' && x > 0 && y < n - 1)
            {
                count_bomb++;
            }
            if (grid[x][y - 1] == '*' && y > 0)
            {
                count_bomb++;
            }
            if (grid[x][y + 1] == '*' && y < n - 1)
            {
                count_bomb++;
            }
            if (grid[x + 1][y - 1] == '*' && x < m - 1 && y > 0)
            {
                count_bomb++;
            }

            string str = to_string(count_bomb);
            grid[x][y] = str[0];

            cout << "THE MAP: " << endl;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (grid[i][j] == '*')
                    {
                        cout << '.' << " ";
                    }
                    else
                    {
                        cout << grid[i][j] << " ";
                    }
                }
                cout << endl;
            }
        }
    }

    if (is_dead == true)
    {
        cout << "You are dead!" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
}