/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������֮�еĽϴ�����
����
  ������������a, b, c��

���
  ���a, b, c�нϴ������

ʾ��
  ���룺
	5 3 1
  �����
	5
*/

#ifndef __A004__
#define __A004__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A004"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "����֮�еĽϴ���") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int a, b, c;
		//	std::cin >> a >> b >> c;
		//	int max = a;
		//	if (max < b) {
		//		max = b;
		//	}
		//	if (max < c) {
		//		max = c;
		//	}
		//	std::cout << max;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
