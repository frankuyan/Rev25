#include "out.h"



void _init(void)

{
  __gmon_start__();
  return;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101113)
// WARNING: Removing unreachable block (ram,0x0010111f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101154)
// WARNING: Removing unreachable block (ram,0x00101160)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

void check_win(void)

{
  int iVar1;
  FILE *__stream;
  char buf [64];
  char acStack_48 [64];
  
  iVar1 = strcmp(safe_var,"pico");
  if (iVar1 != 0) {
    puts("Looks like everything is still secure!");
    puts("\nNo flage for you :(");
    fflush(_stdout);
    return;
  }
  puts("\nYOU WIN");
  __stream = fopen("flag.txt","r");
  fgets(acStack_48,0x40,__stream);
  puts(acStack_48);
  fflush(_stdout);
                    // WARNING: Subroutine does not return
  exit(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

void print_menu(void)

{
  printf(
        "\n1. Print Heap:\t\t(print the current state of the heap)\n2. Write to buffer:\t(write to your own personal block of data on the heap)\n3. Print safe_var:\t(I\'ll even let you look at my variable on the heap, I\'m confident it can\'t be modified)\n4. Print Flag:\t\t(Try to print the flag, good luck)\n5. Exit\n\nEnter your choice: "
        );
  fflush(_stdout);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int init(EVP_PKEY_CTX *ctx)

{
  int in_EAX;
  
  puts("\nWelcome to heap1!");
  puts("I put my data on the heap so it should be safe from any tampering.");
  puts(
      "Since my data isn\'t on the stack I\'ll even let you write whatever info you want to the heap, I already took care of using malloc for you.\n"
      );
  fflush(_stdout);
  input_data = (char *)malloc(5);
  builtin_strncpy(input_data,"pico",5);
  safe_var = (char *)malloc(5);
  builtin_strncpy(safe_var,"bico",5);
  return in_EAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

void write_buffer(void)

{
  printf("Data for buffer: ");
  fflush(_stdout);
  __isoc99_scanf(&DAT_0010217c,input_data);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

void print_heap(void)

{
  puts("Heap State:");
  puts("+-------------+----------------+");
  puts("[*] Address   ->   Heap Data   ");
  puts("+-------------+----------------+");
  printf("[*]   %p  ->   %s\n",input_data);
  puts("+-------------+----------------+");
  printf("[*]   %p  ->   %s\n",safe_var);
  puts("+-------------+----------------+");
  fflush(_stdout);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

int main(void)

{
  int iVar1;
  undefined8 in_RAX;
  char *__s;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  puts("\nWelcome to heap1!");
  puts("I put my data on the heap so it should be safe from any tampering.");
  puts(
      "Since my data isn\'t on the stack I\'ll even let you write whatever info you want to the heap, I already took care of using malloc for you.\n"
      );
  fflush(_stdout);
  input_data = (char *)malloc(5);
  builtin_strncpy(input_data,"pico",5);
  safe_var = (char *)malloc(5);
  builtin_strncpy(safe_var,"bico",5);
  puts("Heap State:");
  puts("+-------------+----------------+");
  puts("[*] Address   ->   Heap Data   ");
  puts("+-------------+----------------+");
  printf("[*]   %p  ->   %s\n",input_data);
  puts("+-------------+----------------+");
  printf("[*]   %p  ->   %s\n",safe_var);
  puts("+-------------+----------------+");
  fflush(_stdout);
  printf(
        "\n1. Print Heap:\t\t(print the current state of the heap)\n2. Write to buffer:\t(write to your own personal block of data on the heap)\n3. Print safe_var:\t(I\'ll even let you look at my variable on the heap, I\'m confident it can\'t be modified)\n4. Print Flag:\t\t(Try to print the flag, good luck)\n5. Exit\n\nEnter your choice: "
        );
  fflush(_stdout);
  iVar1 = __isoc99_scanf(&DAT_00102192,(long)&uStack_38 + 4);
  if (iVar1 == 1) {
    do {
      switch(uStack_38._4_4_) {
      case 1:
        puts("Heap State:");
        __s = "+-------------+----------------+";
        puts("+-------------+----------------+");
        puts("[*] Address   ->   Heap Data   ");
        puts("+-------------+----------------+");
        printf("[*]   %p  ->   %s\n",input_data);
        puts("+-------------+----------------+");
        printf("[*]   %p  ->   %s\n",safe_var);
        goto LAB_001014ff;
      case 2:
        printf("Data for buffer: ");
        fflush(_stdout);
        __isoc99_scanf(&DAT_0010217c,input_data);
        break;
      case 3:
        printf("\n\nTake a look at my variable: safe_var = %s\n\n",safe_var);
        goto LAB_00101504;
      case 4:
        check_win();
        break;
      case 5:
        return 0;
      default:
        __s = "Invalid choice";
LAB_001014ff:
        puts(__s);
LAB_00101504:
        fflush(_stdout);
      }
      printf(
            "\n1. Print Heap:\t\t(print the current state of the heap)\n2. Write to buffer:\t(write to your own personal block of data on the heap)\n3. Print safe_var:\t(I\'ll even let you look at my variable on the heap, I\'m confident it can\'t be modified)\n4. Print Flag:\t\t(Try to print the flag, good luck)\n5. Exit\n\nEnter your choice: "
            );
      fflush(_stdout);
      iVar1 = __isoc99_scanf(&DAT_00102192,(long)&uStack_38 + 4);
    } while (iVar1 == 1);
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



void _fini(void)

{
  return;
}




