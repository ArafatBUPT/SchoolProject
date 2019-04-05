#include <iostream>
#include "stdlib.h"
#include <time.h>

using namespace std;

int map[4][4];
string record[4][4];

void getMap() {//record用来显示  map存地雷数据
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j)
            map[i][j] = 0;
    }
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j <4; ++j) {
            record[i][j]='*';
        }
    }
}
void showMap(){//遍历显示
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j <4 ; ++j) {
            cout<<record[i][j]<<' ';
        }
        cout<<endl;
    }
}
void showMap2(){
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j <4 ; ++j) {
            cout<<map[i][j]<<' ';
        }
        cout<<endl;
    }
}
void setBoom(int r,int r1,int r2,int r3){
    //随机数设置地雷
    map[r1][r2]=1;
    map[r2][r2]=1;
    map[r3][r1]=1;
    map[r2][r3]=1;
};
bool isBoom(int x,int y){
    //判断是不是地雷
    if(map[x][y]==1)
        return true;
    return false;
}

int main() {

    //随机种子
    srand((unsigned)time(NULL));
    int r = rand() % 4;
    int r1 = rand() % 4;
    int r2 = rand() % 4;
    int r3 = rand() % 4;

    //cout<<r<<r1<<r2<<r3<<endl;//调试用

    cout<<"input x y  [x,y=0~3]:"<<endl;
    getMap();
    setBoom(r,r1,r2,r3);
    showMap();
    //showMap2();//调试用
    while (true) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (isBoom(x, y))
            break;
        else {
            system("cls");
            record[x][y]='0';
            showMap();
            cout << "Continue input:"<<endl;
            continue;
        }
    }


    cout<<"Game over"<<endl;
    system("pause");
    return 0;
}