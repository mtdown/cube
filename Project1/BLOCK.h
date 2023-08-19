#pragma once
class BLOCK
{
	//对于关于方块移动方式的函数的头文件，仅包含注释，不包括具体的构成
    public:
	BLOCK();//上下左右
	void drop();
	void left();
	void right();
	void relate();//旋转
	void draw(int leftmarigin, int topmargin);
};

