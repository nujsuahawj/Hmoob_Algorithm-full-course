 #include <conio.h>
int main()
{
    int a[1000],i,n,min,max;
   
//    printf("Enter size of the array : ");
//    scanf("%d",&n);
 
    printf("Enter 10 number : ");
//    for(i=0; i<n; i++)
for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
//    for(i=1; i<n; i++)
    for(i=1; i<10; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
    return 0;
}
