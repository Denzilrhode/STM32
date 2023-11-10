#include<stdio.h>

void main()
{
	int a[5]={1,2,3,2,3};	/*origina array*/
	int b[5];		/*freq array*/
	int c=0;		/*counter var*/

	for(int i=0;i<5;i++)
	{
		c=1;
		if(a[i]!=-1)
		{
			for(int j=i+1;j<5;j++)
			{
				if(a[i]==a[j])
				{
					a[j]=-1;
					c++;
				}
			}
			b[i]=c;
		}

	}

	for(int i=0;i<5;i++)
	{
		if(a[i]!=-1)
		{
			printf("%d = %d",a[i],b[i]);
		}
	}
}

