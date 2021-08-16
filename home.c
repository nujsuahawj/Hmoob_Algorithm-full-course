#include <stdio.h>
int s;
char v;
 main()
{
        printf("enter: ");
			
           if(scanf("%d",&s)){
           	
                    if (s>100 ||s<1)
                    {
                     printf("you shoud enter 1-100");
                    } else if(s>=80){
                      printf("A");
                    } else if (s>=70)
                    {
                        printf("B");
                    }else if (s>=60)
                    {
                       printf("C");
                    }else if(s<49 || s>1){
                        printf("F");
                    }else{
                    	printf("Errors nuj sau");
					}
              
           } else{
              printf("you shoud enter Only number");
           }

}
