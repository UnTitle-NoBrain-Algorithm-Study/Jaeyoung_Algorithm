#include <stdio.h>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {

	// ���ϴ� ������ ���ڿ��� �ٸ� ���ڿ��� ġȯ
	// regex_replace (���, ����ǥ���� ��ü, ġȯ ���)
	s = regex_replace(s, regex("zero"), "0");
	s = regex_replace(s, regex("one"), "1");
	s = regex_replace(s, regex("two"), "2");
	s = regex_replace(s, regex("three"), "3");
	s = regex_replace(s, regex("four"), "4");
	s = regex_replace(s, regex("five"), "5");
	s = regex_replace(s, regex("six"), "6");
	s = regex_replace(s, regex("seven"), "7");
	s = regex_replace(s, regex("eight"), "8");
	s = regex_replace(s, regex("nine"), "9");

	return stoi(s); // string to int string

}