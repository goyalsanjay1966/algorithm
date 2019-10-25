#include <stdio.h>
int main()
    {
      int n,i,j, position,temp;
      printf("Enter number of elements\t");
      scanf("%d", &n);
      int array[n];     
	  printf("Enter array elements\n");
      for (i= 0; i< n; i++)
        scanf("%d", &array[i]);
      for (i= 0; i< (n-1); i++)
      {
        position=i;
        for (j= i+1;j<n;j++)
        {
          if (array[position]>array[j])
            position=j;
        }
        temp= array[i];
        array[i]=array[position];
        array[position]=temp;
      }
      printf("resulting array after sorting\n");
      for (i=0;i<n;i++)
        printf("%d\t", array[i]);
      return 0;
    }
