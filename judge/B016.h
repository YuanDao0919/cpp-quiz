/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�������ı�����������֮�͡�

һ���ɺ����ֺ������ַ���ɵ��ı����������е�����ȡ���������������ǵĺ͡�
�������ı�"&123&%&456(789##"����ô�������
123 + 456 + 789 = 1368

����
  һ���ı����س���ʾ�ı�������

���
  ��һ�У�������е�����
  �ڶ��У�������е���֮�͡�

ʾ��
  ���룺
	123&%&456(789

  �����
	123 456 789
	1368
*/

#ifndef __B016__
#define __B016__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B016"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "�����ı�����������֮��") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	char str[1024];
		//	int a[128] = { 0 };
		//	int len, flag = 0, count = 0, sum = 0;
		//	std::cin >> str;

		//	len = strlen(str);

		//	for (int i = 0; i <= len; ++i) {
		//		char ch = str[i];
		//		if (ch >= '0' && ch <= '9') {
		//			flag = 1;
		//			a[count] *= 10;
		//			a[count] += str[i] - '0';
		//		}
		//		else {
		//			if (flag == 1) {
		//				count++;
		//			}
		//			flag = 0;
		//		}
		//	}

		//	for (int i = 0; i < count; ++i) {
		//		std::cout << a[i] << " ";
		//		sum += a[i];
		//	}

		//	std::cout << std::endl;
		//	std::cout << sum;
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
