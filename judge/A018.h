/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����M��N���������С�
����
  ������������M��N����M <= N��

���
  ��С�������������M��N������������

ʾ��
  ���룺
	5 10
  �����
	5 6 7 8 9 10
*/

#ifndef __A018__
#define __A018__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A018"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("��M��N����������");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int m, n;
		//	std::cin >> m >> n;
		//	for (int i = m; i <= n; ++i) {
		//		std::cout << i << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
