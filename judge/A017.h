/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����0��N���������С�
����
  ����һ������N��

���
  ��С�������������0��N������������

ʾ��
  ���룺
	5
  �����
	0 1 2 3 4 5
*/

#ifndef __A017__
#define __A017__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A017"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��0��N����������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	std::cin >> n;
		//	for (int i = 0; i <= n; ++i) {
		//		std::cout << i << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
