#pragma once
class Tetris
{
public:
	//���캯���ӿڣ��ܹ����
    Tetris(int rows,int cols,int left,int right,int top,int blocksize);//�β���һ�ֽӿ�
	void init();
	void play();

private:
	void keyevent();
	void updatewindow();
	int getdelay();//���ؾ�����һ�ε��ú�����ʱ��
};

