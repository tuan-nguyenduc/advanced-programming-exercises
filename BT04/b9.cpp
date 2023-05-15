#include <iostream>
using namespace std;

int main()
{
    const int size = 8;
    //Tao mang 2 chieu ban co
    int board[size][size];
    //Nhap n la so quan hau
    int num_queen;
    cin >> num_queen;
    int x, y;
    bool is_threatened = false;

    //Khoi tao mang board
    for (int i = 0 ; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = 0;
        }
    }

    //Nhap quan hau vao dung vi tri
    for (int i = 0; i < num_queen; i++)
    {
        cin >> x >> y;
        board[x][y] = 1;
    }

    cout << "The board: " << endl;
    for (int i = 0 ; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    //Duyet mang 2 chieu, return yes neu cung hang, cot , duong cheo.
    for (int i = 0 ; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
            {
                //Check horizontal
                for (int k = j+1; k < size; k++)
                {
                    if (board[i][k] == 1)
                    {
                        is_threatened = true;
                        break;
                    }
                }
                //Check vertical
                for (int k = i+1; k < size; k++)
                {
                    if (board[k][j] == 1)
                    {
                        is_threatened = true;
                        break;
                    }
                }

                //Check diagonal
                for (int k = 1; k < size; k++)
                {
                    if (i+k < size && j+k < size && board[i+k][j+k] == 1)
                    {
                        is_threatened = true;
                        break;
                    }
                    if (i-k >= 0 && j+k < size && board[i-k][j+k] == 1)
                    {
                        is_threatened = true;
                        break;
                    }
                }
            }
        }
    }

    if (is_threatened)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No" << endl;
    }
}