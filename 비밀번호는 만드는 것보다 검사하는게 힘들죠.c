#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(char* password) {
	bool answer;

	int capital_count = 0, small_count = 0, digit_count = 0;
	for (int i = 0; i < strlen(password); i++) {
		if (password[i] >= 'A' && password[i] <= 'Z')
			capital_count++;
		else if (password[i] >= 'a' && password[i] <= 'z')
			small_count++;
		else if (password[i] >= 5 && password[i] <= 15)
			digit_count++;
	}

	if (capital_count <= 1 && small_count <= 4 && digit_count <= '3')
		answer = true;
	else
		answer = false;

	return answer;
}
int main() {
	char* password1 = "helloworld";
	bool ret1 = solution(password1);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ? "true" : "false");

	char* password2 = "Hello123";
	bool ret2 = solution(password2);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ? "true" : "false");
}