/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

����������

�þ�������Ͻǵ�������1��Ȼ�������н���ÿ�����ּ�1��
�����ұߺ������н���ÿ�����ּ�1��
�����±ߺ������н���ÿ�����ּ�1��
������ߺ������н���ÿ�����ּ�1��
���Ϲ����ظ���ֱ���������е�����λ�ö�������

����
  ������������w,h�������ά����Ŀ�Ⱥ͸߶ȡ�

���
  ��ӡһ��w��*h�еĶ�ά����

ʾ��
  ���룺
	5 5

  �����
	1   2   3   4   5
	16  17  18  19  6
	15  24  25  20  7
	14  23  22  21  8
	13  12  11  10  9

	��ע�⣺��ӡ��Ҫ��ȡ����룬�����������4��
*/

#ifndef __B013__
#define __B013__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B013"

namespace foxzzz {

	class TheJudge : public StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "��������") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int w, h, x = 0, y = 0, count = 0;
		//	int a[20][20] = { 0 };
		//	scanf("%d%d", &w, &h);

		//	while (true) {
		//		bool flag = false;
		//		if (x < w && a[y][x] == 0) {
		//			while (x < w && a[y][x] == 0) {
		//				a[y][x] = ++count;
		//				++x;
		//			}
		//			--x;
		//			++y;
		//			flag = true;
		//		}
		//		if (y < h && a[y][x] == 0) {
		//			while (y < h && a[y][x] == 0) {
		//				a[y][x] = ++count;
		//				++y;
		//			}
		//			--y;
		//			--x;
		//			flag = true;
		//		}
		//		if (x > 0 && a[y][x] == 0) {
		//			while (x >= 0 && a[y][x] == 0) {
		//				a[y][x] = ++count;
		//				--x;
		//			}
		//			++x;
		//			--y;
		//			flag = true;
		//		}
		//		if (y > 0 && a[y][x] == 0) {
		//			while (y >= 0 && a[y][x] == 0) {
		//				a[y][x] = ++count;
		//				--y;
		//			}
		//			++y;
		//			++x;
		//			flag = true;
		//		}
		//		if (!flag) break;
		//	}

		//	for (int i = 0; i < h; ++i) {
		//		for (int j = 0; j < w; ++j) {
		//			printf("%-4d", a[i][j]);
		//		}
		//		printf("\n");
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
