// helloworld.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "test.h"
//#include "test.h"
#include <iomanip>
void printf();
using namespace std;
using std::setw;
//#define WS1
//#define WS2
//#define WS3
#define WS5
int _tmain(int argc, _TCHAR* argv[])
{
#ifdef WS1
	printf("helloworld!\n");
	std::cout<<"helloworld"<<std::endl;
#endif
#ifdef WS2
	char sz[10]={0};
	strcpy_s(sz,"hello");
	cout<<sz<<endl;
	char *psz=new char[128];
	strcpy_s(psz,12,"hellow");
	cout<<psz<<endl;
	delete psz;
#endif
#ifdef WS3
	MessageBox( NULL, TEXT("HelloWorld��"), TEXT("Information"), 0 );
#endif
#ifdef WS4
	int num1 =1234 ,num2 = 5678;
	cout << endl;
	cout << "wangshen" << setw(6) <<num1 << setw(6) <<"wls"<< num2 << "wanghse"<< endl;
#endif
#ifdef WS5
	printf();
#endif


	return 0;
}
#ifdef WS5
 void printf()
{
	cout<<"wangshen"<<endl;
}
#endif
 /*
 ��̬���������ã���̬����������Դ�ļ�����ʹ�ã����Կ��Ժ�����Դ�ļ��е�����һ������ͬ�������������һ���Ѿ����ڵĺ������������þ�̬����
 Ϊʲô���printf ��Ȼ����ʹ��*/