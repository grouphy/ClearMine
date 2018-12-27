#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <time.h>
#include <stdlib.h>
void game(){
	char set1 = '0';
	char set2 = '*';
	//棋盘
	char Mine[Rows][Cols] = { 0 };
	//新建棋盘
	char Show[Rows][Cols] = { 0 };
	//初始化棋盘
	Init(Mine, Rows, Cols,set1);
	Init(Show, Rows, Cols,set2);
	//展示
	Display(Mine, Row, Col);
	Display(Show, Row, Col);
	//放雷
	PutMine(Mine, Row, Col);
	//检查Mine
	printf("检查\n");
	ShowMine(Mine, Row, Col);
	//扫雷
	ClearMine(Mine,Show, Row, Col);
}
void menu(){
	printf("1..开始游戏\n");
	printf("2..结束\n");
}
void test(){
	menu();
	int input = 1;
	while (input){
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input){
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("请重新输入");
				break;
			}
		}
}
int main(){
	srand((unsigned int)time(0));
	test();
	system("pause");
	return 0;
}