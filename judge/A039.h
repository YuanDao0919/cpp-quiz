/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����������дӵ�M������ʼ�ĺ������С�
����
  ��һ�У�����һ������N����ʾ������Ҫ����N����������0 <= N <= 200��
  �ڶ��У�����N��������
  �����У�����M����ʾ�ӵ�M������ʼ�ĺ������С���M <= N��

���
  ��������дӵ�M������ʼ�ĺ������С�

ʾ��
  ���룺
	5
	2 4 6 8 10
	3
  �����
	6 8 10
*/

#ifndef __A039__
#define __A039__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A039"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "��������дӵ�M������ʼ�ĺ�������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int count, position;
		//	int numbers[200] = { 0 };
		//	std::cin >> count;
		//	for (int index = 0; index < count; ++index) {
		//		std::cin >> numbers[index];
		//	}
		//	std::cin >> position;
		//	for (int index = position - 1; index < count; ++index) {
		//		std::cout << numbers[index] << " ";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
