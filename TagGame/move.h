#pragma once

struct move
{
	void up() {
		if (m.y < m.size - 1)
		{
			m.arrMap[m.y][m.x] = m.arrMap[m.y + 1][m.x];
			m.y++;
			m.arrMap[m.y][m.x] = 0;
		}		
	}
	void down() {
		if (m.y > 0)
		{
			m.arrMap[m.y][m.x] = m.arrMap[m.y - 1][m.x];
			m.y--;
			m.arrMap[m.y][m.x] = 0;
		}
	}
	void right() {
		if (m.x > 0)
		{
			m.arrMap[m.y][m.x] = m.arrMap[m.y][m.x - 1];
			m.x--;
			m.arrMap[m.y][m.x] = 0;
		}
	}
	void left() {
		if (m.x < m.size - 1)
		{
			m.arrMap[m.y][m.x] = m.arrMap[m.y][m.x + 1];
			m.x++;
			m.arrMap[m.y][m.x] = 0;
		}
	}

	void inputMove() {
		int move = static_cast<int> (_getch());
		switch (move)
		{
		case 72:
		{
			up(); break;
		}
		case 80:
		{
			down(); break;
		}
		case 77:
		{
			right(); break;
		}
		case 75:
		{
			left(); break;
		}

		default:
		{
			inputMove();
		}
		}
	}
}mv;