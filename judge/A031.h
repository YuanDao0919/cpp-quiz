/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������������ĺ͡�
����
  ����һЩ����δ֪�����������������������-1�������ʾ���������

���
  ������Щ������ӵĺͣ�����������-1���μ�������㡣

ʾ��
  ���룺
	1 2 3 4 5 -1
  �����
	15
*/

#ifndef __A031__
#define __A031__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A031"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�����������ĺ�") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int sum = 0;
		//	while (true) {
		//		int number;
		//		std::cin >> number;
		//		if (number == -1) break;
		//		sum += number;
		//	}
		//	std::cout << sum;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
