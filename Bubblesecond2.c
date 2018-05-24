void BubbleOne(int *data1)
{
	int i,j,temp;
	printf("由大到小:");
	for(j=10;j>0;j--)
	{
	    for	(i=0;i<j-1;i++)
		{
			if(data1[i]>data1[i+1])
			{
				temp = data1[i+1];
				data1[i+1]=data1[i];
				data1[i]=temp;
			}
		}
    printf("  %d",data1[i]);
    }

}
