/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����ӡ������III��
����
  ��һ�У�����һ������N����0 <= M��N <= 50��

���
  ���ǺŴ�ӡһ��N�е�ֱ�������Ρ�

ʾ��
  ���룺
	5
  �����
		*
	   **
	  ***
	 ****
	*****
*/

#ifndef __A046__
#define __A046__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A046"

namespace foxzzz {

	class TheJudge : public  StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "��ӡ������III") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int clumn;
		//	std::cin >> clumn;
		//	for (int i = 0; i < clumn; ++i) {
		//		for (int j = clumn - i - 1; j > 0; --j) {
		//			std::cout << " ";
		//		}
		//		for (int j = 0; j < i + 1; ++j) {
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
