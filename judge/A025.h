/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����N������II��
����
  ��һ�У�����һ������N����ʾ������������N��������
  �ڶ��У�����N��������

���
  ��N������������˳�������
  �������������������-1Ҫ��ֹ���������������

ʾ��
  ���룺
	5
	3 6 -1 7 99
  �����
	3 6 -1
*/

#ifndef __A025__
#define __A025__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A025"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���N������II");
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
				if (number == -1) break;
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
