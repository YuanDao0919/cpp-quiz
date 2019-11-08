/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����������ļӼ��˳���������
����
  ����һ������a��һ���������+��-��*��/������һ������b��

���
  ��������

����˵����
  + a��b�Ľ��
  - a��b�Ľ��
  * a��b�Ľ��
  / a��b�Ľ����ʡ��С�����֣�
  X : �������
  (X�����+��-��*��/����������ַ�)

ʾ��
  ���룺
	2+3
  �����
	5
*/

#ifndef __A007__
#define __A007__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A007"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "���������ļӼ��˳�������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int a, b;
		//	char op;
		//	std::cin >> a >> op >> b;
		//	switch (op) {
		//	case '+':
		//		std::cout << a + b;
		//		break;
		//	case '-':
		//		std::cout << a - b;
		//		break;
		//	case '*':
		//		std::cout << a * b;
		//		break;
		//	case '/':
		//		std::cout << a / b;
		//		break;
		//	default:
		//		std::cout << "�������";
		//		break;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
