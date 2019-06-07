#include <stdlib.h>
#include <math.h>

int cannibalism(int oldX,int oldY,int newX,int newY, int board[8][8]);
void move(int oldY,int oldX,int newY,int newX,int board[8][8]);
int movePeshka(int oldX,int oldY,int newX,int newY,int board[8][8]);
int moveKing(int oldX,int oldY,int newX,int newY);
int moveTower(int oldX,int oldY,int newX,int newY,int board[8][8]);
int moveHorse(int oldX,int oldY,int newX,int newY);
int moveQueen(int oldX,int oldY,int newX,int newY, int board[8][8]);
