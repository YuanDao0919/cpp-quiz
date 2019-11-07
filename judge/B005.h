/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����з�ת��
����
  ��һ�У�����һ������N����ʾ������Ҫ����N����������0 < N <= 20��
  �ڶ��У�����N��������

���
  ��N�����������з�ת�������

ʾ��
  ���룺
	5
	1 2 3 4 5
  �����
	5 4 3 2 1
*/

#ifndef __B005__
#define __B005__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B005"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���з�ת");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	int number[20] = { 0 };
		//	
		//	std::cin >> n;
		//	for (int i = 0; i < n; ++i) {
		//		std::cin >> number[i];
		//	}

		//	for (int i = n - 1; i >= 0; --i) {
		//		std::cout << number[i] << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
