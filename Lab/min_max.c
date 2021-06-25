#include <stdio.h>
void main()
{
    int arr[100];
    int i, mx, mn, n;

       printf("Input the number of elements:");
       scanf("%d",&n);
       for(i=0;i<n;i++)
            {
	      printf("Element: ",i);
	      scanf("%d",&arr[i]);
	    }
    mx = arr[0];
    mn = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
        }
        if(arr[i]<mn)
        {
            mn = arr[i];
        }
    }
    printf("Maximum Element is : %d\n", mx);
    printf("Minimum Element is : %d\n\n", mn);
}
