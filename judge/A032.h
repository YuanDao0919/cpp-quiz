/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����������������ֵ��
����
  ����һЩ����δ֪�����������������������-1�������ʾ���������

���
  ������Щ���������ֵ������������-1�������ڡ�

ʾ��
  ���룺
	1 2 3 4 5 -1
  �����
	5
*/

#ifndef __A032__
#define __A032__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A032"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "���������������ֵ") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int max;
		//	std::cin >> max;
		//	while (true) {
		//		int number;
		//		std::cin >> number;
		//		if (number == -1) break;
		//		if (max < number) {
		//			max = number;
		//		}
		//	}
		//	std::cout << max;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
