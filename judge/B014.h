/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

�����IP��ַ��

IP��ַ����4��0~255֮�������ɣ�������.�ָ���
���¶��ǺϷ���IP��ַ��ʽ��

192.168.0.1
255.255.255.255
127.0.0.1

�����ǲ��Ϸ���IP��ַ��ʽ��

a.b.c.d
-1.1.1.1
..255.255
192.168.0.1.
127.0.0.0.1

����Ҫ�ж�һϵ��IP��ַ��ʽ����Щ�Ϸ�����Щ���Ϸ���

����
  ��һ�У�����һ������n�������������������n��IP��ַ��
  �����У�ÿ������һ��IP��ַ��������n��IP��ַ��

���
  �����ǰ�����IP��ַ�Ϸ��������Yes�������������No����
  �ֶ��������

ʾ��
  ���룺
	2
	192.168.0.1
	a.b.c.d

  �����
	Yes
	No
*/

#ifndef __B014__
#define __B014__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "B014"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	public:
		TheJudge() : LooseJudge(ID, "���IP��ַ") {}

	private:
		virtual ProcedureCall verify() {
			return verifyCode;
		}

		static void verifyCode() {
			int number;
			std::cin >> number;
			for (int index = 0; index < number; ++index) {
				char ip[128] = { 0 };
				std::cin >> ip;
				char* cursor = ip;
				int count = 0;
				bool first = true;
				int part = 0;
				bool succeed = true;
				while (true) {
					if (*cursor >= '0' && *cursor <= '9') {
						if (first) {
							part = *cursor - '0';
							first = false;
						}
						else {
							part *= 10;
							part += *cursor - '0';
						}
					}
					else if (*cursor == '.') {
						++count;
						if (first || part < 0 || part > 255) {
							succeed = false;
							break;
						}
						first = true;
					}
					else if (*cursor == '\0') {
						++count;
						if (count != 4 || first || part < 0 || part > 255) {
							succeed = false;
						}
						break;
					}
					else {
						succeed = false;
						break;
					}
					++cursor;
				}
				if (succeed) {
					std::cout << "Yes" << std::endl;
				}
				else {
					std::cout << "No" << std::endl;
				}
			}
		}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
