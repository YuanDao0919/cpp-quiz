/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������������С�
����
  ����һЩ����δ֪��������

���
  �����Щ���������������������-1������³�����ֹ��

ʾ��
  ���룺
	3 6 -1 7 99
  �����
	3 6
*/

#ifndef __A026__
#define __A026__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A026"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�����������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	while (true) {
		//		int number;
		//		std::cin >> number;
		//		if (number != -1) {
		//			std::cout << number << " ";
		//		}
		//		else {
		//			break;
		//		}
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
