/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

���������С�
����
  ������������M��N����M <= N��

���
  ��С�������������M��N��Χ�ڵ�����������

ʾ��
  ���룺
	0 10
  �����
	1 3 5 7 9
*/

#ifndef __A020__
#define __A020__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A020"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int m, n;
		//	std::cin >> m >> n;
		//	for (int i = m; i <= n; ++i) {
		//		if (i % 2 == 1) {
		//			std::cout << i << " ";
		//		}
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
