/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

���������ã����磡����
����
  ���ޣ�

���
  ��ã����磡
*/

#ifndef __A011__
#define __A011__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A001"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�������ã����磡��") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	std::cout << "��ã����磡";
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
