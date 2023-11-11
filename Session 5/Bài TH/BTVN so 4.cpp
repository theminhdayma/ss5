#include <stdio.h>
main(){
	int total_income,salary;
	printf("Nhap tong so thu nhap cua nhan vien: ");
	scanf("%d",&total_income);
	if(total_income<=5){
		salary=total_income-(total_income*0.05);
	}else if(total_income<=10){
		salary=total_income-(total_income*0.1);
	}else if(total_income<=18){
		salary=total_income-(total_income*0.15);
	}else if(total_income<=32){
		salary=total_income-(total_income*0.2);
	}else if(total_income<=52){
		salary=total_income-(total_income*0.25);
	}else if(total_income<=80){
		salary=total_income-(total_income*0.3);
	}else{
		salary=total_income-(total_income*0.35);
	}
	printf("Tien luong thang nay cua nhan vien la: %d trieu",salary);
}
