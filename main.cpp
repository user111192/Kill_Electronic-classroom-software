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

	HANDLE handle; //������� 
	handle=GetStdHandle(STD_OUTPUT_HANDLE); // ȡ��׼���������� 
	SetConsoleTextAttribute(handle,0xA);
	cout<<endl<<endl<<"                                   ���ӽ���ɱ��"<<endl;
	cout<<"                                  ״̬:Ŀǰ���Է���"<<endl;
	cout<<"                          ��֩���ý��������� - ���� 1  ���ɷ���"<<endl;
	cout<<"                          ������ӽ��� - ���� 2  ���ɷ���"<<endl;
	cout<<"                          ٤���������ӽ��� - ���� 3  ���ɷ���"<<endl;
	cout<<"                          ������ӽ��� - ���� 4  ���ɷ���"<<endl;
	cout<<"                          �����ƽ� - ���� 5  ��������"<<endl;
	cout<<" ʲô�������ֻ�����Ϊ�������������У����ǾͰ��� 6 ���԰�(��ctrl + c / break�˳�)"<<endl;
	cout<<"                                 ���෴�����߼�������......"<<endl;
	cout<<"                             PS:����ڿ����������ֱ�ӹرձ�����"<<endl;
	cout<<"                                     ���η�������Ч��"<<endl;
	cout<<"    input >>> ";
	string s;
	cin>>s;
	if(s=="1") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = "��֩�뷴��ϵͳ�����ɹ�";
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
			system("if %errorlevel% neq 0 (echo error: �޷�ɱ�����ӽ������)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ��ɱ�ɹ�����";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"���ǻ������������� ";
			system("color 1a");
			cout<<"���ǻ������������� ";
			system("color 2b");
			cout<<"���ǻ������������� ";
			system("color 3c");
			cout<<"���ǻ������������� ";
			system("color 4d");
			cout<<"���ǻ������������� ";
			system("color 5e");
			cout<<"���ǻ������������� ";
			system("color 6f");
			cout<<"���ǻ������������� ";
			system("color a1");
			cout<<"���ǻ������������� ";
			system("color b2");
			cout<<"���ǻ������������� ";
			system("color c3");
			cout<<"���ǻ������������� ";
			system("color d4");
			cout<<"���ǻ������������� ";
			system("color e5");
			cout<<"���ǻ������������� ";
			system("color f6");
			cout<<"���ǻ������������� ";
			system("color 70");
			cout<<"���ǻ������������� ";
			system("color 07");
		}
	}
	if(s=="2") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = "���򷴻�ϵͳ�����ɹ�";
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
			system("if %errorlevel% neq 0 (echo error: �޷�ɱ�����ӽ������)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ��ɱ�ɹ�����";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"���ǻ������������� ";
			system("color 1a");
			cout<<"���ǻ������������� ";
			system("color 2b");
			cout<<"���ǻ������������� ";
			system("color 3c");
			cout<<"���ǻ������������� ";
			system("color 4d");
			cout<<"���ǻ������������� ";
			system("color 5e");
			cout<<"���ǻ������������� ";
			system("color 6f");
			cout<<"���ǻ������������� ";
			system("color a1");
			cout<<"���ǻ������������� ";
			system("color b2");
			cout<<"���ǻ������������� ";
			system("color c3");
			cout<<"���ǻ������������� ";
			system("color d4");
			cout<<"���ǻ������������� ";
			system("color e5");
			cout<<"���ǻ������������� ";
			system("color f6");
			cout<<"���ǻ������������� ";
			system("color 70");
			cout<<"���ǻ������������� ";
			system("color 07");
		}
	}
	if(s=="3") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = "٤����������ϵͳ�����ɹ�";
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
			system("if %errorlevel% neq 0 (echo error: �޷�ɱ�����ӽ������)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ��ɱ�ɹ�����";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"���ǻ������������� ";
			system("color 1a");
			cout<<"���ǻ������������� ";
			system("color 2b");
			cout<<"���ǻ������������� ";
			system("color 3c");
			cout<<"���ǻ������������� ";
			system("color 4d");
			cout<<"���ǻ������������� ";
			system("color 5e");
			cout<<"���ǻ������������� ";
			system("color 6f");
			cout<<"���ǻ������������� ";
			system("color a1");
			cout<<"���ǻ������������� ";
			system("color b2");
			cout<<"���ǻ������������� ";
			system("color c3");
			cout<<"���ǻ������������� ";
			system("color d4");
			cout<<"���ǻ������������� ";
			system("color e5");
			cout<<"���ǻ������������� ";
			system("color f6");
			cout<<"���ǻ������������� ";
			system("color 70");
			cout<<"���ǻ������������� ";
			system("color 07");
		}
	}
	if(s=="4") {
		system("cls");
		char str[100] = " ������ӽ��ҷ���ϵͳ�����ɹ�";
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
			system("if %errorlevel% neq 0 (echo error: �޷�ɱ�����ӽ������)");
			system("cls");
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ��ɱ�ɹ�����";
		Sleep(1000);
		system("cls");
		while(1) {
			cout<<"���ǻ������������� ";
			system("color 1a");
			cout<<"���ǻ������������� ";
			system("color 2b");
			cout<<"���ǻ������������� ";
			system("color 3c");
			cout<<"���ǻ������������� ";
			system("color 4d");
			cout<<"���ǻ������������� ";
			system("color 5e");
			cout<<"���ǻ������������� ";
			system("color 6f");
			cout<<"���ǻ������������� ";
			system("color a1");
			cout<<"���ǻ������������� ";
			system("color b2");
			cout<<"���ǻ������������� ";
			system("color c3");
			cout<<"���ǻ������������� ";
			system("color d4");
			cout<<"���ǻ������������� ";
			system("color e5");
			cout<<"���ǻ������������� ";
			system("color f6");
			cout<<"���ǻ������������� ";
			system("color 70");
			cout<<"���ǻ������������� ";
			system("color 07");
		}
	}
	if(s=="5") {
		system("cls");
		cout<<"                             "<<endl<<endl<<endl<<endl<<"                             ";
		char str[100] = " ���÷���ϵͳ�����ɹ�";
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
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ��ɱ�ɹ�����";
		Sleep(1000);
		system("cls");
		Sleep(1000);
		while(1) {
			cout<<"���ǻ������������� ";
			system("color 1a");
			cout<<"���ǻ������������� ";
			system("color 2b");
			cout<<"���ǻ������������� ";
			system("color 3c");
			cout<<"���ǻ������������� ";
			system("color 4d");
			cout<<"���ǻ������������� ";
			system("color 5e");
			cout<<"���޸Ĺ�����Ĵ��� ";
			system("color 6f");
			cout<<"���ǻ������������� ";
			system("color a1");
			cout<<"���ǻ������������� ";
			system("color b2");
			cout<<"���ǻ������������� ";
			system("color c3");
			cout<<"���ǻ������������� ";
			system("color d4");
			cout<<"���ǻ������������� ";
			system("color e5");
			cout<<"���ǻ������������� ";
			system("color f6");
			cout<<"���ǻ������������� ";
			system("color 70");
			cout<<"���ǻ������������� "; 
			system("color 07");
		}
	}
	if(s=="6") {
		system("cls");
		while(1) {
			cout<<"���ǻ������������� ";
			system("color 1a");
			cout<<"���ǻ������������� ";
			system("color 2b");
			cout<<"���ǻ������������� ";
			system("color 3c");
			cout<<"���ǻ������������� ";
			system("color 4d");
			cout<<"���ǻ������������� ";
			system("color 5e");
			cout<<"���ǻ������������� ";
			system("color 6f");
			cout<<"���ǻ������������� ";
			system("color a1");
			cout<<"���ǻ������������� ";
			system("color b2");
			cout<<"���ǻ������������� ";
			system("color c3");
			cout<<"���ǻ������������� ";
			system("color d4");
			cout<<"���ǻ������������� ";
			system("color e5");
			cout<<"���ǻ������������� ";
			system("color f6");
			cout<<"���ǻ������������� ";
			system("color 70");
			cout<<"���ǻ������������� ";
			system("color 07");
		}
	} else {
		SetConsoleTextAttribute(handle,0x4);
		cout<<"���������������������"<<endl;
		string dddd = "";
		for (int i = 1;i <= sizeof(s);i++) {
			dddd = dddd + "~";
		}
		cout<<endl<<s<<": ��<Option>��Ϊһ����Ч��ѡ��������Ƶ�ƴд��Ȼ������һ�Ρ�\n\
����λ�� ��:1 �ַ�: 1\n\
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
		int erl = system("��֩�롢����gakataka�ƽ�.exe");system("cls"); // ��֩�롢����gakataka�ƽ�.exe 
		//if (erl != 0) {erl = system("dzjs_kill.exe");system("cls");}
		//if (erl != 0) {erl = system("���ӽ���.crack.exe");system("cls");}
		Sleep(800);
		system("cls");
		if (erl != 0) {
			SetConsoleTextAttribute(handle,0x4);
			cout << "dzjs_kill.exe : �޷�����dzjs_kill.exe����ʶ��Ϊ cmdlet���������ű��ļ�������г�������ơ��������Ƶ�ƴд���������·������ȷ��·����ȷ��Ȼ������һ�Ρ�\n\
����λ�� ��:1 �ַ�: 1\n\
+ dzjs_kill.exe\n\
+ ~~~~~~~~~~~~~\n\
    + CategoryInfo          : ObjectNotFound: (d:String) [], CommandNotFoundException\n\
    + FullyQualifiedErrorId : CommandNotFoundException" << endl;
			SetConsoleTextAttribute(handle,0x6);
			cout << "����: �ļ������ѱ��޸�, ����ܵ����������ʹ�á�" << endl;
			system("pause>nul");
			SetConsoleTextAttribute(handle,0xA);
			cout << "���򼴽��˳�! ���η�������Ч! ";
			Sleep(800); 
		}
	}
	return 0;
}

