#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int matrix[x][y];
    int num = 1;
    int top = 0;
    int bottom = x - 1;
    int left = 0;
    int right = y - 1;

    while (left <= right && top <= bottom)
    {
        //Fill in the top row:
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = num++;
        }
        top++;
        
        //Fill in the right column:
        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = num++;
        }
        right--;

        //Fil in the bottom row:
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        //Fill in the left column:
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}