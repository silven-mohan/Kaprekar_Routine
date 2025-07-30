//Kaprekar's Routine (Four-Digit Numbers)
int Kaprekar_Routine4(int a)
{
	int i, j, no, digits[4], temp, result, k;
	no=a;
	k=a;
	printf("\nThe number you had entered is %d", a);
	while(no!=6174)
	{
		for(i=0;i<4;i++)
		{
			digits[i]=no%10;	// Splitting the number into individual digits
			no /=10;
		}
		for(i=0;i<3;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(digits[i]>digits[j])
				{
					temp=digits[i];
					digits[i]=digits[j];	// Sorting the digits into ascending order.
					digits[j]=temp;
				}
			}
		}
		int asc=0, desc=0;
		for(i=0;i<4;i++)
		{
			asc=(asc*10)+digits[i];
			desc=(desc*10)+digits[3-i];
		}
		printf("\nThe digits of the number %d in Ascending Order are %d", k, asc);
		printf("\nThe digits of the number %d in Descending Order are %d", k, desc);
		if(asc>desc)
		{
			result=asc-desc;
			printf("\n%d is greater than %d. So, %d-%d=%d", asc, desc, asc, desc, result);
		}
		else
		{
			result=desc-asc;
			printf("\n%d is greater than %d. So, %d-%d=%d", desc, asc, desc, asc, result);
		}
		k=result;
		no=result;
		if(result!=6174)
		{
			printf("\nTake %d and repeat.", result);
		}
		else
		{
			printf("\nAt the end you left with %d", result);
		}
	}
	return 0;
}
