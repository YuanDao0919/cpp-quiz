/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����һ����λ����
����
  ����һ����λ��������n��

���
  ���n�ĸ�λ����ʮλ����

ʾ��
  ���룺
	23
  �����
	3
	2
*/

#ifndef __A010__
#define __A010__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A010"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���һ����λ��");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	std::cin >> n;
		//	std::cout << n % 10 << std::endl;
		//	std::cout << n / 10 << std::endl;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
