/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��һ�η�Χ�ڵ�����������

������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����
���������У�2 3 5 7 11 13 17 19 23 29 31 37 41.....
��ע�⣺1����������

����
  ����m��n����0 < m < n < 100000��

���
  ����С�����˳�����m��n��Χ�е�����������
  ע�⣺�����m~n������û��һ���������������nothing����

ʾ��
  ���룺
	2 20

  �����
	2 3 5 7 11 13 17 19
*/

#ifndef __B008__
#define __B008__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B008"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "һ�η�Χ�ڵ���������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int m, n;
		//	std::cin >> m >> n;
		//	if (m < 2) {
		//		m = 2;
		//	}
		//	bool has = false;
		//	while (m <= n) {
		//		bool prime = true;
		//		for (int i = 2; i < m; ++i) {
		//			if (m % i == 0) {
		//				prime = false;
		//				break;
		//			}
		//		}
		//		if (prime) {
		//			std::cout << m << " ";
		//			if (!has) {
		//				has = true;
		//			}
		//		}
		//		++m;
		//	}
		//	if (!has) {
		//		std::cout << "nothing";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
