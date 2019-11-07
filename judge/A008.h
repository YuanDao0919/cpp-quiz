/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����������ļӼ��˳�������II��
����
  ����һ������a��һ���������+��-��*��/������һ������b��

���
  ��������

����˵����
  + a��b�Ľ��
  - a��b�Ľ��
  * a��b�Ľ��
  / a��b�Ľ����������λС����
  X : �������
  (X�����+��-��*��/����������ַ�)

ʾ��
  ���룺
	2+3
  �����
	5
*/

#ifndef __A008__
#define __A008__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A008"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���������ļӼ��˳�������II");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	double a, b;
		//	char op;
		//	scanf("%lf%c%lf", &a, &op, &b);
		//	switch (op) {
		//	case '+':
		//		printf("%d", (int)(a + b));
		//		break;
		//	case '-':
		//		printf("%d", (int)(a - b));
		//		break;
		//	case '*':
		//		printf("%d", (int)(a * b));
		//		break;
		//	case '/':
		//		printf("%.2lf", a / b);
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
