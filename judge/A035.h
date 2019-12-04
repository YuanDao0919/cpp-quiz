/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������������ĺ͡����������С����ƽ������
����
  ����һЩ����δ֪�����������������������-1�������ʾ���������

���
  ������Щ�����ĺ͡����������С����ƽ����������2λС�������������Կո�ָ�������������-1��������㡣

ʾ��
  ���룺
	1 2 3 4 5 -1
  �����
	15 5 1 3.00
*/

#ifndef __A035__
#define __A035__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A035"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�����������ĺ͡����������С����ƽ����") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int sum = 0;
			int count = 1;
			int max, min;
			std::cin >> max;
			sum = min = max;
			while (true) {
				int number;
				std::cin >> number;
				if (number == -1) break;
				sum += number;
				++count;
				if (max < number) {
					max = number;
				}
				if (min > number) {
					min = number;
				}
			}
			printf("%d %d %d %.2lf", sum, max, min, sum / (double)count);
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
