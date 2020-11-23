#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int likes(char** ss, int n) {
	if (n == 0)
		printf("no one like this");
	else if (n == 1)
		printf("%s", ss[0]);
	else if (n == 2)
		printf("%s, %s", ss[0], ss[1]);
	else if (n == 3)
		printf("%s, %s and %s\n", ss[0], ss[1], ss[2]);
	else if (n >= 4)
		printf("%s, %s and %s and others\n", ss[0], ss[1], ss[2]);
}
int main() {
  int n;
  scanf("%d", &n);
  char** ss = (char **)malloc(n * sizeof(char *));//
  for (int i=0; i<n; i++) 
    ss[i] = (char *)malloc(10 * sizeof(char)); // максимальна довжина ім'я
  for (int i = 0; i < n; i++)
  {
	scanf("%s", ss[i]);
  }
  likes(ss,n);
  return 0;
}
//returning multiple values using pointers in C
//memory 
/*#include <stdio.h> 
#include <math.h>
void main() {
	int n;
	scanf_s("%d",&n);
	char** ss;//зробити вказівник на масив, зірочка c  - рядок, зірзір - масив рядків
	ss = (char**)malloc(n*10);//для сс виділяємо память в розмірі ен * 10 байт
	for (int i = 0; i < n; i++) {
		fgets(ss, 10, stdin);//stdin-показує що ти будеш вводити з клавіатури
	}
	if (n == 0)
		printf("no one likes this");
	else
}*/