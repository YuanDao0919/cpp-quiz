/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����ʮ�顰��ã����磡����
����
  ���ޣ�

���
  ÿ�����һ�顰��ã����磡������ʮ�������

ʾ��
  ���룺
	���ޣ�
  �����
	��ã����磡
	��ã����磡
	��ã����磡
	��ã����磡
	....
	..
	.
	�������ʮ�У�
*/

#ifndef __A014__
#define __A014__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A014"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���ʮ�顰��ã����磡��");
			setID(ID);
			loadExamples(ID);
		}

		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			for (int i = 1; i <= 10; ++i) {
				std::cout << "��ã����磡" << std::endl;
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
