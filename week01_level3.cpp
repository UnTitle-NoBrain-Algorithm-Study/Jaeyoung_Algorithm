#include <stdio.h>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {

	// 원하는 패턴의 문자열을 다른 문자열로 치환
	// regex_replace (대상, 정규표현식 객체, 치환 결과)
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