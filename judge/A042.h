/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����ӡ�����Ρ�
����
  ��һ�У�����һ������N����0 <= N <= 50��

���
  ���ǺŴ�ӡһ��N��N�еľ���

ʾ��
  ���룺
	5
  �����
	*****
	*****
	*****
	*****
	*****
*/

#ifndef __A042__
#define __A042__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A042"

namespace foxzzz {

	class TheJudge : public StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "��ӡ������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int count;
		//	std::cin >> count;
		//	for (int i = 0; i < count; ++i) {
		//		for (int j = 0; j < count; ++j) {
		//			std::cout << "*";
		//		}
		//		std::cout << std::endl;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
