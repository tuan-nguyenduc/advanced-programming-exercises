#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int board[size][size] = {0};
    bool is_safe = true;

    for (int i = 0; i < size; i++)
    {
       for (int j = 0; j < size; j++)
       {
        is_safe = true;

        //Check horizontal
        for (int k = 0; k < size; k++)
        {
            if (board[i][k] == 1)
            {
                is_safe = false;
                break;
            }
        }

        //Check vertical
        int l = i;
        while (l >= 0)
        {
            if (board[l][j])
            {
                is_safe = false;
                break;
            }
            l--;
        }

        //Check diagonal
        for (int k = 1; k < size; k++)
        {
            if (i-k >= 0 && j-k >= 0 && board[i-k][j-k] == 1)
            {
                is_safe = false;
                break;
            }
            if (i - k >= 0 && j + k < size && board[i-k][j+k] == 1)
            {
                is_safe = false;
                break;
            }
        }

        if (is_safe)
        {
            board[i][j] = 1;
            break;
        }
       }
    }

    cout << "The board: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}