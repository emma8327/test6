#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
#include <sodium.h>
#include <botan/system_rng.h>
using namespace  std;

int main()
{
	start();
	while(y<0&&food>=0&&family>0)	//判斷是否符合結束條件 
	{
		int x=random_int%6+1;	//骰子亂數 
		int year=random_int%3+1;	//年分亂數 
		int fight=random_int%4+1;	//挑戰成敗機率亂數 
	
		c1=0;	//清空選擇值 
		c2=0;
		c3=0;
		cout<<endl<<"請選擇:1.覓食"<<endl
			<<"       2.骰骰子"<<endl;
		cin>>c1;	//選擇 
		switch(c1)
		{
			case 1:cout<<"經過千辛萬苦，雖然有造成損傷，你獲得了食物"<<endl
					<<"族群-1  食物+"<<hunt;
					family--;
					food+=hunt; 
					y+=year; 
					break;
			case 2:cout<<"骰骰子==>"<<endl;
				   system("pause");
					//骰骰子 
					switch(x)
					{
						case 1:cout<<"發生了氣候變遷，你可以選擇 1.休眠"<<endl
				 				   <<"                           2.嘗試適應氣候"<<endl;
								cin>>c2;
								if(c2==1)
								{
									cout<<"你依靠休眠度過了這次氣候變遷，食物-5";
									food-=5;
								}
								if(c2==2)
								{
									cout<<"雖然有些個體因為無法適應而死，但族群整體更適應氣候了，族群-7 進化值+7";
									family-=7;
									ev+=7;
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"不要亂選，你以為在簽樂透嗎?⊙谷⊙"<<endl;
								}
								break;	
						
						case 2:cout<<"遇到未知區域，你可以選擇 1.探索"<<endl
		         				    <<"                         2.繞開"<<endl;
								cin>>c2;
								if(c2==1)
								{
									cout<<"你成功\探索了這塊區域，食物-2 族群-2 進化值+5";
									food-=2;
									family-=2;
									ev+=5; 
								}
								if(c2==2)
								{
									cout<<"你選擇了繞開，路上捕到一些獵物，食物+5 族群+3";
									food+=5;
									family+=3;
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"不要亂選，你以為在簽樂透嗎?⊙谷⊙"<<endl;
								}
								break;	
						
						case 3:cout<<"你遇到了天敵，有些族人被抓走了，但你學到了一些應對技巧，族群-3 進化+5";
								family-=3;
								ev+=5;
								break;		
			
						case 4:cout<<"繁殖季來了，食物-3 族群+7";
								food-=3;
								family+=7;
								break;		
			
						case 5:cout<<"你遇到了未知物種，你可以選擇1.逃跑"<<endl
								   <<"                            2.挑戰"<<endl; 
								cin>>c2;
								if(c2==1)
								{
									cout<<"你成功\逃跑了，補充了一些逃跑消耗的熱量，食物-1";
									food-=1;
								}
								if(c2==2)
								{
									if(fight==1)
									{
										cout<<"你挑戰成功\，獲得了更多的棲地，族群+5 食物-3 進化+7";
										family+=5;
										food-=3;
										ev+=7;
									}
									else
									{
										cout<<"很遺憾，你挑戰失敗，損失了一些棲地，但是獲得了一點經驗，"<<endl
											<<"族群-2 食物-2  進化+3";
										family-=2;
										food-=2;
										ev+=3;
									}
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"不要亂選，你以為在簽樂透嗎?⊙谷⊙"<<endl;
								}
								break;		
			
						case 6:cout<<"族群越來越龐大，你思考是否要遷徙到更適合的棲地:1.是"<<endl
				 				   <<"                                               2.否"<<endl; 
								cin>>c2;
								if(c2==1)
								{
									cout<<"你為了尋找更適合的棲地，歷經長途跋涉"<<endl
										<<"一路上損失了一些族人，族群-3 食物-5"<<endl
										<<"但由於找到更適合的棲地，之後覓食可得食物+3";
									family-=3;
									food-=5;
									hunt+=3; 
								}
								if(c2==2)
								{
									cout<<"你選擇留在原地繁衍生息，族群+5";
									family+=5;
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"不要亂選，你以為在簽樂透嗎?⊙谷⊙"<<endl;
								}
								break;		
					}
					y+=year;
					break;
			default:cout<<"不要亂選，你以為在簽樂透嗎?⊙谷⊙"<<endl;
					break;
		}
		while(y==-28||y==-19||y==-3&&food>=0&&family>0)	//若符合特定年分，選擇是否突變
		{
			cout<<endl<<endl<<"符合特定年分，是否要突變? 1.是"<<endl
			        <<"                          2.否"<<endl;
				cin>>c3;
				switch(c3)
				{
					case 1:cout<<"突變出新的性狀，有些個體出現畸形，族群-10 進化+10";
							family-=10;
							ev+=10;	
							break;
					case 2:cout<<"不突變，族群繼續繁衍，族群+7";
							family+=7;
							break;
					default:cout<<"不要亂選，你以為在簽樂透嗎?⊙谷⊙"<<endl;
							break;
				}
		} 
		
		cout<<endl<<endl<<"=============================="<<endl	//輸出目前數值的報表 
			<<"此回合結算: 進化值   = "<<ev<<endl
			<<"            食物     = "<<food<<endl
			<<"            族群大小 = "<<family<<endl 
			<<"目前為"<<-y<<"億年前"<<endl; 
		cout<<"=============================="<<endl;
		
		system("pause");
		system("cls");	//清空屏幕 
		
		cout<<"=============================="<<endl	//輸出上回合結算數值的報表 
			<<"上回合結算: 進化值   = "<<ev<<endl
			<<"            食物     = "<<food<<endl
			<<"            族群大小 = "<<family<<endl 
			<<"目前為"<<-y<<"億年前"<<endl; 
		cout<<"=============================="<<endl;
	}
	
	//遊戲結束並輸出結果 
	system("pause");
	system("cls");
	cout<<"************遊戲結束************"<<endl;
	if(y>=0&&food>=0&&family>0)	//通關 
	{
		cout<<"你成功\抵達進化終點，進化值   = "<<ev<<endl
			<<"                    族群大小 = "<<family<<endl;  
			//進化種類 
			if(ev==0)
				cout<<"你還是一隻小小的藍綠菌";
			if(ev>0&&ev<11)
				cout<<"你最終進化成魚類";
			if(ev>=11&&ev<21)
				cout<<"你最終進化成昆蟲";
			if(ev>=21&&ev<31)
				cout<<"你最終進化成爬蟲類";
			if(ev>=31&&ev<41)
				cout<<"你最終進化成鳥類";
			if(ev>=41&&ev<51)
				cout<<"你最終進化成哺乳類";
			if(ev>=51)
				cout<<"太強了，你是神吧 ? 你最終進化成貓";
				
			//族群規模
			if(family>0&&family<=10)
				cout<<endl<<"物種保護等級為極危"<<endl; 
			if(family>10&&family<=20)
				cout<<endl<<"物種保護等級為易危"<<endl; 
			if(family>20&&family<=30)
				cout<<endl<<"物種保護等級為近危"<<endl; 
			if(family>30&&family<=50)
				cout<<endl<<"物種保護等級為無危"<<endl; 
			if(family>50)
				cout<<endl<<"你已經稱霸地球了"<<endl; 
	}
	else	//提前結束遊戲 
	{
		if(family<=0&&food>=0)
		{
			cout<<"你的族群滅絕了，進化值= "<<ev<<endl;
			//進化種類 
			if(ev==0)
				cout<<"你還是一隻小小的藍綠菌";
			if(ev>0&&ev<11)
				cout<<"你最終進化成魚類";
			if(ev>=11&&ev<21)
				cout<<"你最終進化成昆蟲";
			if(ev>=21&&ev<31)
				cout<<"你最終進化成爬蟲類";
			if(ev>=31&&ev<41)
				cout<<"你最終進化成鳥類";
			if(ev>=41&&ev<51)
				cout<<"你最終進化成哺乳類";
			if(ev>=51)
				cout<<"太強了，你是神吧 ? 你最終進化成貓";
			cout<<endl<<"物種保護等級為滅絕"<<endl; 
		}
		if(food<0&&family>0)
		{
			cout<<"你的族群餓死了，進化值= "<<ev<<endl;
			//進化種類 
			if(ev==0)
				cout<<"你還是一隻小小的藍綠菌";
			if(ev>0&&ev<11)
				cout<<"你最終進化成魚類";
			if(ev>=11&&ev<21)
				cout<<"你最終進化成昆蟲";
			if(ev>=21&&ev<31)
				cout<<"你最終進化成爬蟲類";
			if(ev>=31&&ev<41)
				cout<<"你最終進化成鳥類";
			if(ev>=41&&ev<51)
				cout<<"你最終進化成哺乳類";
			if(ev>=51)
				cout<<"太強了，你是神吧 ? 你最終進化成貓";
			cout<<endl<<"物種保護等級為滅絕"<<endl; 
		}
	}

	return 0;
}
void f() {
  std::array<char,10>random_chars; /*char random_chars[10];*/
  randombytes_buf(random_chars, 10); // Compliant
  uint32_t random_int = randombytes_uniform(10); // Compliant

  std::array<char,10>random_chars; /*uint8_t random_chars[10];*/
  Botan::System_RNG system;
  system.randomize(random_chars, 10); // Compliant
}
