#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a; 
	float b = 1.8;

	cin >> a;
	cout << "输入华氏度转化为摄氏度结果为：" <<setprecision(4)<< (a - 32) / b << endl;
}
//输出结果为输入华氏度转化为的摄氏度数值（但是如果不是三位数就无法保留两位小数了，不知道怎么改进）