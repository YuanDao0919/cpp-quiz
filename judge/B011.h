/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

������ȥ�ء�

����
  ��һ�У���������N�����������������N����������0 < N < 20����
  �ڶ��У�����N��������

���
  ��N������ȥ���ظ�����״γ��ֵ��Ⱥ�˳�����������

ʾ��
  ���룺
	6
	3 2 6 3 2 9

  �����
	3 2 6 9
*/

#ifndef __B011__
#define __B011__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B011"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "����ȥ��") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n, len = 0;
		//	int a[20] = { 0 };
		//	std::cin >> n;

		//	for (int i = 0; i < n; ++i) {
		//		int v;
		//		bool has = false;
		//		std::cin >> v;
		//		for (int j = 0; j < len; ++j) {
		//			if (a[j] == v) {
		//				has = true;
		//				break;
		//			}
		//		}
		//		if (!has) {
		//			a[len++] = v;
		//		}
		//	}

		//	for (int i = 0; i < len; ++i) {
		//		std::cout << a[i] << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
