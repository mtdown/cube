#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int right, int top, int blocksize)
{
}

void Tetris::init()
{
	delay = 30;//�����޸���ʱ
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

		if (timelast >= delay)
		{
			timelast = 0;
			drop();
			update = true;
		} 

		if (update)//Ϊʲô����Ҫ��һ��update���жϣ�
		{
			update = false;//����PV�����˼�룬�ܱ�֤���Ტ�����У��ҿ����������ط�����ͨ������
			//��˾��ܰѵ�һ���������󡣴ӵ��ж���ɶ��ж�����ô�Ժ��ڲ��ܲ������еĳ���ʱ����Ӧ�ò�����������
			updatewindow();//��Ⱦ��Ϸ����

			//������Ϸ����
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
