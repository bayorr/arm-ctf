#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Generates a 56 byte binary dump. Encoding scheme: XOR each byte with 'k'
Difficulty: Easy
 */


int main(void) {
	FILE *fp;
	fp = fopen("challenge_01", "w");

	char *password = "Good job. The flag for the next challenge is: ghrdfnvqrl";
	int len = strlen(password);
	char new_password[len];

	for(int i = 0; i < len; i++) {
		new_password[i] = password[i] ^ 'k';
	}

	fprintf(fp, "%s\n", new_password);
	fclose(fp);
	return 0;
}
