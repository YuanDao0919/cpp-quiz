/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����ӡ����II��
����
  ��һ�У�������������M��N����0 <= M��N <= 50��

���
  ���ǺŴ�ӡһ��M��N�еľ���

ʾ��
  ���룺
	5 6
  �����
	*****
	*****
	*****
	*****
	*****
	*****
*/

#ifndef __A043__
#define __A043__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A043"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��ӡ����II") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int clumn, row;
		//	std::cin >> clumn >> row;
		//	for (int i = 0; i < clumn; ++i) {
		//		for (int j = 0; j < row; ++j) {
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
