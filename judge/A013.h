/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����1��10��
����
  ���ޣ�

���
  ��С�������1��10��

ʾ��
  ���룺
	���ޣ�
  �����
	1 2 3 4 5 6 7 8 9 10
*/

#ifndef __A013__
#define __A013__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A013"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���1��10");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	for (int i = 1; i <= 10; ++i) {
		//		std::cout << i << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
