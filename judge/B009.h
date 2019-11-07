/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������жϡ�

������ָ���Ŷ��͵��Ŷ���һ�������֡�
���磺
a
aa
aba
abba
abcdcba

����
  ����һ���ַ���s��(s������20���ַ���)

���
  �ж�s�Ƿ��ǻ��ģ�����ǻ��ģ������YES��,���������NO����

ʾ��
  ���룺
	aba

  �����
	YES
*/

#ifndef __B009__
#define __B009__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B009"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("�����ж�");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	char s[20] = { 0 };
		//	std::cin >> s;
		//	int len = 0;
		//	for (int i = 0; s[i]; ++i) {
		//		len = i + 1;
		//	}
		//	bool yes = true;
		//	for (int i = 0; i < len; ++i) {
		//		if (s[i] != s[len - i - 1]) {
		//			yes = false;
		//			break;
		//		}
		//	}
		//	if (yes) {
		//		std::cout << "YES";
		//	}
		//	else {
		//		std::cout << "NO";
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
