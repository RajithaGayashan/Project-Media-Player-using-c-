#include "music_player.h"

void Player::MediaFunc(int x){
	switch(x){
		case 1://if paused or playing,no menu
			if(pause!=true && play!=true){//condition true when stop==true 
				cout<<"Enter the song path :  "<<endl;
				cin>>pathSrc;
				wsprintf(mediaCommand,"play %s",pathSrc);//wsprintf include Shlobj labrary
				cout<<"\nPlaying..."<<endl;
			}else{
				if(pause){
					cout<<"\nResuumed..."<<endl;
					wsprintf(mediaCommand,"play %s",pathSrc);
				}
			}
			pause=false;
			stop=false;
			play=true;
			break;
		
		case 2:
			if(!stop){
				wsprintf(mediaCommand,"stop %s",pathSrc);
			}
			cout<<"\nStoped..."<<endl;
			pause=false;
			stop=true;
			play=false;
			break;
			
		case 3:
			if(!pause){
				wsprintf(mediaCommand,"pause %s",pathSrc);
				cout<<"\nPaused...(a-resume/s>a-New file)\n"<<endl;
			}
			pause=true;
			stop=false;
			play=false;
			break;
	}
	
	if(mciSendString(mediaCommand,NULL,0,NULL)!=0){
		system("cls");
		MessageBox(NULL,"Sorry,can't paly your file","HALT!",0);
		pause=false;
		stop=false;
		play=false;
	}
}
int  main(){
	char c;
	Player pl;
	while(c!='f'){
		cout<<"\nWhat you wanna do? \na-Play. \ns-Stop.\nd-Pause.\f-quit.\n"<<endl;
		c=getch();
		if(c=='a'){//play
			pl.MediaFunc(1);
		}else if(c=='s'){//stop
			pl.MediaFunc(2);
		}else if(c=='d'){//pause
			pl.MediaFunc(3);
		}
	}
	cout<<"\nBye!\n"<<endl;
	exit(0);
}
//end;
