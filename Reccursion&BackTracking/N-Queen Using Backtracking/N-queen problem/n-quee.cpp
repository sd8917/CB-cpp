#include<iostream>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n){
    //You have to check for col

    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }

    //you can ckeck for left diagonal

    int x=i;
    int y=j;

    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }

    //you can check for right diagonal
    x=i;
    y=j;

    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

    //the position is now safe,col and diagonals
    return true;
}

bool solveNQueen(int board[][10],int i,int n){
    //Base Case
    if(i==n){
        //You have successful place queen in n rows (0,n-1)
        //print the board
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q ";
                }

                else{
                    cout<<"_";
                }
            }
            cout<<endl;
        }
        return false;

    }

    //Recursive case
    //Try to Place the queen i the cuurent row and call on the remaining part

    for(int i=0;i<n;i++){
        //I have to check i,j th position is safe to place the queen or not

        if(isSafe(board,i,j,n)){)){
            //Place the queen -ASSUMING I,J IN THE RIGHT POSITION
            board[i][j] == 1;

            bool nextQueenRakhPaye = solveNQueen(board,i+1,n);

            if(nextQueenRakhPaye){
                return true;

            }

            ///It means i,j is not the right position assuming is wrong
            board[i][j] == 0;
        }


        //You have tried for all position in the current row but couldn't place queen.
        return false;

    }
}

int main(){

    int n;
    cin>>n;

    int board[10][10] = {0};
    solveNQueen(board,0,0,n);

    return 0;
}

