#include <stdio.h>
main(){
	int minute,money;
	printf("Nhap so phut: ");
	scanf("%d",&minute);
	if(minute<=50){
		money=minute*600+25000;
	}else if(minute<=150){
		money=minute*400+25000;
	}else if(minute<=200){
		money=minute*200+25000;
	}else{
			money=minute*100+25000;
	}
	printf("Cuoc dien thoai ban trong 1 thang la: %d VND",money);
}
