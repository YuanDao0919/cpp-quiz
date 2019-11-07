/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��������ѡ�ִֵ��յ�ͨ�����Ρ�
����
  ���ޣ�

���
  ÿ���������N��ѡ�ִֵ��յ㣡����N������1������20��

ʾ��
  ���룺
	���ޣ�
  �����
	��1��ѡ�ִֵ��յ㣡
	��2��ѡ�ִֵ��յ㣡
	��3��ѡ�ִֵ��յ㣡
	...
	...
	��19��ѡ�ִֵ��յ㣡
	��20��ѡ�ִֵ��յ㣡
*/

#ifndef __A015__
#define __A015__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A015"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("������ѡ�ִֵ��յ�ͨ������");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	for (int i = 1; i <= 20; ++i) {
		//		std::cout << "��" << i << "��ѡ�ִֵ��յ㣡" << std::endl;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
