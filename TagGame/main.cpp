#include <iostream>
#include "map.h"
#include "move.h"
//#include "timer.h"
#include <ctime>

using namespace std;

struct winner
{
	bool win() {
		if (m.arrMap[0][0] == m.arrWinMap[0][0])
			if (m.arrMap[0][1] == m.arrWinMap[0][1])
				if (m.arrMap[0][2] == m.arrWinMap[0][2])
					if (m.arrMap[0][3] == m.arrWinMap[0][3])
						if (m.arrMap[1][0] == m.arrWinMap[1][0])
							if (m.arrMap[1][1] == m.arrWinMap[1][1])
								if (m.arrMap[1][2] == m.arrWinMap[1][2])
									if (m.arrMap[1][3] == m.arrWinMap[1][3])
										if (m.arrMap[2][0] == m.arrWinMap[2][0])
											if (m.arrMap[2][1] == m.arrWinMap[2][1])
												if (m.arrMap[2][2] == m.arrWinMap[2][2])
													if (m.arrMap[2][3] == m.arrWinMap[2][3])
														if (m.arrMap[3][0] == m.arrWinMap[3][0])
															if (m.arrMap[3][1] == m.arrWinMap[3][1])
																if (m.arrMap[3][2] == m.arrWinMap[3][2])
																	if (m.arrMap[3][3] == m.arrWinMap[3][3])
																		return true;
		return false;
		/*for (size_t i = 0; i < m.size; i++)
		{
			for (size_t j = 0; j < m.size; j++) {
				if (m.arrMap[i][j] == m.arrWinMap[i][j])
					return true;
				return false;
			}
		}*/
		//if (m.arrMap == m.arrWinMap)
		//	return true;
		//return false;

	}
}w;

void main() {
	srand(time(NULL));
	m.create_win_map();
	m.create_game_map();
	int start = clock();
	int cnt = 0;

	while (!w.win()) {

		m.print();
		mv.inputMove();
		cnt++;
	}
	
	system("cls");
	int end = clock();
	int sec = (end - start) / 1000;
	cout << " YOU WIN!!!" << endl << "   " << "Number of moves: " << cnt << endl << "time: " << sec << " sec" << endl;

	system("pause");
}