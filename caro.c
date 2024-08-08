#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Inbanco(char a[10]){
	printf("   |   |   \n");
	printf(" %c | %c | %c \n",a[1],a[2],a[3]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n",a[4],a[5],a[6]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n",a[7],a[8],a[9]);
	printf("   |   |   \n");
	
}
int thang(char a[10]){
	if(a[1]=='x'&&a[2]=='x'&&a[3]=='x') return 1;
	if(a[4]=='x'&&a[5]=='x'&&a[6]=='x') return 1;
	if(a[7]=='x'&&a[8]=='x'&&a[9]=='x') return 1;
	if(a[1]=='x'&&a[4]=='x'&&a[7]=='x') return 1;
	if(a[2]=='x'&&a[5]=='x'&&a[8]=='x') return 1;
	if(a[3]=='x'&&a[6]=='x'&&a[9]=='x') return 1;
	if(a[1]=='x'&&a[5]=='x'&&a[9]=='x') return 1;
	if(a[3]=='x'&&a[5]=='x'&&a[7]=='x') return 1;
	
	if(a[1]=='o'&&a[2]=='o'&&a[3]=='o') return 0;
	if(a[4]=='o'&&a[5]=='o'&&a[6]=='o') return 0;
	if(a[7]=='o'&&a[8]=='o'&&a[9]=='o') return 0;
	if(a[1]=='o'&&a[4]=='o'&&a[7]=='o') return 0;
	if(a[2]=='o'&&a[5]=='o'&&a[8]=='o') return 0;
	if(a[3]=='o'&&a[6]=='o'&&a[9]=='o') return 0;
	if(a[1]=='o'&&a[5]=='o'&&a[9]=='o') return 0;
	if(a[3]=='o'&&a[5]=='o'&&a[7]=='o') return 0;
	
	int i,t=1;
	for(i=1;i<=9;i++){if(a[i]!=' ') t=t+1;
	}
	if(t>=9) return 2;
}
int AI(char a[10]){
	
	
	if((a[2]=='o'&&a[3]=='o'||a[5]=='o'&&a[9]=='o'||a[4]=='o'&&a[7]=='o'||a[2]=='x'&&a[3]=='x'||a[5]=='x'&&a[9]=='x'||a[5]=='x'&&a[7]=='x')&&a[1]==' ') return 1;
	else if((a[1]=='o'&&a[3]=='o'||a[5]=='o'&&a[8]=='o'||a[1]=='x'&&a[3]=='x'||a[5]=='x'&&a[8]=='x')&&a[2]==' ') return 2;
	else if((a[1]=='o'&&a[2]=='o'||a[5]=='o'&&a[7]=='o'||a[6]=='o'&&a[9]=='o'||a[1]=='x'&&a[2]=='x'||a[5]=='x'&&a[7]=='x'||a[6]=='x'&&a[9]=='x')&&a[3]==' ') return 3;
	else if((a[1]=='o'&&a[7]=='o'||a[5]=='o'&&a[6]=='o'&&a[4]||a[1]=='x'&&a[7]=='x'||a[5]=='x'&&a[6]=='x')&&a[4]==' ') return 4;
	else if((a[2]=='o'&&a[8]=='o'||a[4]=='o'&&a[6]=='o'||a[1]=='o'&&a[9]=='o'||a[3]=='x'&&a[7]=='x'&&a[5]||a[2]=='x'&&a[8]=='x'||a[4]=='x'&&a[6]=='x'||a[1]=='x'&&a[9]=='x'||a[3]=='x'&&a[7]=='x')&&a[5]==' ') return 5;
	else if((a[3]=='o'&&a[9]=='o'||a[4]=='o'&&a[5]=='o'||a[3]=='x'&&a[9]=='x'||a[4]=='x'&&a[5]=='x')&&a[6]==' ') return 6;
	else if((a[1]=='o'&&a[4]=='o'||a[3]=='o'&&a[5]=='o'||a[8]=='o'&&a[9]=='o'||a[1]=='x'&&a[4]=='x'||a[3]=='x'&&a[5]=='x'||a[8]=='x'&&a[9]=='x')&&a[7]==' ') return 7;
	else if((a[2]=='o'&&a[5]=='o'||a[7]=='o'&&a[9]=='o'||a[2]=='x'&&a[5]=='x'||a[7]=='x'&&a[9]=='x')&&a[8]==' ') return 8;
	else if((a[3]=='o'&&a[6]=='o'||a[1]=='o'&&a[5]=='o'||a[7]=='o'&&a[8]=='o'&&a[9]||a[3]=='x'&&a[6]=='x'||a[1]=='x'&&a[5]=='x'||a[7]=='x'&&a[8]=='x')&&a[9]==' ') return 9;


	if(a[5]==' ')return 5; 
	int i;
	for(i=1;i<10;i++){
		if(a[i]==' ') {
		return i;};
	}
	}
void may(char a[10]){
	Inbanco(a);

	int p;
	p=AI(a);
	a[p]='o';

		system("cls");
}
void nguoi(char a[10]){
	Inbanco(a);
	printf("Nuoc di cua ban la: ");
	int i;
	scanf("%d",&i);
	while(a[i]=='x'||a[i]=='o'){printf("O da duoc di, chon lai: ");scanf("%d",&i);
	}
	a[i]='x';
	system("cls");
	

}
int main(){
	srand((int)time(0));
	char a[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int i,chon,m;
	printf("---Caro---\n");
	Inbanco(a);
	printf("Ban co muon di truoc?\n");
	printf("1.Co\n");
	printf("2.Khong\n");
	printf("3.Ngau nhien\n");
	scanf("%d",&chon);
	while(chon<1||chon>3) {
		system("cls");
		printf("Khong hop le\n");
		printf("Ban co muon di truoc?\n");
		printf("1.Co\n");
		printf("2.Khong\n");
		printf("3.Ngau nhien\n");
		scanf("%d",&chon);
	}
	system("cls");
		if(chon==3){
			chon= 1 + rand() % 2;
		}
	
	if(chon==1){
		for(i=1;i<=9;i++){
			if(i%2!=0){ 
				if(thang(a)==1) {Inbanco (a);printf("Ban thang"); exit(0);}
				if(thang(a)==0) {Inbanco (a);printf("Ban thua"); exit(0);}
				if(thang(a)==2) {Inbanco (a);printf("Ban hoa");exit(0);}
				system("cls");
				nguoi(a);}
			 	else may(a);
	
		}
	}
		if(chon==2){
		for(i=1;i<=9;i++)
			{if(i%2!=0) {
				if(thang(a)==1) {Inbanco (a);printf("Ban thang"); exit(0);}
				if(thang(a)==0) {Inbanco (a);printf("Ban thua"); exit(0);}
				if(thang(a)==2) {Inbanco (a);printf("Ban hoa");exit(0);}
			system("cls");
			may(a);
			}else nguoi(a);
		}
	}}

	

