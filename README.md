# arm-ctf
An arm-compiled CTF challenge. The challenger is presented with an encrypted binary dump and the disassembly of the function used to encrypt the data. The challenger's task is to write their own program or script to decrypt the data. The revealed flag (password) will unlock the next challenge.

In the `src` directory there are both the original program as well as accompanied (example) solutions. Source binaries to generate the data dumps were compiled with _arm-linux-gnueabi-gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0_.


### Example usage from challenge_01:
```
$ xxd challenge_01 
00000000: 2c04 040f 4b01 0409 454b 3f03 0e4b 0d07  ,...K...EK?..K..
00000010: 0a0c 4b0d 0419 4b1f 030e 4b05 0e13 1f4b  ..K...K...K....K
00000020: 0803 0a07 070e 050c 0e4b 0218 514b 0c03  .........K..QK..
00000030: 190f 0d05 1d1a 1907 2182 48a8 6855 0a    ........!.H.hU.
$ ./solution_arm-challenge_01 
Good job. The flag for the next challenge is: ghrdfnvqrl
```
