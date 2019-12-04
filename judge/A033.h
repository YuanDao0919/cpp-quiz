/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����������������Сֵ��
����
  ����һЩ����δ֪�����������������������-1�������ʾ���������

���
  ������Щ��������Сֵ������������-1�������ڡ�

ʾ��
  ���룺
	1 2 3 4 5 -1
  �����
	1
*/

#ifndef __A033__
#define __A033__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A033"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��������������Сֵ") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int min;
			std::cin >> min;
			while (true) {
				int number;
				std::cin >> number;
				if (number == -1) break;
				if (min > number) {
					min = number;
				}
			}
			std::cout << min;
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
