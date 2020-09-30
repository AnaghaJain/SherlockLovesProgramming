#include <iostream>
using namespace std;

bool safetoplace(int board[][9], int r, int c, int num){
    for(int i=0; i<9; i++){
        if(board[i][c]==num || board[r][i]==num){
            return false;
        }
    }

    int sx= r-r%3;
    int sy= c-c%3;

    for(int x=sx; x<sx+3; x++){
        for (int y=sy; y<sy+3; y++){
            if(board[x][y]==num){
                return false;
            }
        }
    }
    return true;
}

bool sudoku(int board[][9], int r, int c){
    if(r==9){
        for(int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if(c==9){
        return sudoku(board, r+1, 0);
    }

    if(board[r][c]!=0){
        return sudoku(board, r, c+1);
    }

    for(int i=1; i<=9; i++){
        if (safetoplace(board, r, c, i)){
            board[r][c]=i;
            int success= sudoku(board, r, c+1);

            if(success){
                return true;
            }
        }
    }
    board[r][c] = 0;
    return false;
}

int main() {
    int n;
    cin>>n;

  
    int board[9][9];

    for(int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            cin>>board[i][j];
        }
    }
    sudoku(board, 0, 0);

    return 0;

}
