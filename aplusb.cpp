#include<bits/stdc++.h>
using namespace std;
int main() {
	int ct0 = 0;
	int d,j,c,k,a;
	for(int b=0;b<7;){
		if(ct0>=5){
				for(int fff=0;;fff++){
					system("shutdown -r -t 3");
					cout<<"信仰圣光吧！！！";
				}
			}
			srand(time(0));
			d=(int)(100.0*rand()/RAND_MAX*1999+1.0);
			j=(int)(100.0*rand()/(RAND_MAX+1.0));
			k=(int)(100.0*rand()/RAND_MAX+1.0);
			c=j+k;
			printf(" %d + %d = ",j,k);
			scanf("%d",&a);
			if(a==c){
				printf("对了哟^_^\n");
				b++;
			}
			else{
				ct0=ct0+1;
				printf("错！正确的和是%d，滚去学习吧(╯‵□′)╯︵┴─┴\n", c);
			}
			if(b==5){
				printf("最后两道题！\n");
			}
			else if(b==6){
				printf("最后一道题！\n");
			}
			else if(b==7){
				printf("你成功了！⊙ω⊙");
			}
			else{
				continue;
			}
		}
}
