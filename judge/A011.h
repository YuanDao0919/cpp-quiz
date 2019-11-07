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
  ���n�ĸ�λ����ʮλ���Լ���λ��

ʾ��
  ���룺
	123
  �����
	3
	2
	1
*/

#ifndef __A011__
#define __A011__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A011"

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
		//	n /= 10;
		//	std::cout << n % 10 << std::endl;
		//	n /= 10;
		//	std::cout << n % 10 << std::endl;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
