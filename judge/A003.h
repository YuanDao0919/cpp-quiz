/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������֮�еĽϴ�����
����
  ������������a, b��

���
  ���a, b�нϴ������

ʾ��
  ���룺
	5 3
  �����
	5
*/

#ifndef __A003__
#define __A003__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A003"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "����֮�еĽϴ���") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int a, b;
		//	std::cin >> a >> b;
		//	if (a > b) {
		//		std::cout << a;
		//	}
		//	else {
		//		std::cout << b;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
