/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��һ������ͳ�Ƹ���ƽ��ֵ������������
����
  ��һ������һ������N����ʾ������Ҫ����N��������0 < N < 20����
  �ڶ�����N��������

���
  ��һ�����N��������ƽ������������λС������
  �ڶ������N�������У�����ƽ��ֵ������������

ʾ��
  ���룺
	10
	1 2 3 4 5 6 7 8 9 10
  �����
	5.50
	5
	��˵��������5.5������5����
*/

#ifndef __B002__
#define __B002__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B002"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "һ������ͳ�Ƹ���ƽ��ֵ����������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	int a[20] = { 0 };
		//	int sum = 0;
		//	int total = 0;
		//	scanf("%d", &n);
		//	for (int i = 0; i < n; ++i) {
		//		scanf("%d", &a[i]);
		//		sum += a[i];
		//	}
		//	double ave = (double)sum / n;
		//	for (int i = 0; i < n; ++i) {
		//		if (a[i] > ave) {
		//			++total;
		//		}
		//	}
		//	printf("%.2lf\n", ave);
		//	printf("%d", total);
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
