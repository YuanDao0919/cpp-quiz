/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

��������䵹��ʱ������
����
  ���ޣ�

���
  ÿ��������������N����䡱��N������10�ݼ���0��
  0��������һ�С����䣡����

ʾ��
  ���룺
	���ޣ�
  �����
	�������10�����
	�������9�����
	�������8�����
	...
	...
	�������1�����
	�������0�����
	���䣡
*/

#ifndef __A016__
#define __A016__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A016"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("������䵹��ʱ����");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	for (int i = 10; i >= 0; --i) {
		//		std::cout << "�������" << i << "�����" << std::endl;
		//	}
		//	std::cout << "���䣡";
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
