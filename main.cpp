#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize(3,"Ofast","inline")
#pragma GCC optimize(1)
#pragma GCC optimize(4)
#pragma GCC optimize(5)
#pragma GCC optimize(6)
#pragma GCC optimize(7)
#pragma GCC optimize(8)
#pragma GCC optimize(9)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;
void movexy(short x, short y) {
	COORD position= {x, y};
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, position);
}
int main() {

	HANDLE handle; //创建句柄 
	handle=GetStdHandle(STD_OUTPUT_HANDLE); // 取标准输入输出句柄 
	SetConsoleTextAttribute(handle,0xA);
	cout<<endl<<endl<<"                                   电子教室杀手"<<endl;
	cout<<"                                  状态:目前可以反击"<<endl;
	cout<<"                          红蜘蛛多媒体网络教室 - 输入 1  即可反击"<<endl;
	cout<<"                          极域电子教室 - 输入 2  即可反击"<<endl;
	cout<<"                          伽卡他卡电子教室 - 输入 3  即可反击"<<endl;
	cout<<"                          传奇电子教室 - 输入 4  即可反击"<<endl;
	cout<<"                          万能破解 - 输入 5  即可死机"<<endl;
	cout<<" 什么？如果你只是想成为机房里最靓的仔！？那就按下 6 试试吧(按ctrl + c / break退出)"<<endl;
	cout<<"                                 更多反击工具即将更新......"<<endl;
	cout<<"                             PS:如果在开启本程序后直接关闭本程序，"<<endl;
	cout<<"                                     本次反击将无效！"<<endl;
	cout<<"    input >>> ";
	string s;
	cin>>s;
	if(s=="1") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = "红蜘蛛反击系统启动成功";
		for(int i = 0; i < strlen(str);) {
			int j;
			char s[3];
			for( j = 0; j < 2; ++j ) {
				s[j] = str[i++];
			}
			s[j] = '\0';
			printf("%s",s);
			Sleep(50);
		}
		cout << endl;
		Sleep(1000);
		cout<<endl;
		for(int i=1; i<=5; i++) {
			system("taskkill /f /t /im studentmain.exe");
			system("if %errorlevel% neq 0 (echo error: 无法杀死电子教室软件)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 击杀成功！！";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"我是机房里最靓的仔 ";
			system("color 1a");
			cout<<"我是机房里最靓的仔 ";
			system("color 2b");
			cout<<"我是机房里最靓的仔 ";
			system("color 3c");
			cout<<"我是机房里最靓的仔 ";
			system("color 4d");
			cout<<"我是机房里最靓的仔 ";
			system("color 5e");
			cout<<"我是机房里最靓的仔 ";
			system("color 6f");
			cout<<"我是机房里最靓的仔 ";
			system("color a1");
			cout<<"我是机房里最靓的仔 ";
			system("color b2");
			cout<<"我是机房里最靓的仔 ";
			system("color c3");
			cout<<"我是机房里最靓的仔 ";
			system("color d4");
			cout<<"我是机房里最靓的仔 ";
			system("color e5");
			cout<<"我是机房里最靓的仔 ";
			system("color f6");
			cout<<"我是机房里最靓的仔 ";
			system("color 70");
			cout<<"我是机房里最靓的仔 ";
			system("color 07");
		}
	}
	if(s=="2") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = "极域反击系统启动成功";
		for(int i = 0; i < strlen(str);) {
			int j;
			char s[3];
			for( j = 0; j < 2; ++j ) {
				s[j] = str[i++];
			}
			s[j] = '\0';
			printf("%s",s);
			Sleep(50);
		}
		cout<<endl;
		Sleep(1000);
		cout<<endl;
		for(int i=1; i<=5; i++) {
			system("taskkill /f /t /im studentmain.exe");
			system("if %errorlevel% neq 0 (echo error: 无法杀死电子教室软件)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 击杀成功！！";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"我是机房里最靓的仔 ";
			system("color 1a");
			cout<<"我是机房里最靓的仔 ";
			system("color 2b");
			cout<<"我是机房里最靓的仔 ";
			system("color 3c");
			cout<<"我是机房里最靓的仔 ";
			system("color 4d");
			cout<<"我是机房里最靓的仔 ";
			system("color 5e");
			cout<<"我是机房里最靓的仔 ";
			system("color 6f");
			cout<<"我是机房里最靓的仔 ";
			system("color a1");
			cout<<"我是机房里最靓的仔 ";
			system("color b2");
			cout<<"我是机房里最靓的仔 ";
			system("color c3");
			cout<<"我是机房里最靓的仔 ";
			system("color d4");
			cout<<"我是机房里最靓的仔 ";
			system("color e5");
			cout<<"我是机房里最靓的仔 ";
			system("color f6");
			cout<<"我是机房里最靓的仔 ";
			system("color 70");
			cout<<"我是机房里最靓的仔 ";
			system("color 07");
		}
	}
	if(s=="3") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = "伽卡他卡反击系统启动成功";
		for(int i = 0; i < strlen(str);) {
			int j;
			char s[3];
			for( j = 0; j < 2; ++j ) {
				s[j] = str[i++];
			}
			s[j] = '\0';
			printf("%s",s);
			Sleep(50);
		}
		cout<<endl;
		Sleep(1000);
		cout<<endl;
		for(int i=1; i<=5; i++) {
			system("taskkill /f /t /im student.exe");
			system("if %errorlevel% neq 0 (echo error: 无法杀死电子教室软件)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 击杀成功！！";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"我是机房里最靓的仔 ";
			system("color 1a");
			cout<<"我是机房里最靓的仔 ";
			system("color 2b");
			cout<<"我是机房里最靓的仔 ";
			system("color 3c");
			cout<<"我是机房里最靓的仔 ";
			system("color 4d");
			cout<<"我是机房里最靓的仔 ";
			system("color 5e");
			cout<<"我是机房里最靓的仔 ";
			system("color 6f");
			cout<<"我是机房里最靓的仔 ";
			system("color a1");
			cout<<"我是机房里最靓的仔 ";
			system("color b2");
			cout<<"我是机房里最靓的仔 ";
			system("color c3");
			cout<<"我是机房里最靓的仔 ";
			system("color d4");
			cout<<"我是机房里最靓的仔 ";
			system("color e5");
			cout<<"我是机房里最靓的仔 ";
			system("color f6");
			cout<<"我是机房里最靓的仔 ";
			system("color 70");
			cout<<"我是机房里最靓的仔 ";
			system("color 07");
		}
	}
	if(s=="4") {
		system("cls");
		char str[100] = " 传奇电子教室反击系统启动成功";
		for(int i = 0; i < strlen(str);) {
			int j;
			char s[3];
			for( j = 0; j < 2; ++j ) {
				s[j] = str[i++];
			}
			s[j] = '\0';
			printf("%s",s);
			Sleep(50);
		}
		Sleep(1000);
		cout<<endl;
		for(int i=1; i<=5; i++) {
			system("taskkill /f /t /im studentmain.exe");
			system("if %errorlevel% neq 0 (echo error: 无法杀死电子教室软件)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 击杀成功！！";
		Sleep(1000);
		system("cls");
		while(1) {
			cout<<"我是机房里最靓的仔 ";
			system("color 1a");
			cout<<"我是机房里最靓的仔 ";
			system("color 2b");
			cout<<"我是机房里最靓的仔 ";
			system("color 3c");
			cout<<"我是机房里最靓的仔 ";
			system("color 4d");
			cout<<"我是机房里最靓的仔 ";
			system("color 5e");
			cout<<"我是机房里最靓的仔 ";
			system("color 6f");
			cout<<"我是机房里最靓的仔 ";
			system("color a1");
			cout<<"我是机房里最靓的仔 ";
			system("color b2");
			cout<<"我是机房里最靓的仔 ";
			system("color c3");
			cout<<"我是机房里最靓的仔 ";
			system("color d4");
			cout<<"我是机房里最靓的仔 ";
			system("color e5");
			cout<<"我是机房里最靓的仔 ";
			system("color f6");
			cout<<"我是机房里最靓的仔 ";
			system("color 70");
			cout<<"我是机房里最靓的仔 ";
			system("color 07");
		}
	}
	if(s=="5") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = " 万用反击系统启动成功";
		for(int i = 0; i < strlen(str);) {
			int j;
			char s[3];
			for( j = 0; j < 2; ++j ) {
				s[j] = str[i++];
			}
			s[j] = '\0';
			printf("%s",s);
			Sleep(50);
		}
		Sleep(1000);
		cout<<endl;
		for(int i=1; i<=5; i++) {
//    		system("taskkill -f -fi \"pid ne 1\"");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 击杀成功！！";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"我是机房里最靓的仔 ";
			system("color 1a");
			cout<<"我是机房里最靓的仔 ";
			system("color 2b");
			cout<<"我是机房里最靓的仔 ";
			system("color 3c");
			cout<<"我是机房里最靓的仔 ";
			system("color 4d");
			cout<<"我是机房里最靓的仔 ";
			system("color 5e");
			cout<<"我修改过程序的代码 ";
			system("color 6f");
			cout<<"我是机房里最靓的仔 ";
			system("color a1");
			cout<<"我是机房里最靓的仔 ";
			system("color b2");
			cout<<"我是机房里最靓的仔 ";
			system("color c3");
			cout<<"我是机房里最靓的仔 ";
			system("color d4");
			cout<<"我是机房里最靓的仔 ";
			system("color e5");
			cout<<"我是机房里最靓的仔 ";
			system("color f6");
			cout<<"我是机房里最靓的仔 ";
			system("color 70");
			cout<<"我是机房里最靓的仔 "; 
			system("color 07");
		}
	}
	if(s=="6") {
		system("cls");
		while(1) {
			cout<<"我是机房里最靓的仔 ";
			system("color 1a");
			cout<<"我是机房里最靓的仔 ";
			system("color 2b");
			cout<<"我是机房里最靓的仔 ";
			system("color 3c");
			cout<<"我是机房里最靓的仔 ";
			system("color 4d");
			cout<<"我是机房里最靓的仔 ";
			system("color 5e");
			cout<<"我是机房里最靓的仔 ";
			system("color 6f");
			cout<<"我是机房里最靓的仔 ";
			system("color a1");
			cout<<"我是机房里最靓的仔 ";
			system("color b2");
			cout<<"我是机房里最靓的仔 ";
			system("color c3");
			cout<<"我是机房里最靓的仔 ";
			system("color d4");
			cout<<"我是机房里最靓的仔 ";
			system("color e5");
			cout<<"我是机房里最靓的仔 ";
			system("color f6");
			cout<<"我是机房里最靓的仔 ";
			system("color 70");
			cout<<"我是机房里最靓的仔 ";
			system("color 07");
		}
	} else {
		SetConsoleTextAttribute(handle,0x4);
		cout<<"您输入的有误，请重新输入"<<endl;
		string dddd = "";
		for (int i = 1;i <= sizeof(s);i++) {
			dddd = dddd + "~";
		}
		cout<<endl<<s<<": “<Option>”为一个无效的选项。请检查名称的拼写，然后再试一次。\n\
所在位置 行:1 字符: 1\n\
+ "+s+"\n+ " + dddd +"\n\
    + CategoryInfo          : ObjectNotFound: (a:String) [], CommandNotFoundException\n\
    + FullyQualifiedErrorId : CommandNotFoundException" << endl;
		SetConsoleTextAttribute(handle,0xA);
		char str[100] = "loading...";
		for(int i = 0; i < strlen(str);) {
			int j;
			char s[3];
			for( j = 0; j < 2; ++j ) {
				s[j] = str[i++];
			}
			s[j] = '\0';
			printf("%s",s);
			Sleep(50);
		}

		for(int i=1; i<=50; i++) {
			cout<<"--";
			Sleep(10);
		}
		Sleep(1000);
		system("cls");
		int erl = system("红蜘蛛、极域、gakataka破解.exe");system("cls"); // 红蜘蛛、极域、gakataka破解.exe 
		//if (erl != 0) {erl = system("dzjs_kill.exe");system("cls");}
		//if (erl != 0) {erl = system("电子教室.crack.exe");system("cls");}
		Sleep(800);
		system("cls");
		if (erl != 0) {
			SetConsoleTextAttribute(handle,0x4);
			cout << "dzjs_kill.exe : 无法将“dzjs_kill.exe”项识别为 cmdlet、函数、脚本文件或可运行程序的名称。请检查名称的拼写，如果包括路径，请确保路径正确，然后再试一次。\n\
所在位置 行:1 字符: 1\n\
+ dzjs_kill.exe\n\
+ ~~~~~~~~~~~~~\n\
    + CategoryInfo          : ObjectNotFound: (d:String) [], CommandNotFoundException\n\
    + FullyQualifiedErrorId : CommandNotFoundException" << endl;
			SetConsoleTextAttribute(handle,0x6);
			cout << "警告: 文件名称已被修改, 这可能导致软件不能使用。" << endl;
			system("pause>nul");
			SetConsoleTextAttribute(handle,0xA);
			cout << "程序即将退出! 本次反击将无效! ";
			Sleep(800); 
		}
	}
	return 0;
}

