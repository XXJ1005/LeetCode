//#include "common.h"
//#include "stdarg.h"
//
//int fun(int x, int y) {
//	return x - y;
//}
//
//int fun(int x, ...) {
//	va_list arg_ptr; // ��ͬ�� char *arg_ptr;
//
//	int nArgValue = x;
//	int nArgCout = 0; 
//	va_start(arg_ptr, x); // ��ȡ�ڶ��������ĵ�ַ
//
//	int sum = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		++nArgCout;
//		nArgValue = va_arg(arg_ptr, int); // ��arg_ptr��ָ�������س�int���ƶ�arg_ptrʹ��ָ���һ������
//		printf("the %d th arg: %d\n", i+1, nArgValue);     //�����������ֵ
//		sum += nArgValue;
//	}
//	return sum;
//}
//int main() {
//
//	cout << fun(0) << endl << endl;
//	cout << fun(1, 1) << endl << endl; // ����ƥ�䵽����int fun(int, int),���0
//	cout << fun(2, 3, 4) << endl << endl;
//	int jj;
//	cin >> jj;
//
//	return 0;
//}
//
////���������������ݽṹ:ջ����ʽ��ȡ,����������ջ
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