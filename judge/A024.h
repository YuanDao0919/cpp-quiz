/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����N��������
����
  ��һ�У�����һ������N����ʾ������������N��������
  �ڶ��У�����N��������

���
  ��N������������˳�������

ʾ��
  ���룺
	5
	3 6 -2 7 99
  �����
	3 6 -2 7 99
*/

#ifndef __A024__
#define __A024__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A024"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���N������");
			setID(ID);
			loadExamples(ID);
		}

		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int n;
			std::cin >> n;
			for (int i = 0; i < n; ++i) {
				int number;
				std::cin >> number;
				std::cout << number << " ";
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
