/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

���ж����꡿
����
  �������m��

���
  ���m�����꣬�����YES�������������NO����

������㷽����
  1.�ܱ�4�����Ҳ��ܱ�100��������������ꣻ
  2.�ܱ�400��������������ꡣ

ʾ��
  ���룺
	1696
  �����
	YES
*/

#ifndef __B003__
#define __B003__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B003"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("�ж�����");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int year;
		//	std::cin >> year;
		//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		//		std::cout << "YES";
		//	}
		//	else {
		//		std::cout << "NO";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
