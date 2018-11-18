#include<bits/stdc++.h>
using namespace std;
int main() {
  printf("欢迎来到李明喆减法小课堂\n");
		printf("想跳过这部分吗？\n不存在的，随便输个数代表你的智商吧\n");
		scanf("%d",&d);system("cls");
		if(d==160419&&hry==true){
			printf("作弊的小子\n");
			printf("你跳过了减法部分\n\n");
			Sleep(1500);system("cls");
		}
		for(g=0;g<7&&(d!=160419||hry==false);){
			if(ct1>=5){
				for(int fff=0;;fff++){
					system("shutdown -r -t 3");
					cout<<"信仰圣光吧！！！";
				}
			}
			srand(time(0));
			d=(int)(30.0*rand()/RAND_MAX*19999+1.0);
			j=(int)(100.0*rand()/(RAND_MAX+1.0));
			k=(int)(70.0*rand()/RAND_MAX+1.0);
			c=j-k;
			printf(" %d - %d = ",j,k);
			scanf("%d",&a);
			if(a==c){
				printf("对了哟^_^\n");
				g++;
			}
			else{
				ct1=ct1+1;
				printf("错！正确的差是%d，滚去学习吧(╯‵□′)╯︵┴─┴\n", c);
			}
			if(g==5){
				printf("最后两道题！\n");
			}
			else if(g==6){
				printf("最后一道题！\n");
			}
			else if(g==7){
				printf("你成功了！⊙ω⊙");
			}
			else{
				continue;
			}
		}
}
