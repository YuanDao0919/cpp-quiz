/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������Բ���ܳ��������
����
  ����һ���뾶r��(r�����Ǹ�����)

���
  ����뾶r���ܳ�����������������3λС����

����˵����
  �� = 3.14159
  ���rС��0��������������

ʾ��
  ���룺
	2
  �����
	12.566 12.566
*/

#ifndef __A009__
#define __A009__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A009"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "����Բ���ܳ������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	double r;
		//	scanf("%lf", &r);
		//	if (r > 0) {
		//		double pi = 3.14159;
		//		double C = 2 * pi * r;
		//		double S = pi * r * r;
		//		printf("%.3lf %.3lf", C, S);
		//	}
		//	else {
		//		std::cout << "�������";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
