#include <stdio.h>
 main()
{
    char a;
    printf("input char:");
    scanf("%c",&a);
    if(a=='A'||a=='a'||a=='O'
	||a=='o'||a=='E'||a=='e'
	||a=='I'||a=='i'||a=='U'
	||a=='u'){
        printf("it is vowel",a);
	}else{
    	printf("it is xala",a);
    }
}
