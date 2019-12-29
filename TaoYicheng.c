/*Yicheng Tao*/
#include <stdio.h>
int main() {
puts("Hello");
char const *s[9];
char const *e = "Goodbye";
int i = 0;
s[0] = "/*Yicheng Tao*/%c#include <stdio.h>%cint main() {%cputs(%cHello%c);%c";
s[1] = "char const *s[9];%cchar const *e = %cGoodbye%c;%cint i = 0;%c";
s[2] = "printf(s[0], 10, 10, 10, 34, 34, 10);%c";
s[3] = "printf(s[1], 10, 34, 34, 10, 10);%cfor (; i < 9; i++) {%c";
s[4] = "printf(%cs[%%d] = %%c%%s%%c;%%c%c, i, 34, s[i], 34, 10);%c}%c";
s[5] = "printf(s[2], 10);%cprintf(s[3], 10, 10);%c";
s[6] = "printf(s[4], 34, 34, 10, 10);%cprintf(s[5], 10, 10);%c";
s[7] = "printf(s[6], 10, 10);%cprintf(s[7], 10, 10);%c";
s[8] = "printf(s[8], 10, 10, 10, 10);%cputs(e);%creturn 0;%c}%c";
printf(s[0], 10, 10, 10, 34, 34, 10);
printf(s[1], 10, 34, 34, 10, 10);
for (; i < 9; i++) {
printf("s[%d] = %c%s%c;%c", i, 34, s[i], 34, 10);
}
printf(s[2], 10);
printf(s[3], 10, 10);
printf(s[4], 34, 34, 10, 10);
printf(s[5], 10, 10);
printf(s[6], 10, 10);
printf(s[7], 10, 10);
printf(s[8], 10, 10, 10, 10);
puts(e);
return 0;
}
