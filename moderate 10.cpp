
# include < stdio.h >
int  main( )
{
int  a[25], n, i ;
int avg = 0, sum = 0 ;
printf(" Enter the Numbers of element in Array: ") ;
scanf("%d ",& n) ;
printf("\n Enter the Array of Element : \n") ;
for (  i = 1 ; i < = n ; i++)
{
scanf("%d ",& a[i]) ;
}
for (  i = 1 ; i < = n ; i++)
{
sum = sum + a[i] ;
avg = sum / n ;}
printf("\n Sum of Element of Array is : %d ",sum) ;
printf("\n Average of Element of Array are : %d ",avg) ;
return ( 0 ) ;
}
