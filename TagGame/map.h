#pragma once
#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
//#include "timer.h"
using namespace std;

struct mapp
{
	const int size = 4;
	int map = size * size;
	int arrMap[4][4];
	int value = 0;
	int* numders = new int[map];
	int arrWinMap[4][4];
	int x;
	int y;

	void create_win_map() {
		int winValue = 1;
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				arrWinMap[i][j] = winValue;
				if (winValue == 16)
					arrWinMap[i][j] = 0;
				winValue++;
			}
		}
	}

	void create_game_map()
	{
		for (int i = 0; i < map; i++)
		{
			numders[i] = i;					//i+1 для провекри победы
		}
		//numders[15] = 0;					//проверка
		//swap(numders[15], numders[11]);  //проверка
		for (int i = 0; i < map; i++)
		{
			int rnd = rand() % map;
			swap(numders[i], numders[rnd]);
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				
				arrMap[i][j] = numders[value];
				
				if (numders[value] == 00)
				{
					x = j;
					y = i;
				}
				value++;

			}

		}
	}

	void print()
	{
		system("cls");
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arrMap[i][j] < 10 && arrMap[i][j] > 0) {
					cout << "0" << arrMap[i][j] << " ";
				}
				else if (arrMap[i][j] != 0)
				{
					cout << arrMap[i][j] << " ";
				}
				else {
					cout << "   ";
				}
			}
			cout << '\n';
		}
		/*cout << endl << endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arrWinMap[i][j] < 10 && arrWinMap[i][j] > 0) {
					cout << "0" << arrWinMap[i][j] << " ";
				}
				else if (arrWinMap[i][j] != 0)
				{
					cout << arrWinMap[i][j] << " ";
				}
				else {
					cout << "   ";
				}
			}
			cout << '\n';
		}
		*/
	}
} m;
