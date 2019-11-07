/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����鷭ת��
����
  ����numbers�Ǹ��������飻
  ����len��numbers�ĳ��ȣ�

���
  ע�⣬����ⲻ��Ҫ�����
  ������Ҫ��β����numbers�����е�Ԫ�ء�

ʾ��
  ���룺
	numbers:[1,2,3,4,5]
	len:5
  �����
	numbers:[5,4,3,2,1]
*/

#ifndef __B012__
#define __B012__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B012"

namespace foxzzz {

	typedef void (*WrapperCall)(int numbers[], int len);

	void wrapper(WrapperCall call) {
		int len;
		int numbers[20] = { 0 };
		std::cin >> len;
		for (int i = 0; i < len; ++i) {
			std::cin >> numbers[i];
		}
		call(numbers, len);
		for (int i = 0; i < len; ++i) {
			std::cout << numbers[i] << " ";
		}
	};

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("���鷭ת");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	wrapper(reverse);
		//}

		//static void reverse(int numbers[], int len) {
		//	for (int i = 0; i < len / 2; ++i) {
		//		int t = numbers[i];
		//		numbers[i] = numbers[len - i - 1];
		//		numbers[len - i - 1] = t;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

void mycode(int numbers[], int len);

int main() {
	foxzzz::wrapper(mycode);
	return 0;
}

#endif

#endif
