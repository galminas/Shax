#include "func.h"

int main()
{

    int board[8][8] = {{-4, -1, -2, -5, -3, -2, -1, -4},
                       {-6, -6, -6, -6, -6, -6, -6, -6},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 0,  0,  0,  0,  0,  0,  0,  0},
                       { 6,  6,  6,  6,  6,  6,  6,  6},
                       { 4,  1,  2,  5,  3,  2,  1,  4}};
    int oldX=0;
    int oldY=1;
    int newY=0;
    int newX=3;
    cannibalism(oldX,oldY,newX,newY,board);
    move(oldY,oldX,newY,newX,board);
    moveQueen(oldX,oldY,newX,newY, board);
    movePeshka(oldX,oldY,newX,newY,board);
    moveKing(oldX,oldY,newX,newY);
    moveHorse(oldX,oldY,newX,newY);
    moveTower(oldX,oldY,newX,newY,board);
    moveElephant(oldX,oldY,newX,newY);
    return 0;
}
