#include "music_palyer.h"

void Player::MediaFunc(int x){
	switch(x){
		case 1:
			if(pause!=true && play!=true){//condition true when stop==true 
				cout<<"Enter the song path :  "<<endl;
				cin>>pathSrc;
				wsprintf(mediaCommand,"play %s",pathSrc);//wsprintf include Shlobj labrary
				cout<<"\nPlaying..."<<endl;
			}
			pause=false;
			stop=false;
			play=true;
			break;
		
		case 2:
			pause=false;
			stop=true;
			play=false;
			break;
			
		cade 3:
			pause=true;
			stop=false;
			play=false;
			break;
	}
}
