#include <stdio.h>

int main()
{
	while(1){
	
		int a;
		printf("請輸入0-10之間的數字:");
		scanf("%d",&a);
		
		if(a>10 || a<0)
			break;
			//printf("%d 超出範圍\n", a);
		else if(a%2==0)
			printf("%d 是偶數\n", a);
		else
			printf("%d 是奇數\n", a);
			
	}
	return 0;
} 
