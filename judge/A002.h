/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������֮�͡�
����
  ������������a, b��

���
  ���a b��ӵĺ�����

ʾ��
  ���룺
	5 3
  �����
	8
*/

#ifndef __A002__
#define __A002__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A002"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("����֮��");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int a, b;
		//	std::cin >> a >> b;
		//	std::cout << a + b;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
