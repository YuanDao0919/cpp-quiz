/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��ÿ��5�������С�
����
  ������������M��N����M <= N��

���
  ��С�������������M��N��Χ�ڵ�����������
  ÿ�����5�������ֶ��������
  ÿ�������ÿ��Ϊ3��������ʽ�����

ʾ��
  ���룺
	1 20
  �����
	1  2  3  4  5
	6  7  8  9  10
	11 12 13 14 15
	16 17 18 19 20
*/

#ifndef __A022__
#define __A022__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A022"

namespace foxzzz {

	class TheJudge : public StrictJudge {
	private:
		virtual void build() {
			setTitle("ÿ��5��������");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int m, n;
		//	scanf("%d%d", &m, &n);
		//	for (int i = m; i <= n; ++i) {
		//		printf("%-3d", i);
		//		if ((i - m) % 5 == 4) {
		//			printf("\n");
		//		}
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
