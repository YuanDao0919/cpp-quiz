/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����Ծ���С�
����
  ������������M��N��T����M <= N�� 0 < T��

���
  ��С�������������M��N��Χ�ڣ�ÿ����ԾT���������С�

ʾ��
  ���룺
	5 10 2
  �����
	5 7 9
  ���룺
    0 12 3
  �����
	0 3 6 9 12
*/

#ifndef __A019__
#define __A019__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A019"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("��Ծ����");
			setID(ID);
			loadExamples(ID);
		}

		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int m, n, t;
			std::cin >> m >> n >> t;
			for (int i = m; i <= n; i += t) {
				std::cout << i << " ";
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
