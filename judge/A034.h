/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��������������ƽ������
����
  ����һЩ����δ֪�����������������������-1�������ʾ���������

���
  ������Щ������ƽ�������������3λС��������������-1���������ڡ�

ʾ��
  ���룺
	1 2 3 4 5 -1
  �����
	3.000
*/

#ifndef __A034__
#define __A034__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A034"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "������������ƽ����") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			double sum = 0.0;
			int count = 0;
			while (true) {
				int number;
				std::cin >> number;
				if (number == -1) break;
				sum += number;
				++count;
			}
			if (count > 0) {
				printf("%.3lf", sum / count);
			}
			else {
				printf("0.000");
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
