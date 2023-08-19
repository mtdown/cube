#pragma once
class Tetris
{
public:
	//构造函数接口，架构设计
    Tetris(int rows,int cols,int left,int right,int top,int blocksize);//形参是一种接口
	void init();
	void play();

private:
	void keyevent();
	void updatewindow();
	int getdelay();//返回距离上一次调用函数的时间
};

