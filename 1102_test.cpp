#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace  std;
int start();  

int main()
{
	int ev=0,food=10,family=10;	//�i�ƭ�,����,�ڸs 
	int y=-38,hunt=10;	//�~��,�V�� 
	int c1=0,c2=0,c3=0;	//���,�l���,�l�l��� 
	srand(time(NULL));

	start();
	while(y<0&&food>=0&&family>0)	//�P�_�O�_�ŦX�������� 
	{
	Re:
		int x=rand()%6+1;	//��l�ü� 
		int year=rand()%3+1;	//�~���ü� 
		int fight=rand()%4+1;	//�D�Ԧ��Ѿ��v�ü� 
	
		c1=0;	//�M�ſ�ܭ� 
		c2=0;
		c3=0;
		cout<<endl<<"�п��:1.�V��"<<endl
			<<"       2.���l"<<endl;
		cin>>c1;	//��� 
		switch(c1)
		{
			case 1:cout<<"�g�L�d���U�W�A���M���y���l�ˡA�A��o�F����"<<endl
					<<"�ڸs-1  ����+"<<hunt;
					family--;
					food+=hunt; 
					y+=year; 
					break;
			case 2:cout<<"���l==>"<<endl;
				   system("pause");
					//���l 
					switch(x)
					{
						case 1:cout<<"�o�ͤF����ܾE�A�A�i�H��� 1.��v"<<endl
				 				   <<"                           2.���վA�����"<<endl;
								cin>>c2;
								if(c2==1)
								{
									cout<<"�A�̾a��v�׹L�F�o������ܾE�A����-5";
									food-=5;
								}
								if(c2==2)
								{
									cout<<"���M���ǭ���]���L�k�A���Ӧ��A���ڸs�����A����ԤF�A�ڸs-7 �i�ƭ�+7";
									family-=7;
									ev+=7;
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"���n�ÿ�A�A�H���bñ�ֳz��?�󨦡�"<<endl;
									goto Re;
								}
								break;	
						
						case 2:cout<<"�J�쥼���ϰ�A�A�i�H��� 1.����"<<endl
		         				    <<"                         2.¶�}"<<endl;
								cin>>c2;
								if(c2==1)
								{
									cout<<"�A���\\�����F�o���ϰ�A����-2 �ڸs-2 �i�ƭ�+5";
									food-=2;
									family-=2;
									ev+=5; 
								}
								if(c2==2)
								{
									cout<<"�A��ܤF¶�}�A���W����@���y���A����+5 �ڸs+3";
									food+=5;
									family+=3;
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"���n�ÿ�A�A�H���bñ�ֳz��?�󨦡�"<<endl;
									goto Re;
								}
								break;	
						
						case 3:cout<<"�A�J��F�ѼġA���ǱڤH�Q�쨫�F�A���A�Ǩ�F�@������ޥ��A�ڸs-3 �i��+5";
								family-=3;
								ev+=5;
								break;		
			
						case 4:cout<<"�c�ީu�ӤF�A����-3 �ڸs+7";
								food-=3;
								family+=7;
								break;		
			
						case 5:cout<<"�A�J��F�������ءA�A�i�H���1.�k�]"<<endl
								   <<"                            2.�D��"<<endl; 
								cin>>c2;
								if(c2==1)
								{
									cout<<"�A���\\�k�]�F�A�ɥR�F�@�ǰk�]���Ӫ����q�A����-1";
									food-=1;
								}
								if(c2==2)
								{
									if(fight==1)
									{
										cout<<"�A�D�Ԧ��\\�A��o�F��h���Ϧa�A�ڸs+5 ����-3 �i��+7";
										family+=5;
										food-=3;
										ev+=7;
									}
									else
									{
										cout<<"�ܿ�ѡA�A�D�ԥ��ѡA�l���F�@�ǴϦa�A���O��o�F�@�I�g��A"<<endl
											<<"�ڸs-2 ����-2  �i��+3";
										family-=2;
										food-=2;
										ev+=3;
									}
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"���n�ÿ�A�A�H���bñ�ֳz��?�󨦡�"<<endl;
									goto Re;
								}
								break;		
			
						case 6:cout<<"�ڸs�V�ӶV�e�j�A�A��ҬO�_�n�E�p���A�X���Ϧa:1.�O"<<endl
				 				   <<"                                               2.�_"<<endl; 
								cin>>c2;
								if(c2==1)
								{
									cout<<"�A���F�M���A�X���Ϧa�A���g���~�[�A"<<endl
										<<"�@���W�l���F�@�ǱڤH�A�ڸs-3 ����-5"<<endl
										<<"���ѩ����A�X���Ϧa�A����V���i�o����+3";
									family-=3;
									food-=5;
									hunt+=3; 
								}
								if(c2==2)
								{
									cout<<"�A��ܯd�b��a�c�l�ͮ��A�ڸs+5";
									family+=5;
								}
								if(c2!=1&&c2!=2)
								{
									cout<<"���n�ÿ�A�A�H���bñ�ֳz��?�󨦡�"<<endl;
									goto Re;
								}
								break;		
					}
					y+=year;
					break;
			default:cout<<"���n�ÿ�A�A�H���bñ�ֳz��?�󨦡�"<<endl;
					goto Re;
		}
		if(y==-28||y==-19||y==-3&&food>=0&&family>0)	//�Y�ŦX�S�w�~���A��ܬO�_����
		{
			Re2:
			cout<<endl<<endl<<"�ŦX�S�w�~���A�O�_�n����? 1.�O"<<endl
			        <<"                          2.�_"<<endl;
				cin>>c3;
				switch(c3)
				{
					case 1:cout<<"���ܥX�s���ʪ��A���ǭ���X�{��ΡA�ڸs-10 �i��+10";
							family-=10;
							ev+=10;	
							break;
					case 2:cout<<"�����ܡA�ڸs�~���c�l�A�ڸs+7";
							family+=7;
							break;
					default:cout<<"���n�ÿ�A�A�H���bñ�ֳz��?�󨦡�"<<endl;
							goto Re2;
				}
		} 
		
		cout<<endl<<endl<<"=============================="<<endl	//��X�ثe�ƭȪ����� 
			<<"���^�X����: �i�ƭ�   = "<<ev<<endl
			<<"            ����     = "<<food<<endl
			<<"            �ڸs�j�p = "<<family<<endl 
			<<"�ثe��"<<-y<<"���~�e"<<endl; 
		cout<<"=============================="<<endl;
		
		system("pause");
		system("cls");	//�M�ū̹� 
		
		cout<<"=============================="<<endl	//��X�W�^�X����ƭȪ����� 
			<<"�W�^�X����: �i�ƭ�   = "<<ev<<endl
			<<"            ����     = "<<food<<endl
			<<"            �ڸs�j�p = "<<family<<endl 
			<<"�ثe��"<<-y<<"���~�e"<<endl; 
		cout<<"=============================="<<endl;
	}
	
	//�C�������ÿ�X���G 
	system("pause");
	system("cls");
	cout<<"************�C������************"<<endl;
	if(y>=0&&food>=0&&family>0)	//�q�� 
	{
		cout<<"�A���\\��F�i�Ʋ��I�A�i�ƭ�   = "<<ev<<endl
			<<"                    �ڸs�j�p = "<<family<<endl;  
			//�i�ƺ��� 
			if(ev==0)
				cout<<"�A�٬O�@���p�p���ź��";
			if(ev>0&&ev<11)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=11&&ev<21)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=21&&ev<31)
				cout<<"�A�̲׶i�Ʀ�������";
			if(ev>=31&&ev<41)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=41&&ev<51)
				cout<<"�A�̲׶i�Ʀ�������";
			if(ev>=51)
				cout<<"�ӱj�F�A�A�O���a ? �A�̲׶i�Ʀ���";
				
			//�ڸs�W��
			if(family>0&&family<=10)
				cout<<endl<<"���ثO�@���Ŭ����M"<<endl; 
			if(family>10&&family<=20)
				cout<<endl<<"���ثO�@���Ŭ����M"<<endl; 
			if(family>20&&family<=30)
				cout<<endl<<"���ثO�@���Ŭ���M"<<endl; 
			if(family>30&&family<=50)
				cout<<endl<<"���ثO�@���Ŭ��L�M"<<endl; 
			if(family>50)
				cout<<endl<<"�A�w�g���Q�a�y�F"<<endl; 
	}
	else	//���e�����C�� 
	{
		if(family<=0&&food>=0)
		{
			cout<<"�A���ڸs�����F�A�i�ƭ�= "<<ev<<endl;
			//�i�ƺ��� 
			if(ev==0)
				cout<<"�A�٬O�@���p�p���ź��";
			if(ev>0&&ev<11)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=11&&ev<21)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=21&&ev<31)
				cout<<"�A�̲׶i�Ʀ�������";
			if(ev>=31&&ev<41)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=41&&ev<51)
				cout<<"�A�̲׶i�Ʀ�������";
			if(ev>=51)
				cout<<"�ӱj�F�A�A�O���a ? �A�̲׶i�Ʀ���";
			cout<<endl<<"���ثO�@���Ŭ�����"<<endl; 
		}
		if(food<0&&family>0)
		{
			cout<<"�A���ڸs�j���F�A�i�ƭ�= "<<ev<<endl;
			//�i�ƺ��� 
			if(ev==0)
				cout<<"�A�٬O�@���p�p���ź��";
			if(ev>0&&ev<11)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=11&&ev<21)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=21&&ev<31)
				cout<<"�A�̲׶i�Ʀ�������";
			if(ev>=31&&ev<41)
				cout<<"�A�̲׶i�Ʀ�����";
			if(ev>=41&&ev<51)
				cout<<"�A�̲׶i�Ʀ�������";
			if(ev>=51)
				cout<<"�ӱj�F�A�A�O���a ? �A�̲׶i�Ʀ���";
			cout<<endl<<"���ثO�@���Ŭ�����"<<endl; 
		}
	}
	cout<<"********************************"<<endl<<endl;
	
	cout<<"************�}�o�̸H�H��************"<<endl
		<<"���ثO�@���ŬO�ھ� IUCN����W�� �����ŵe��"<<endl
		<<"���o�Ӥp�{�����L�O�]���ۤv���w�ʪ��H�Ψ��Y��C���ҵo�}�F"<<endl
		<<"���O�Ʊ�j�a����R�@���ҡA�{�����ؤw�g�V�ӶV��"<<endl
		<<"�@�_������������h���쪺�ͪ�����"<<endl 
		<<"�n��?"<<endl
		<<"************************************";
		
	
	return 0;
}

int start()		//�}�Y&���� 
{
	cout<<"�A�O�@��35���~�e���ź��"<<endl
		<<"�A�N�g���@�t�C���ƥ�M�M�I"<<endl
		<<"�Q��k�ͦs�U�h�úɥi�઺�i�Ƨa"<<endl;
	getchar();		//�����N���~�� 
	cout<<"�C������: "<<endl
		<<"1.��l�Ȭ��i�ƭ�:0 ,����:10 ,�ڸs�j�p:10"<<endl 
		<<"2.�C�^�X�i��ܳV���άO���l�A�V���i��o�����A���l�N�|Ĳ�o�H���ƥ�"<<endl
		<<"3.�L�׬O�V���άO�H���ƥ󳣱N�H���W�[�~��"<<endl
		<<"4.��~��>=0���~(�]�N�O��{�N��)�A�άO����<0�αڸs<=0�ɡA�C������"<<endl<<endl; 
}
