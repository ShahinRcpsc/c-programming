// Author: Shahin Hossain
//printf character, word and sentence

#include <stdio.h>
int main() {
	char ch;
	char s[101];
	char sen[101];
	scanf("%c", &ch);
	scanf("%s\n", s);
	scanf("%[^\n]%*c", sen);
           // %[^\n]%*c it means it will read sentence untill new line. 
	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s", sen);
	return 0;
}
