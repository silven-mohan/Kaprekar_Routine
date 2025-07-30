//Kaperkar's Routine (Three-Digit Numbers)
int Kaprekar_Routine3(int a)
{
	int i, j, no, digits[3], temp, result, k;
	no=a;
	k=a;
	printf("\nThe number you had entered is %d", a);
	while(no!=495)
	{
		for(i=0;i<3;i++)
		{
			digits[i]=no%10;	//Splitting the number into individual digits.
			no /=10;
		}
		for(i=0;i<2;i++)
		{
			for(j=i+1;j<3;j++)
			{
				if(digits[i]>digits[j])
				{
					temp=digits[i];
					digits[i]=digits[j];	//Sorting out the digits in the ascending order.
					digits[j]=temp;
				}
			}
		}
		int asc=0; int desc=0;
		for(i=0;i<3;i++)
		{
			asc=(asc*10)+digits[i];
			desc=(desc*10)+digits[2-i];
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
		k=result;;
		no=result;
		if(result!=495)
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
