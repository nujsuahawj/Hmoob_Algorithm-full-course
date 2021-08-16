#include <stdio.h>
 main()
{
          int n,a,b;
        printf("\tMenu\n ");
        printf("1.+\n2.-\n3.*\nchoose number 1-3:");

        scanf("%d",&n);
        
         if(n==1){
                   printf("Iput A:"); scanf("%d",&a);
                    printf("Iput B:"); scanf("%d",&b);
                   printf("%d + %d=%d",a,b,(a+b));

         } else if (n==2)
         {
                   printf("Iput A:"); scanf("%d",&a);
                    printf("Iput B:"); scanf("%d",&b);
                   printf("%d - %d=  %d",a,b,(a-b));
         } else if (n==3){
                   printf("Iput A:"); scanf("%d",&a);
                    printf("Iput B:"); scanf("%d",&b);
                   printf("%d* %d= %d",a,b,(a*b));

         } else{
         	printf("Enter 1-3");
		 }
         

			
           

}
