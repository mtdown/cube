/*开发日志
2.设计项目架构
用类来包装BLOCK和Tetris两块
3.设计各个模块的主要接口  
4.开始项目

*/
#include "Tetris.h"

int main()
{
	Tetris game(20, 10, 163, 163,999, 36);
	//上面这一步由下面连接确定
	//https://www.bilibili.com/video/BV1ia411K7AE/?p=2&spm_id_from=333.880.my_history.page.click&vd_source=ecbe42ffb25fea0da636165433fb75d6
	game.play();
	return 0;
}