/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��N�������е��������
����
  �����ڵ�һ�и���һ������N�����һ�и���N��������

���
  ���N�������е��������

ʾ��
  ���룺
	5
	9 100 769 -1 123

  �����
	769
*/

#ifndef __B001__
#define __B001__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B001"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "N�������е������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	int max;
		//	std::cin >> n;
		//	std::cin >> max;
		//	for (int i = 1; i < n; ++i) {
		//		int v;
		//		std::cin >> v;
		//		if (max < v) {
		//			max = v;
		//		}
		//	}
		//	std::cout << max;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
