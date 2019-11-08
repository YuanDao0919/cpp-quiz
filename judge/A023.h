/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��ÿ��T�������С�
����
  ������������M��N,T����M <= N, 0 < T��

���
  ��С�������������M��N��Χ�ڵ�����������
  ÿ�����T�������ֶ��������
  ÿ�������ÿ��Ϊ3��������ʽ�����

ʾ��
  ���룺
	1 20 4
  �����
    1  2  3  4
    5  6  7  8
    9  10 11 12
    13 14 15 16
    17 18 19 20
*/

#ifndef __A023__
#define __A023__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A023"

namespace foxzzz {

	class TheJudge : public StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "ÿ��T��������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int m, n, t;
		//	scanf("%d%d%d", &m, &n, &t);
		//	for (int i = m; i <= n; ++i) {
		//		printf("%-3d", i);
		//		if ((i - m) % t == (t - 1)) {
		//			printf("\n");
		//		}
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
