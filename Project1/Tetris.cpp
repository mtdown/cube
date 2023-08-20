#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int right, int top, int blocksize)
{
}

void Tetris::init()
{
	delay = 30;//这里修改延时
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

		if (timelast >= delay)
		{
			timelast = 0;
			drop();
			update = true;
		} 

		if (update)//为什么这里要用一个update来判断？
		{
			update = false;//经典PV互斥的思想，能保证不会并发运行，且可以在其他地方设置通过条件
			//如此就能把单一的条件扩大。从单判定变成多判定，那么以后在不能并发运行的程序时，就应该采用这种做法
			updatewindow();//渲染游戏画面

			//考虑游戏清行
			cleanline();
		}
		
	}
}

void Tetris::drop()
{
}

void Tetris::cleanline()
{
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
