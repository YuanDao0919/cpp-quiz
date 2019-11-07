/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������һ���еĵڼ��졿
����
  ����������������y��m��d���ֱ��ʾ�ꡢ�¡��ա�

���
  ����y��m��d�������һ���еĵڼ��졣����Ҫ��������������

������㷽����
  1.�ܱ�4�����Ҳ��ܱ�100��������������ꣻ
  2.�ܱ�400��������������ꡣ

ʾ��
  ���룺
	2019 12 31
  �����
	365
*/

#ifndef __B004__
#define __B004__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B004"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("����һ���еĵڼ���");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int year, month, day, count = 0;
		//	int monthdays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		//	std::cin >> year >> month >> day;

		//	count = day;
		//	for (int index = 1; index < month; ++index) {
		//		count += monthdays[index - 1];
		//	}

		//	if (month > 2) {
		//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		//			count += 1;
		//		}
		//	}

		//	std::cout << count;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
