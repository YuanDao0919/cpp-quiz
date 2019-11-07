/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������ײͰ���
����
  ����һ��������

���
  ��������Ӧ���ײ͡�

�ײ�˵����
  0 ���˶����ײ�
  1 ��ѡ������ͨ�ײ�
  2 ��ѡ���������ײ�
  3 ��ѡ���˺����ײ�
  X û�и��ײ�
  (X�����0~3�������������)

ʾ��
  ���룺
	2
  �����
	��ѡ���������ײ�
*/

#ifndef __A006__
#define __A006__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A006"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("�����ײͰ���");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int n;
		//	std::cin >> n;
		//	switch (n) {
		//	case 0:
		//		std::cout << "���˶����ײ�";
		//		break;
		//	case 1:
		//		std::cout << "��ѡ������ͨ�ײ�";
		//		break;
		//	case 2:
		//		std::cout << "��ѡ���������ײ�";
		//		break;
		//	case 3:
		//		std::cout << "��ѡ���˺����ײ�";
		//		break;
		//	default:
		//		std::cout << "û�и��ײ�";
		//		break;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
