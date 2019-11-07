/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����ܱ�4���������С�
����
  ������������M��N����M <= N��

���
  ��С�������������M��N��Χ�ڵ����в��ܱ�4����������

ʾ��
  ���룺
	0 10
  �����
	1 3 5 7 9
*/

#ifndef __A021__
#define __A021__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A021"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���ܱ�4����������");
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
		//		if (i % 4 != 0) {
		//			std::cout << i << " ";
		//		}
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
