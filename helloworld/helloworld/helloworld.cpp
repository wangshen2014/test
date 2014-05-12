// helloworld.cpp : 定义控制台应用程序的入口点。
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
	MessageBox( NULL, TEXT("HelloWorld！"), TEXT("Information"), 0 );
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
 静态函数的作用：静态函数在其他源文件不能使用，所以可以和其他源文件中的另外一个函数同名。如果你想用一个已经存在的函数名，可以用静态函数
 为什么这个printf 仍然可以使用*/