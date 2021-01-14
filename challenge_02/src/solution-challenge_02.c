#include <stdio.h>
#include <stdlib.h>


int decrypt_text(char * in, char * out, int len) {
	if(!in || !out || !len) return -1;

	char c = 0x21;
	int i;
	for(i = 0; i < len; i++) {
	out[i] = in[i] ^ c;
	//printf("%c", out[i]);
	c++;
	}
	out[i] = '\0';
	return 0;
}

int main(void) {
	FILE *fp, *fw;
	fp = fopen("_challenge_02", "rb");
	fw = fopen("_result_02", "w");

	char buffer[100];
	int retval = fread(buffer, 1, 100, fp);

	if(retval < 100) printf("reached eof at %d\n", retval);
	buffer[retval + 1] = '\0';

	char res[retval];
	decrypt_text(buffer, res, retval);
	fprintf(fw, "%s", res);

	fclose(fp);
	fclose(fw);
	return 0;
}
