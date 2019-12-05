/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������������ĺ�III��
����
  ��һ�У�����һ������N����ʾ������Ҫ����N����������0 <= N <= 200��
  �ڶ��У�����N��������

���
  ��һ�У������Щ�����ĺͣ�
  �ڶ��У�������˳�����ÿ��������

ʾ��
  ���룺
	5
	1 2 3 4 5
  �����
	15
	1 2 3 4 5
*/

#ifndef __A037__
#define __A037__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A037"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�����������ĺ�III") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int count;
			int sum = 0;
			int numbers[200] = { 0 };
			std::cin >> count;
			for (int index = 0; index < count; ++index) {
				std::cin >> numbers[index];
				sum += numbers[index];
			}
			std::cout << sum << std::endl;
			for (int index = 0; index < count; ++index) {
				std::cout << numbers[index] << " ";
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
