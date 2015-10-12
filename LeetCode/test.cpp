//#include "common.h"
//#include "stdarg.h"
//
//int fun(int x, int y) {
//	return x - y;
//}
//
//int fun(int x, ...) {
//	va_list arg_ptr; // 等同于 char *arg_ptr;
//
//	int nArgValue = x;
//	int nArgCout = 0; 
//	va_start(arg_ptr, x); // 获取第二个参数的地址
//
//	int sum = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		++nArgCout;
//		nArgValue = va_arg(arg_ptr, int); // 将arg_ptr所指参数返回成int并移动arg_ptr使其指向后一个参数
//		printf("the %d th arg: %d\n", i+1, nArgValue);     //输出各参数的值
//		sum += nArgValue;
//	}
//	return sum;
//}
//int main() {
//
//	cout << fun(0) << endl << endl;
//	cout << fun(1, 1) << endl << endl; // 优先匹配到函数int fun(int, int),输出0
//	cout << fun(2, 3, 4) << endl << endl;
//	int jj;
//	cin >> jj;
//
//	return 0;
//}
//
////函数参数是以数据结构:栈的形式存取,从右至左入栈
////void fun(int a, ...)
////{
////	int *temp = &a;
////	temp++;
////	for (int i = 0; i < a; ++i)
////	{
////		cout << *temp << endl;
////		temp++;
////	}
////}
////
////int main()
////{
////	int a = 1;
////	int b = 2;
////	int c = 3;
////	int d = 4;
////	fun(4, a, b, c, d);
////
////	system("pause");
////	return 0;
////}