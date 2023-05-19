#include <iostream>
#include <vector>

using namespace std;

void print_board(const vector<int>& board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i] == j) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool is_safe(const vector<int>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

void solve_n_queens(vector<int>& board, int row) {
    int n = board.size();
    if (row == n) {
        print_board(board);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col)) {
            board[row] = col;
            solve_n_queens(board, row + 1);
            board[row] = -1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> board(n, -1);
    solve_n_queens(board, 0);
    return 0;
}