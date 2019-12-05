/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����������е�M������
����
  ��һ�У�����һ������N����ʾ������Ҫ����N����������0 <= N <= 200��
  �ڶ��У�����N��������
  �����У�����M����ʾN�������еĵڼ�������M <= N��

���
  ���N�������еĵ�M��������

ʾ��
  ���룺
	5
	2 4 6 8 10
	3
  �����
	6
*/

#ifndef __A038__
#define __A038__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A038"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��������е�M����") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int count, position;
			int numbers[200] = { 0 };
			std::cin >> count;
			for (int index = 0; index < count; ++index) {
				std::cin >> numbers[index];
			}
			std::cin >> position;
			std::cout << numbers[position - 1];
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
