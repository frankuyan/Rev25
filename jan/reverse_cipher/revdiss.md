
rev:	file format elf64-x86-64

Disassembly of section .init:

0000000000001000 <_init>:
    1000: 48 83 ec 08                  	subq	$0x8, %rsp
    1004: 48 8b 05 dd 2f 00 00         	movq	0x2fdd(%rip), %rax      # 0x3fe8 <rev.c+0x3fe8>
    100b: 48 85 c0                     	testq	%rax, %rax
    100e: 74 02                        	je	0x1012 <_init+0x12>
    1010: ff d0                        	callq	*%rax
    1012: 48 83 c4 08                  	addq	$0x8, %rsp
    1016: c3                           	retq

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020: ff 35 e2 2f 00 00            	pushq	0x2fe2(%rip)            # 0x4008 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026: ff 25 e4 2f 00 00            	jmpq	*0x2fe4(%rip)           # 0x4010 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c: 0f 1f 40 00                  	nopl	(%rax)

0000000000001030 <puts@plt>:
    1030: ff 25 e2 2f 00 00            	jmpq	*0x2fe2(%rip)           # 0x4018 <_GLOBAL_OFFSET_TABLE_+0x18>
    1036: 68 00 00 00 00               	pushq	$0x0
    103b: e9 e0 ff ff ff               	jmp	0x1020 <.plt>

0000000000001040 <fread@plt>:
    1040: ff 25 da 2f 00 00            	jmpq	*0x2fda(%rip)           # 0x4020 <_GLOBAL_OFFSET_TABLE_+0x20>
    1046: 68 01 00 00 00               	pushq	$0x1
    104b: e9 d0 ff ff ff               	jmp	0x1020 <.plt>

0000000000001050 <fclose@plt>:
    1050: ff 25 d2 2f 00 00            	jmpq	*0x2fd2(%rip)           # 0x4028 <_GLOBAL_OFFSET_TABLE_+0x28>
    1056: 68 02 00 00 00               	pushq	$0x2
    105b: e9 c0 ff ff ff               	jmp	0x1020 <.plt>

0000000000001060 <fputc@plt>:
    1060: ff 25 ca 2f 00 00            	jmpq	*0x2fca(%rip)           # 0x4030 <_GLOBAL_OFFSET_TABLE_+0x30>
    1066: 68 03 00 00 00               	pushq	$0x3
    106b: e9 b0 ff ff ff               	jmp	0x1020 <.plt>

0000000000001070 <fopen@plt>:
    1070: ff 25 c2 2f 00 00            	jmpq	*0x2fc2(%rip)           # 0x4038 <_GLOBAL_OFFSET_TABLE_+0x38>
    1076: 68 04 00 00 00               	pushq	$0x4
    107b: e9 a0 ff ff ff               	jmp	0x1020 <.plt>

0000000000001080 <exit@plt>:
    1080: ff 25 ba 2f 00 00            	jmpq	*0x2fba(%rip)           # 0x4040 <_GLOBAL_OFFSET_TABLE_+0x40>
    1086: 68 05 00 00 00               	pushq	$0x5
    108b: e9 90 ff ff ff               	jmp	0x1020 <.plt>

Disassembly of section .plt.got:

0000000000001090 <__cxa_finalize@plt>:
    1090: ff 25 62 2f 00 00            	jmpq	*0x2f62(%rip)           # 0x3ff8 <rev.c+0x3ff8>
    1096: 66 90                        	nop

Disassembly of section .text:

00000000000010a0 <_start>:
    10a0: 31 ed                        	xorl	%ebp, %ebp
    10a2: 49 89 d1                     	movq	%rdx, %r9
    10a5: 5e                           	popq	%rsi
    10a6: 48 89 e2                     	movq	%rsp, %rdx
    10a9: 48 83 e4 f0                  	andq	$-0x10, %rsp
    10ad: 50                           	pushq	%rax
    10ae: 54                           	pushq	%rsp
    10af: 4c 8d 05 7a 02 00 00         	leaq	0x27a(%rip), %r8        # 0x1330 <__libc_csu_fini>
    10b6: 48 8d 0d 13 02 00 00         	leaq	0x213(%rip), %rcx       # 0x12d0 <__libc_csu_init>
    10bd: 48 8d 3d c1 00 00 00         	leaq	0xc1(%rip), %rdi        # 0x1185 <main>
    10c4: ff 15 16 2f 00 00            	callq	*0x2f16(%rip)           # 0x3fe0 <rev.c+0x3fe0>
    10ca: f4                           	hlt
    10cb: 0f 1f 44 00 00               	nopl	(%rax,%rax)

00000000000010d0 <deregister_tm_clones>:
    10d0: 48 8d 3d 81 2f 00 00         	leaq	0x2f81(%rip), %rdi      # 0x4058 <completed.7325>
    10d7: 48 8d 05 7a 2f 00 00         	leaq	0x2f7a(%rip), %rax      # 0x4058 <completed.7325>
    10de: 48 39 f8                     	cmpq	%rdi, %rax
    10e1: 74 15                        	je	0x10f8 <deregister_tm_clones+0x28>
    10e3: 48 8b 05 ee 2e 00 00         	movq	0x2eee(%rip), %rax      # 0x3fd8 <rev.c+0x3fd8>
    10ea: 48 85 c0                     	testq	%rax, %rax
    10ed: 74 09                        	je	0x10f8 <deregister_tm_clones+0x28>
    10ef: ff e0                        	jmpq	*%rax
    10f1: 0f 1f 80 00 00 00 00         	nopl	(%rax)
    10f8: c3                           	retq
    10f9: 0f 1f 80 00 00 00 00         	nopl	(%rax)

0000000000001100 <register_tm_clones>:
    1100: 48 8d 3d 51 2f 00 00         	leaq	0x2f51(%rip), %rdi      # 0x4058 <completed.7325>
    1107: 48 8d 35 4a 2f 00 00         	leaq	0x2f4a(%rip), %rsi      # 0x4058 <completed.7325>
    110e: 48 29 fe                     	subq	%rdi, %rsi
    1111: 48 c1 fe 03                  	sarq	$0x3, %rsi
    1115: 48 89 f0                     	movq	%rsi, %rax
    1118: 48 c1 e8 3f                  	shrq	$0x3f, %rax
    111c: 48 01 c6                     	addq	%rax, %rsi
    111f: 48 d1 fe                     	sarq	%rsi
    1122: 74 14                        	je	0x1138 <register_tm_clones+0x38>
    1124: 48 8b 05 c5 2e 00 00         	movq	0x2ec5(%rip), %rax      # 0x3ff0 <rev.c+0x3ff0>
    112b: 48 85 c0                     	testq	%rax, %rax
    112e: 74 08                        	je	0x1138 <register_tm_clones+0x38>
    1130: ff e0                        	jmpq	*%rax
    1132: 66 0f 1f 44 00 00            	nopw	(%rax,%rax)
    1138: c3                           	retq
    1139: 0f 1f 80 00 00 00 00         	nopl	(%rax)

0000000000001140 <__do_global_dtors_aux>:
    1140: 80 3d 11 2f 00 00 00         	cmpb	$0x0, 0x2f11(%rip)      # 0x4058 <completed.7325>
    1147: 75 2f                        	jne	0x1178 <__do_global_dtors_aux+0x38>
    1149: 55                           	pushq	%rbp
    114a: 48 83 3d a6 2e 00 00 00      	cmpq	$0x0, 0x2ea6(%rip)      # 0x3ff8 <rev.c+0x3ff8>
    1152: 48 89 e5                     	movq	%rsp, %rbp
    1155: 74 0c                        	je	0x1163 <__do_global_dtors_aux+0x23>
    1157: 48 8b 3d f2 2e 00 00         	movq	0x2ef2(%rip), %rdi      # 0x4050 <__dso_handle>
    115e: e8 2d ff ff ff               	callq	0x1090 <__cxa_finalize@plt>
    1163: e8 68 ff ff ff               	callq	0x10d0 <deregister_tm_clones>
    1168: c6 05 e9 2e 00 00 01         	movb	$0x1, 0x2ee9(%rip)      # 0x4058 <completed.7325>
    116f: 5d                           	popq	%rbp
    1170: c3                           	retq
    1171: 0f 1f 80 00 00 00 00         	nopl	(%rax)
    1178: c3                           	retq
    1179: 0f 1f 80 00 00 00 00         	nopl	(%rax)

0000000000001180 <frame_dummy>:
    1180: e9 7b ff ff ff               	jmp	0x1100 <register_tm_clones>

0000000000001185 <main>:
    1185: 55                           	pushq	%rbp
    1186: 48 89 e5                     	movq	%rsp, %rbp
    1189: 48 83 ec 50                  	subq	$0x50, %rsp
    118d: 48 8d 35 74 0e 00 00         	leaq	0xe74(%rip), %rsi       # 0x2008 <_IO_stdin_used+0x8>
    1194: 48 8d 3d 6f 0e 00 00         	leaq	0xe6f(%rip), %rdi       # 0x200a <_IO_stdin_used+0xa>
    119b: e8 d0 fe ff ff               	callq	0x1070 <fopen@plt>
    11a0: 48 89 45 e8                  	movq	%rax, -0x18(%rbp)
    11a4: 48 8d 35 68 0e 00 00         	leaq	0xe68(%rip), %rsi       # 0x2013 <_IO_stdin_used+0x13>
    11ab: 48 8d 3d 63 0e 00 00         	leaq	0xe63(%rip), %rdi       # 0x2015 <_IO_stdin_used+0x15>
    11b2: e8 b9 fe ff ff               	callq	0x1070 <fopen@plt>
    11b7: 48 89 45 e0                  	movq	%rax, -0x20(%rbp)
    11bb: 48 83 7d e8 00               	cmpq	$0x0, -0x18(%rbp)
    11c0: 75 0c                        	jne	0x11ce <main+0x49>
    11c2: 48 8d 3d 57 0e 00 00         	leaq	0xe57(%rip), %rdi       # 0x2020 <_IO_stdin_used+0x20>
    11c9: e8 62 fe ff ff               	callq	0x1030 <puts@plt>
    11ce: 48 83 7d e0 00               	cmpq	$0x0, -0x20(%rbp)
    11d3: 75 0c                        	jne	0x11e1 <main+0x5c>
    11d5: 48 8d 3d 7e 0e 00 00         	leaq	0xe7e(%rip), %rdi       # 0x205a <_IO_stdin_used+0x5a>
    11dc: e8 4f fe ff ff               	callq	0x1030 <puts@plt>
    11e1: 48 8b 55 e8                  	movq	-0x18(%rbp), %rdx
    11e5: 48 8d 45 b0                  	leaq	-0x50(%rbp), %rax
    11e9: 48 89 d1                     	movq	%rdx, %rcx
    11ec: ba 01 00 00 00               	movl	$0x1, %edx
    11f1: be 18 00 00 00               	movl	$0x18, %esi
    11f6: 48 89 c7                     	movq	%rax, %rdi
    11f9: e8 42 fe ff ff               	callq	0x1040 <fread@plt>
    11fe: 89 45 dc                     	movl	%eax, -0x24(%rbp)
    1201: 83 7d dc 00                  	cmpl	$0x0, -0x24(%rbp)
    1205: 7f 0a                        	jg	0x1211 <main+0x8c>
    1207: bf 00 00 00 00               	movl	$0x0, %edi
    120c: e8 6f fe ff ff               	callq	0x1080 <exit@plt>
    1211: c7 45 f8 00 00 00 00         	movl	$0x0, -0x8(%rbp)
    1218: eb 23                        	jmp	0x123d <main+0xb8>
    121a: 8b 45 f8                     	movl	-0x8(%rbp), %eax
    121d: 48 98                        	cltq
    121f: 0f b6 44 05 b0               	movzbl	-0x50(%rbp,%rax), %eax
    1224: 88 45 ff                     	movb	%al, -0x1(%rbp)
    1227: 0f be 45 ff                  	movsbl	-0x1(%rbp), %eax
    122b: 48 8b 55 e0                  	movq	-0x20(%rbp), %rdx
    122f: 48 89 d6                     	movq	%rdx, %rsi
    1232: 89 c7                        	movl	%eax, %edi
    1234: e8 27 fe ff ff               	callq	0x1060 <fputc@plt>
    1239: 83 45 f8 01                  	addl	$0x1, -0x8(%rbp)
    123d: 83 7d f8 07                  	cmpl	$0x7, -0x8(%rbp)
    1241: 7e d7                        	jle	0x121a <main+0x95>
    1243: c7 45 f4 08 00 00 00         	movl	$0x8, -0xc(%rbp)
    124a: eb 43                        	jmp	0x128f <main+0x10a>
    124c: 8b 45 f4                     	movl	-0xc(%rbp), %eax
    124f: 48 98                        	cltq
    1251: 0f b6 44 05 b0               	movzbl	-0x50(%rbp,%rax), %eax
    1256: 88 45 ff                     	movb	%al, -0x1(%rbp)
    1259: 8b 45 f4                     	movl	-0xc(%rbp), %eax
    125c: 83 e0 01                     	andl	$0x1, %eax
    125f: 85 c0                        	testl	%eax, %eax
    1261: 75 0c                        	jne	0x126f <main+0xea>
    1263: 0f b6 45 ff                  	movzbl	-0x1(%rbp), %eax
    1267: 83 c0 05                     	addl	$0x5, %eax
    126a: 88 45 ff                     	movb	%al, -0x1(%rbp)
    126d: eb 0a                        	jmp	0x1279 <main+0xf4>
    126f: 0f b6 45 ff                  	movzbl	-0x1(%rbp), %eax
    1273: 83 e8 02                     	subl	$0x2, %eax
    1276: 88 45 ff                     	movb	%al, -0x1(%rbp)
    1279: 0f be 45 ff                  	movsbl	-0x1(%rbp), %eax
    127d: 48 8b 55 e0                  	movq	-0x20(%rbp), %rdx
    1281: 48 89 d6                     	movq	%rdx, %rsi
    1284: 89 c7                        	movl	%eax, %edi
    1286: e8 d5 fd ff ff               	callq	0x1060 <fputc@plt>
    128b: 83 45 f4 01                  	addl	$0x1, -0xc(%rbp)
    128f: 83 7d f4 16                  	cmpl	$0x16, -0xc(%rbp)
    1293: 7e b7                        	jle	0x124c <main+0xc7>
    1295: 0f b6 45 c7                  	movzbl	-0x39(%rbp), %eax
    1299: 88 45 ff                     	movb	%al, -0x1(%rbp)
    129c: 0f be 45 ff                  	movsbl	-0x1(%rbp), %eax
    12a0: 48 8b 55 e0                  	movq	-0x20(%rbp), %rdx
    12a4: 48 89 d6                     	movq	%rdx, %rsi
    12a7: 89 c7                        	movl	%eax, %edi
    12a9: e8 b2 fd ff ff               	callq	0x1060 <fputc@plt>
    12ae: 48 8b 45 e0                  	movq	-0x20(%rbp), %rax
    12b2: 48 89 c7                     	movq	%rax, %rdi
    12b5: e8 96 fd ff ff               	callq	0x1050 <fclose@plt>
    12ba: 48 8b 45 e8                  	movq	-0x18(%rbp), %rax
    12be: 48 89 c7                     	movq	%rax, %rdi
    12c1: e8 8a fd ff ff               	callq	0x1050 <fclose@plt>
    12c6: 90                           	nop
    12c7: c9                           	leave
    12c8: c3                           	retq
    12c9: 0f 1f 80 00 00 00 00         	nopl	(%rax)

00000000000012d0 <__libc_csu_init>:
    12d0: 41 57                        	pushq	%r15
    12d2: 49 89 d7                     	movq	%rdx, %r15
    12d5: 41 56                        	pushq	%r14
    12d7: 49 89 f6                     	movq	%rsi, %r14
    12da: 41 55                        	pushq	%r13
    12dc: 41 89 fd                     	movl	%edi, %r13d
    12df: 41 54                        	pushq	%r12
    12e1: 4c 8d 25 00 2b 00 00         	leaq	0x2b00(%rip), %r12      # 0x3de8 <__init_array_start>
    12e8: 55                           	pushq	%rbp
    12e9: 48 8d 2d 00 2b 00 00         	leaq	0x2b00(%rip), %rbp      # 0x3df0 <__do_global_dtors_aux_fini_array_entry>
    12f0: 53                           	pushq	%rbx
    12f1: 4c 29 e5                     	subq	%r12, %rbp
    12f4: 48 83 ec 08                  	subq	$0x8, %rsp
    12f8: e8 03 fd ff ff               	callq	0x1000 <_init>
    12fd: 48 c1 fd 03                  	sarq	$0x3, %rbp
    1301: 74 1b                        	je	0x131e <__libc_csu_init+0x4e>
    1303: 31 db                        	xorl	%ebx, %ebx
    1305: 0f 1f 00                     	nopl	(%rax)
    1308: 4c 89 fa                     	movq	%r15, %rdx
    130b: 4c 89 f6                     	movq	%r14, %rsi
    130e: 44 89 ef                     	movl	%r13d, %edi
    1311: 41 ff 14 dc                  	callq	*(%r12,%rbx,8)
    1315: 48 83 c3 01                  	addq	$0x1, %rbx
    1319: 48 39 dd                     	cmpq	%rbx, %rbp
    131c: 75 ea                        	jne	0x1308 <__libc_csu_init+0x38>
    131e: 48 83 c4 08                  	addq	$0x8, %rsp
    1322: 5b                           	popq	%rbx
    1323: 5d                           	popq	%rbp
    1324: 41 5c                        	popq	%r12
    1326: 41 5d                        	popq	%r13
    1328: 41 5e                        	popq	%r14
    132a: 41 5f                        	popq	%r15
    132c: c3                           	retq
    132d: 0f 1f 00                     	nopl	(%rax)

0000000000001330 <__libc_csu_fini>:
    1330: c3                           	retq

Disassembly of section .fini:

0000000000001334 <_fini>:
    1334: 48 83 ec 08                  	subq	$0x8, %rsp
    1338: 48 83 c4 08                  	addq	$0x8, %rsp
    133c: c3                           	retq
