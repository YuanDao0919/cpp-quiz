/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����һ����λ����ת���ԭ��������ӡ�
����
  ����һ����λ��������n��

���
  ���n��ת��������n�Ľ����

ʾ��
  ���룺
	123
  �����
	444
	��˵����123 + 321 = 444��
*/

#ifndef __A012__
#define __A012__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A012"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��һ����λ����ת���ԭ���������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	std::cin >> n;
		//	int t = n, r;
		//	r = t % 10;
		//	t /= 10;
		//	r *= 10;
		//	r += t % 10;
		//	t /= 10;
		//	r *= 10;
		//	r += t % 10;
		//	std::cout << n + r;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
