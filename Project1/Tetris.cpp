#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int right, int top, int blocksize)
{
}

void Tetris::init()
{
}

void Tetris::play()
{
	init();//��ʼ��

	int timelast = 0;

	while (1)
	{
		//�����û�������
		keyevent();

		//�������м��
		timelast += getdelay();
		//��Ⱦ��Ϸ����
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
