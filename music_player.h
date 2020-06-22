//header file cant define,only declaration.
#include<conio.h> //using getch() function
#include <Shlobj.h> //using wsprintf,mciSendString,MessageBox function
#include<iostream> //for using namespace std
#include<string.h>
using namespace std;

#pragma comment(lib,"winmm.lib")//winmm library using for our programme,It's working Shloby library(this is using for mciSendString function)

class Player{
	public:
		void MediaFunc(int x); //1-paly,2-stop,3-pause
		bool stop;
		bool play;
		bool pause;
		char mediaCommand[50];
		char pathSrc[50]; //to stored media path
};



