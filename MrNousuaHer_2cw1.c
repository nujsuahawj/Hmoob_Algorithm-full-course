#include <stdio.h>
             //Mr. Nousua HER 2cw1
 main()
{
          int n,i,r=0;
        printf("enter n:");

        scanf("%d",&n);
//        n==2
         if(n==2){
                   printf("N is a prime\n");

         } else{
//         	i=2;i<n
         	for(i=2;i<n;i++){
//         		r!=0
         		if(r!=0){
         			printf("N is a prime\n");
				 }else{
				 	printf("N no prime\n");
				 }
//				 printf("%d",n,r++);
//					n%i==0
					if(n%i==0){
						printf("%d",r++);
					}else{
						printf("%d",i++);
					}
			 }
		 }
		 
}
