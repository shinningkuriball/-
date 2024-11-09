#include<iostream>
#include<iomanip>
using namespace std;
int main()
{


	unsigned int textUnit = 65534;
	cout << "output in unsigned int 1 type:" << textUnit << endl;
	cout << "output in char type:" << static_cast<char>(textUnit) << endl;//为什么char的无法显示?
	cout << "output in short type:" << static_cast<short>(textUnit) << endl;//到达限度后从头开始算
	cout << "output in int type:" << static_cast<int>(textUnit) << endl;
	cout << "output in double type：" << static_cast<double>(textUnit) << endl;
	cout << "output in double type：" << setprecision(4) << static_cast<double>(textUnit) << endl;
	cout << "output in hex unsign int type:" << hex << textUnit << endl;
	cout << "output in oct unsign int type:" << oct << textUnit << endl;//转化为8进制结果为177776
	system("pause");
	return 0;
	/*输出结果：output in unsigned int 1 type:65534
	            output in char type:
	            output in short type:-2
	            output in int type:65534
	            output in double type：65534
	            output in double type：6.553e+04
	            output in hex unsign int type:fffe
				output in oct unsign int type:177776
	*/


}