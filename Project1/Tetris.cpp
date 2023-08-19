#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int right, int top, int blocksize)
{
}

void Tetris::init()
{
}

void Tetris::play()
{
	init();//初始化

	int timelast = 0;

	while (1)
	{
		//接收用户的输入
		keyevent();

		//控制运行间隔
		timelast += getdelay();
		//渲染游戏画面
		updatewindow();
	}
}

void Tetris::keyevent()
{
	//to do
}

void Tetris::updatewindow()
{
	}

int Tetris::getdelay()
{ 
	return 0;
}
