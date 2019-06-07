#include "func.h"
int cannibalism(int oldX,int oldY,int newX,int newY, int board[8][8]){
    if(board[oldY][oldX] > 0 && board[newY][newX] > 0)
        return 0;
    else
        if (board[oldY][oldX] < 0 && board[newY][newX] < 0)
        return 0;
        else
            return 1;
}

void move(int oldY,int oldX,int newY,int newX,int board[8][8]){

    int kek = board[oldY][oldX];

    board[oldY][oldX]=0;
    board[newY][newX]=kek;  //Динамический массив
}

int moveElephant(int oldX,int oldY,int newX,int newY){
    int y = abs(oldY-newY);
    int x = abs(oldX - newX);
         if(y == x)
             return 1;
         else return 0;
}

int movePeshka(int oldX,int oldY,int newX,int newY,int board[8][8]){
    if(abs(board[oldY][oldX]) == 6){
    int y = abs(oldY-newY);
    int x = abs(oldX-newX);
    if((board[oldY][oldX] == 6) && (oldY == 6) && board[newY][newX] == 0){
        if((((y == 2 && x == 0) || (y == 1 && x == 0))) && (newY < oldY))
            return 1;
        else return 0;
     }
    else if((board[oldY][oldX] == -6) && (oldY == 1) && board[newY][newX] == 0){
             if((((y == 2 && x == 0) || (y == 1 && x == 0))) && (newY > oldY))
                 return 1;
             else return 0;
}
    else if(board[oldY][oldX] == 6 && board[newY][newX] == 0){
        if((y == 1 && x == 0) && (newY < oldY))
            return 1;
        else return 0;
     }
    else if(board[oldY][oldX] == -6 && board[newY][newX] == 0){
             if((y == 1 && x == 0) && (newY > oldY))
                 return 1;
             else return 0;
    }
    else if(board[oldY][oldX] == 6 && board[newY][newX] != 0){
        if((y == 1 && x == 1) && (newY < oldY))
            return 1;
        else return 0;
     }
    else if(board[oldY][oldX] == -6 && board[newY][newX] != 0){
             if((y == 1 && x == 1) && (newY > oldY))
                 return 1;
             else return 0;
    }
    else return 0;
    } else return 0;
}

int moveKing(int oldX,int oldY,int newX,int newY){
    int y = abs(oldY-newY);
    int x = abs(oldX-newX);
        if((y == 1 && x == 1) || (y == 0 && x == 1) || (y == 1 && x == 0) )
            return 1;
        else return 0;

}

int moveTower(int oldX,int oldY,int newX,int newY,int board[8][8]){
    int y = abs(oldY-newY);
    int x = abs(oldX-newX);
    int count = 0;
    if(y == 0 && (oldX - newX) < 0 ){
        for(x = abs(oldX-newX);x>=0;x--){
            if(board[oldY][newX-x] != 0)
                count++;
        }} else if(y == 0 && (oldX - newX) > 0 ){
            for(x = abs(oldX-newX);x>=0;x--){
                if(board[oldY][newX+x] != 0)
                    count++;
            }
    }
    if(x == 0 && (oldY - newY) > 0){
        for(y = abs(oldY-newY); y >= 0; y--){
            if(board[newY+y][oldX] != 0)
                count++;
        }
    }else if(x == 0 && (oldY - newY) < 0){
        for(y = abs(oldY-newY);y >= 0; y--){
            if(board[newY-y][oldX] != 0)
                count++;
        }
    }
             if(((y != 0 && x == 0) || (y == 0 && x !=0)) && count < 2)
                 return 1;
             else return 0;
}

int moveHorse(int oldX,int oldY,int newX,int newY) {
    int y = abs(oldY-newY);
    int x = abs(oldX-newX);

         if((x == 2 && y == 1) || (x == 1 && y ==2))
             return 1;
         else return 0;
}

int moveQueen(int oldX,int oldY,int newX,int newY, int board[8][8]){
    int y = abs(oldY-newY);
    int x = abs(oldX-newX);
    int count = 0;
    if(y == 0 && (oldX - newX) < 0 ){
        for(x = abs(oldX-newX);x>=0;x--){
            if(board[oldY][newX-x] != 0)
                count++;
        }} else if(y == 0 && (oldX - newX) > 0 ){
            for(x = abs(oldX-newX);x>=0;x--){
                if(board[oldY][newX+x] != 0)
                    count++;
            }
    }else
    if(x == 0 && (oldY - newY) > 0){
        for(y = abs(oldY-newY); y >= 0; y--){
            if(board[newY+y][oldX] != 0)
                count++;
        }
    }else if(x == 0 && (oldY - newY) < 0){
        for(y = abs(oldY-newY);y >= 0; y--){
            if(board[newY-y][oldX] != 0)
                count++;
        }
    }else
    if( (oldX-newX)>0 && (oldY - newY) > 0)
        for(x = abs(oldX-newX);x >= 0; x--){
            if(board[newY+x][oldX+x] != 0)
                count++;
        }
    else
    if( (oldX-newX) > 0 && (oldY - newY) < 0)
        for(x = abs(oldX-newX);x >= 0; x--){
            if(board[newY-x][oldX-x] != 0)
                count++;
        }else
    if( (oldX-newX)<0 && (oldY - newY) > 0)
        for(x = abs(oldX-newX);x >= 0; x--){
            if(board[newY+x][oldX+x] != 0)
                count++;
        }else
    if( (oldX-newX)<0 && (oldY - newY) < 0)
        for(x = abs(oldX-newX);x >= 0; x--){
            if(board[newY-x][oldX-x] != 0)
                count++;
        }
             if(((abs(oldX-newX) == abs(oldY-newY)) || (abs(oldY-newX) != 0 && abs(oldX-newX) ==0) || (abs(oldY-newY) == 0 && abs(oldX-newX) !=0)) && count < 2)
                 return 1;
             else return 0;

}
