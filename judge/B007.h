/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������쳲��������С�

쳲���������ָ��������һ�����У�
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144........
������дӵ�3�ʼ��ÿһ�����ǰ����֮�͡�

����
  ����n����0 < n <= 47��

���
  �����n��쳲��������Ƕ��١�

ʾ��
  ���룺
	4

  �����
	3
*/

#ifndef __B007__
#define __B007__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B007"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "����쳲���������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	unsigned int a = 1, b = 1;
		//	std::cin >> n;
		//	for (int i = 3; i <= n; ++i) {
		//		unsigned int t = a;
		//		a = b;
		//		b = t + a;
		//	}
		//	std::cout << b;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
