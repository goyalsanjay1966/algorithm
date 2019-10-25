#include <stdio.h>
int main()
{
  int n,i,j,temp;
 
  printf("Enter number of elements\t");
  scanf("%d",&n);
 
  int array[n];
  printf("Enter array elements\n", n);
  for (i= 0; i< n; i++)
    scanf("%d", &array[i]);
 
  for (i=1 ;i < n; i++) 
   {
    j=i;
    temp = array[i];
    while ( j> 0 && array[j-1] > temp) 
	{
      array[j] = array[j-1];
	  j--;
    }
    array[j] = temp;
  }
  printf("Resulting sorted array is:\n");
  for (i= 0; i<= n-1; i++) 
  {
    printf("%d\t", array[i]);
  }
 
  return 0;
}
