/*************************
* File: print_calc_num1.cpp

* Author: yinganmin6837@163.com(Ganmin Yin)

* Time: 2018/04/21

* Information:
*** This file prints out the results of integers that were entered 
*** into inputNum[100] calculated by a recursive method.
*** And for some unreasonale values, it will return the corresponding
*** error message and will not terminate.

**************************/

#include<iostream>
#include "print_calc_num1.h"
#include "calc_recur.h"

using namespace std;

extern int inputNum[100];

/*******print_calc_num1*******/
void print_calc_num1()
{
	system("cls");
	cout<<"����Ϊ��������"<<endl;
	int i,n;
	//�����������ܹ����ش�����Ϣ 
	for(i=0;inputNum[i]!=0;i++)
	{
		n = inputNum[i];
		if(n<0)
		{
			cout<<"����Ϊ���������ܼ���"<<endl;
			continue;
		}
		if(n>200)
		{
			cout<<n<<"����200������������Ҫ��"<<endl;
			continue;
		}
		cout<<calc_recur(n)<<endl;
	}
	cout<<"Bye!\n"<<endl;
	system("pause");
	return ;
}