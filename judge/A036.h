/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������������ĺ�II��
����
  ����һЩ����δ֪�����������������������-1�������ʾ����������������������ᳬ��200��

���
  ��һ�У������Щ�����ĺͣ�����-1��������㣩��
  �ڶ��У�������˳�����ÿ������������-1���������

ʾ��
  ���룺
	1 2 3 4 5 -1
  �����
	15
	1 2 3 4 5
*/

#ifndef __A036__
#define __A036__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A036"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�����������ĺ�II") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int count = 0;
			int sum = 0;
			int numbers[200] = { 0 };
			while (true) {
				int n;
				std::cin >> n;
				if (n == -1) break;
				numbers[count++] = n;
				sum += n;
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
