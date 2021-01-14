#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Encodes the string "password" and writes the result to a file. Encodes with the schema in encrypt_textr().
 */

int encrypt_text(char * in, char * out, int len) {
	if(!in || !out || !len) return -1;

	char c = 0x21;
	for(int i = 0; i < len; i++) {
		out[i] = in[i] ^ c;
//		printf("i = %d\tout=%x\tin=%x\txor=%x\n", i, out[i], in[i], c);
		c++;
	}
//	printf("%s\n", out);
}


int main(void) {
	FILE *fp;
	fp = fopen("_challenge_02", "w");

	char *password = "....the password to the next challenge is: mnqwjgutlwb";
	int len = strlen(password);
	char new_password[len];

	encrypt_text(password, new_password, len);

	fprintf(fp, "%s", new_password);
	fclose(fp);
	return 0;
}
