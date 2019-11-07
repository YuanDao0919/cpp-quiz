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

#ifndef __A013__
#define __A013__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A001"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("�������ã����磡��");
			setID(ID);
			loadExamples(ID);
		}

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
