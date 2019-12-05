/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����������дӵ�M������ʼ��C������
����
  ��һ�У�����һ������N����ʾ������Ҫ����N����������0 <= N <= 200��
  �ڶ��У�����N��������
  �����У�����M��C������M��ʾ��ʼλ�ã�C��ʾҪ�����������������M <= N��

���
  ��������дӵ�M������ʼ��C������

ʾ��
  ���룺
	5
	2 4 6 8 10
	3 2
  �����
	6 8
*/

#ifndef __A040__
#define __A040__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A040"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��������дӵ�M������ʼ��C����") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int count, position, total;
			int numbers[200] = { 0 };
			std::cin >> count;
			for (int index = 0; index < count; ++index) {
				std::cin >> numbers[index];
			}
			std::cin >> position >> total;
			for (int index = position - 1; index < position + total - 1; ++index) {
				std::cout << numbers[index] << " ";
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
