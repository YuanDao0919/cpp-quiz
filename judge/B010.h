/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����������

����
  ��һ�У���������N�������������N����������0 < N < 20����
  �ڶ��У�����N��������

���
  ��N��������С��������������

ʾ��
  ���룺
	5
	3 2 5 1 4

  �����
	1 2 3 4 5
*/

#ifndef __B010__
#define __B010__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B010"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	int a[20] = { 0 };
		//	std::cin >> n;

		//	for (int i = 0; i < n; ++i) {
		//		std::cin >> a[i];
		//	}

		//	for (int i = 0; i < n - 1; ++i) {
		//		int target = i;
		//		for (int j = i + 1; j < n; ++j) {
		//			if (a[target] > a[j]) {
		//				target = j;
		//			}
		//		}
		//		if (target != i) {
		//			int t = a[target];
		//			a[target] = a[i];
		//			a[i] = t;
		//		}
		//	}

		//	for (int i = 0; i < n; ++i) {
		//		std::cout << a[i] << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
