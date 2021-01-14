#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE * fp;
	fp = fopen("challenge_01", "rb");

	char buffer[100];
	int retval = fread(buffer, 1, 56, fp);

	if(retval < 100) printf("reached eof at %d\n", retval);
	buffer[retval] = '\0';

	char res[100];


	for(int i = 0; i < retval; i++) {
		res[i] = buffer[i] ^ 'k';
		printf("%c", res[i]);
	}

	fclose(fp);
	return 0;
}

/*
data = 2C04040F4B010409454B3F030E4B0D070A0C4B0D04194B1F030E4B050E131F4B08030A07070E050C0E4B0218514B0C03190F0D051D1A190721725F42D8550A
key =    6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b6b

result = 476f6f64206a6f622e2054686520666c616720666f7220746865206e657874206368616c6c656e67652069733a2067687264666e7671726c4a193429b33e61
*/
