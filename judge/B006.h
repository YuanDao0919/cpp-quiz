/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������׳ˡ�

һ���������Ľ׳ˣ�factorial��������С�ڼ����ڸ������������Ļ�������0�Ľ׳�Ϊ1����Ȼ��n�Ľ׳�д��n!��
���磺
5! = 5 * 4 * 3 * 2 * 1
3! = 3 * 2 * 1
1! = 1
0! = 1

����
  ����n����0 <= n <= 20��

���
  ���n!�Ľ��

ʾ��
  ���룺
	5

  �����
	120
*/

#ifndef __B006__
#define __B006__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B006"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "����׳�") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	long long sum = 1;
		//	std::cin >> n;
		//	for (int i = 1; i <= n; ++i) {
		//		sum *= i;
		//	}
		//	std::cout << sum;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
