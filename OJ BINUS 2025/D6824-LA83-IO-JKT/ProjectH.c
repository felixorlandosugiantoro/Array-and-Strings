#include <stdio.h>

int main() {

char kata1[100];
char kata2[100]= "\"%s\\n\"";

scanf("%[^\n]", kata1);

printf("#include <stdio.h>\n");
printf("int main()\n");
printf("{\n");
printf("    printf(%s,\"%s\");\n", kata2, kata1);
printf("    return 0;\n");
printf("}\n");

    return 0;
}