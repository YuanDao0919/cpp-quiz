/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����ӡ������II��
����
  ��һ�У�����һ������N����0 <= M��N <= 50��

���
  ���ǺŴ�ӡһ��N*2-1�еĵ��������Ρ�

ʾ��
  ���룺
	5
  �����
	*
	**
	***
	****
	*****
	****
	***
	**
	*
*/

#ifndef __A045__
#define __A045__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A045"

namespace foxzzz {

	class TheJudge : public  StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "��ӡ������II") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int clumn;
		//	std::cin >> clumn;
		//	for (int i = 0; i < clumn; ++i) {
		//		for (int j = 0; j < i + 1; ++j) {
		//			std::cout << "*";
		//		}
		//		std::cout << std::endl;
		//	}
		//	for (int i = 0; i < clumn - 1; ++i) {
		//		for (int j = 0; j < clumn - i - 1; ++j) {
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
