/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����ӡ���Ρ�
����
  ��һ�У�����һ������N����0 <= N <= 50��

���
  ���һ�����Σ��þ�����N�У�ÿ����5���Ǻš�

ʾ��
  ���룺
	6
  �����
	*****
	*****
	*****
	*****
	*****
	*****
*/

#ifndef __A041__
#define __A041__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A041"

namespace foxzzz {

	class TheJudge : public StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "��ӡ����") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int count;
		//	std::cin >> count;
		//	for (int i = 0; i < count; ++i) {
		//		std::cout << "*****" << std::endl;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
