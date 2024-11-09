/*2.求圆锥的体积：要求键盘输入圆锥底的半径、锥高，使用标识符常量定义圆周率。
(1)创建一个控制台项目
(2)在文件中输入程序内容，存盘
(3)编译、连接、运行；观察结果*/
#include<iostream>
using namespace std;
int main()
{
	int r, l; int PAI = 'a';

	cin >> r >> l;//r是底面圆半径，l是圆锥的高

	int V = (1 % 3) * l * PAI * r * r;
	cout << "圆锥的体积V=" << V << endl;
	//输出结果为圆锥的体积
}