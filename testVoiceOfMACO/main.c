#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

/*
\033[22;30m - black
\033[22;31m - red
\033[22;32m - green
\033[22;33m - brown
\033[22;34m - blue
\033[22;35m - magenta
\033[22;36m - cyan
\033[22;37m - gray
\033[01;30m - dark gray
\033[01;31m - light red
\033[01;32m - light green
\033[01;33m - yellow
\033[01;34m - light blue
\033[01;35m - light magenta
\033[01;36m - light cyan
\033[01;37m - white
 */
/*
 * dos color codes
 * 0-balck
 * 1-blue
 * 2-green
 * 3-aqua
 * 4-red
 * 5-purple
 * 6-yellow
 * 7-white
 */
#define VERSION "DK0.030V"

void sayHai(int);
void showAAHAN();
void showCreator();
void shutdownMACO();
void initiateFileRead(int);
void changeMACOColor();
void showLogo();
void showAvlCmds();
void intiateShutdown(int);
void createVoice(char *);

int compare_strings(char [],char []);

int main()
{
	/*char const *folder = getenv("TMPDIR");
	if (folder == 0)
			folder = "/tmp";*/
	char a[1000], shut[] = "shutdown pc",slp[]="sleep",abrtshut[]="abort pc shutdown",hai[]="hai",hello[]="hello",help[]="help",color[]="change color",howRU[]="how are you";
	char scrt[]="show me the ajalgujal scrt cmds",hCount[]="hai count",aahan[]="aahan",god[]="god";
	char shutNow[]="shutdown pc now",readFile[]="read textfile",stopRead[]="stop reading";
	//printf("%c[%d;%d;%dmHello World", 0x1B, 1,31,40);
	showLogo();
	printf("\n");
	createVoice("welcome!,  i am mac'o ,,an intelligent system developed by harry,, version,, "VERSION);
	printf("MACO~>");

	do
	{
		gets(a);
		if(compare_strings(a,shut))
			intiateShutdown(1);
		else if(compare_strings(a,abrtshut))
			intiateShutdown(0);
		else if(compare_strings(a,shutNow))
			intiateShutdown(2);
		else if(compare_strings(a,readFile))
			initiateFileRead(1);
		else if(compare_strings(a,stopRead))
			initiateFileRead(0);
		else if(compare_strings(a,god))
			showCreator();
		else if(compare_strings(a,aahan))
			showAAHAN();
		else if(compare_strings(a,slp))
			shutdownMACO();
		else if(compare_strings(a,hCount))
			sayHai(1);
		else if(compare_strings(a,color))
			changeMACOColor();
		else if(compare_strings(a,help))
			showAvlCmds();
		else if(compare_strings(a,""))
			showLogo();
		else if(compare_strings(a,scrt))
			printf("scecret commands\n * how are you * \n hai count \n aahan \n");
		else if(strstr(a, howRU) != NULL)
			createVoice("mac'o doing fine,Thank you,");
		else if(strstr(a,hai)!= NULL || strstr(a,hello)!= NULL)
			sayHai(0);
		else
			printf("wrong command! try \"help\"\n");
		printf("MACO~>");
	}while(!compare_strings(a,slp));

	return 0;
}

void showAvlCmds()
{
	printf("\nlist of commands available:\n");
	printf("-------------------------------\n");
	printf("hai/hello\n");
	printf("shutdown pc now\n");
	printf("shutdown pc\n");
	printf("abort pc shutdown\n");
	printf("sleep\n");
	printf("change color\n");
	printf("read textfile\n");
	printf("stop reading\n");
	printf("how are you\n");
	printf("aahan\n");
	printf("god\n");
	createVoice("the list of commands available");
}

void initiateFileRead(int flag)
{
	if(flag ==1)
	{
		system("echo Set wShell=CreateObject(\"WScript.Shell\") > %temp%/~maco.vbs");
		system("echo Set oExec=wShell.Exec(\"mshta.exe \"\"about:<input type=file id=FILE><script>FILE.click();new ActiveXObject('Scripting.FileSystemObject').GetStandardStream(1).WriteLine(FILE.value);close();resizeTo(0,0);</script>\"\"\") >> %temp%/~maco.vbs");
		system("echo sFileSelected = oExec.StdOut.ReadLine >> %temp%/~maco.vbs");
		system("echo Set objFSO = CreateObject(\"Scripting.FileSystemObject\") >> %temp%/~maco.vbs");
		system("echo Set readF = CreateObject(\"SAPI.Spvoice\") >> %temp%/~maco.vbs");
		system("echo dim x >> %temp%/~maco.vbs");
		system("echo call Gettin >> %temp%/~maco.vbs");
		system("echo sub Gettin >> %temp%/~maco.vbs");
		system("echo x = sFileSelected >> %temp%/~maco.vbs");
		system("echo If IsEmpty(x) Then >> %temp%/~maco.vbs");
		system("echo wscript.quit >> %temp%/~maco.vbs");
		system("echo End If  >> %temp%/~maco.vbs");
		system("echo call Check >> %temp%/~maco.vbs");
		system("echo End sub >> %temp%/~maco.vbs");
		system("echo sub Check >> %temp%/~maco.vbs");
		system("echo If (objFSO.FileExists(x)) Then >> %temp%/~maco.vbs");
		system("echo  call Speaker >> %temp%/~maco.vbs");
		system("echo Else >> %temp%/~maco.vbs");
		system("echo   MsgBox(\"file does not exist\") >> %temp%/~maco.vbs");
		system("echo   call Gettin >> %temp%/~maco.vbs");
		system("echo End If >> %temp%/~maco.vbs");
		system("echo End sub >> %temp%/~maco.vbs");
		system("echo sub Speaker >> %temp%/~maco.vbs");
		system("echo Set objFile = objFSO.OpenTextFile(x , ForReading) >> %temp%/~maco.vbs");
		system("echo readF.Speak \"mac'o starting to read the text file\" >> %temp%/~maco.vbs");
		system("echo Const ForReading = 1 >> %temp%/~maco.vbs");
		system("echo Dim arrFileLines() >> %temp%/~maco.vbs");
		system("echo i = 0 >> %temp%/~maco.vbs");
		system("echo Do Until objFile.AtEndOfStream >> %temp%/~maco.vbs");
		system("echo Redim Preserve arrFileLines(i) >> %temp%/~maco.vbs");
		system("echo arrFileLines(i) = objFile.ReadLine >> %temp%/~maco.vbs");
		system("echo readF.Speak arrFileLines(i) >> %temp%/~maco.vbs");
		system("echo i = i + 1 >> %temp%/~maco.vbs");
		system("echo Loop >> %temp%/~maco.vbs");
		system("echo objFile.Close >> %temp%/~maco.vbs");
		system("echo End sub  >> %temp%/~maco.vbs");
		system("start /MIN cscript %temp%/~maco.vbs");
	}
	else
	{
		system("taskkill /F /IM cscript.exe");
		createVoice("force closing MACO text file reader");
	}
}

void showAAHAN()
{
	createVoice("haha'n ");
	 printf("....      .....      ....      .:#+.@@@ ,....     .....      `.....\n");
	 printf(".....      .....     ....`     @@@@@@@@@@`..`     .....      ......\n");
	 printf(".....      .....     .....   ;#@@@@@@@@@@@'.      ....`     `..... \n");
	 printf("......      ....      ....  ;@@@@@@@@@@@@@#.     .....      ...... \n");
	 printf(" .....      .....     ....`@@@@@@@@@@@@@@@@#     .....     `.....  \n");
	 printf(" ......     `....     ...`@@@@@@@@@@@@@@@@@@#@   ....      .....   \n");
	 printf("  .....      ....     ..`@@@@@@@@@@@@@@@@@@@@@@ `...,     `.....   \n");
	 printf("   .....     ....`    `.@@@@@@@@@@@@@@@@@@@@@@@.....      .....    \n");
	 printf("   .....      ....     .@@@@@@@@@@@@@@@@@@@@@@@@@...     `....     \n");
	 printf("    ....,     ....     .@@@@@@@@@@@@@@@@@@@@@@@@@`.`     .....     \n");
	 printf("    `....      ...`    .@@@@@@@@@@@@@@@@@@@@@@@@@:.     .....      \n");
	 printf("     ,....     ...,    .@@@@@@@@@@@@@@@@@@@@@@@@@#`     ....`      \n");
	 printf("      ....     ....     @@@@@@@@@@@@@@@@@@@@@@@@@@,    `...,      .\n");
	 printf("`     `...,     ...     @@@@@@@@@@@@@@@@@@@@@@@@@@'    ....      ,.\n");
	 printf(".      ....     ,...    @@@@@@@@@@'::::@@@@@@@@@@@'   ....`     ...\n");
	 printf("..      ...,     ...    '@::::@+::::::::@@@@@@@@@@@   ...,      ...\n");
	 printf("...     `...     ...    .@@@@@@::;:::::;+@@@@@@@@@@  ....      ....\n");
	 printf("...`     ....    `...   :@::::+::'@@:::;+@@@@@@@@@@  ...`     ,....\n");
	 printf("....      ...     ...   +;:;;:':::::+@@::@@@@@@@@@@,....     ..... \n");
	 printf(".....     ....    ...   .,##::;:'::::::@:@@@@@@@@@@@...      ....  \n");
	 printf(" .....     ...     ..`   :@# ::::::;;::;;@@@@@@@@@@@...     ....   \n");
	 printf("  ....`     ...    ...  @:::::::::::::::::@@@@@@@@@@`.     ....    \n");
	 printf("   ....     ...     ..  ':::::::::+@@#::::'@@@@@@@@@'     ....`    \n");
	 printf("    ....     ...    ..` :::::::::::;''@::;;@@@@@@@@@.     ...`     \n");
	 printf("     ,..,     ..`   `.,::::::::::::::::::;'@@@@@@@@.     ....      \n");
	 printf("      ....    ...    ..#:::':::::::::::::::@@@@@@@@     ....      .\n");
	 printf(",      ...     ..`   ..:::#::::::::::::::::#@@@@@@.    ....      ..\n");
	 printf("..      ...     ..    .:'::#::::#::::::::::@+:'@:.     ...      ...\n");
	 printf("...      ...    ,.`   .:;:::'+';+::::::::::::#:::`    ...     `....\n");
	 printf("....      ...    ..    ,@;:::,::::::::::::::;#::;    ...     `.... \n");
	 printf(" ,...      ..    `.`   :@@@@@@@,:::::::::::::'::@   ...     .....  \n");
	 printf("  ....     `..    ..   ':,,,:@@@@::::::::::::::;   `..     ....    \n");
	 printf("    ...`    `.,    .`  #:@#+++,@@@@@:::::::::::    ..     ,...     \n");
	 printf("     ,..`    ...   ..  @::##,;##@@@@::::::::;;    ..     ,...      \n");
	 printf("      ....    ..    .. '::'+:,,,'::::::::::#@.   ,.     ...       ,\n");
	 printf(".       ...    ..    .  :::;;';;+:::::::::+@@   `.`    ...      `..\n");
	 printf("...      ...    ,.   .. :::',:::::::::::::@@    .`    ...      ....\n");
	 printf("....      ...    ,.   , ;:::::::::::::::::@@   ..    ..      `.... \n");
	 printf(" .....      ..    .`   .@::::::::::::::::':   ..    ..      ...,   \n");
	 printf("   ....      ..    .   .`::::::::::::::::`   `.    ..     ....`    \n");
	 printf("     ...,     ..    .   .;:::::::::::::: .   ,    .`     ...`      \n");
	 printf("       ...`    `.    . `#'::::::::::::+':   ,   `,     ...`        \n");
	 printf(",        ...     .   ,''''#::::::::::;;'#. ,   ..     ..`       `..\n");
	 printf("...`       ,.`    .`;:''''';::::::::::;'+'#   .`    ..`       .....\n");
	 printf("......       ,.   @::;'+'''::;#';#;:::#'''''@.    `..       ...... \n");
	 printf("   ....,       .#''''''+''':::::::::::'''''''';  ,.      `....`    \n");
	 printf("      ....`    #''''''''''':::::::::::'''+'+'''#`      ....`       \n");
	 printf("         `... `'''''''+''+'::::::::::''''+';;;'''#  `,..           \n");
	 printf("`     `,:,` `.'';..+''#,,.#':,,,;::.,,,''++;;,,,+'#,,,     ,,,` `..\n");
	 printf(".....`:,+,,` @'.,,,,;',,,,,#.,',,;,,;:,,''+;,,:,,++,,,,   ,,,,,,...\n");
	 printf(".....,,###,: '',,##,,+,+#;,@,,#@:,,;##;,;'',,###,,,,##,,.,,,##,,,.`\n");
	 printf("    `:'####,+',,####,:,##+,':;#@,:,####,,'#,;###@,:,###,,.,.##,,   \n");
	 printf("    ,,#####,,+:'####,:,###,;:@##,,'####+:#.,#####,:,####:.,,##,,   \n");
	 printf("    ,,##:##+,,:###@#@,,###,,,###,,###;##,,:,##;##','####.:::##,,   \n");
	 printf("...,,@##,###:,,##'.##,,###,,.##@,.###,##,:,###,+##,######,:+##,,...\n");
	 printf("...,,###,.##,,'##.,##,,########@,+##.,##+,:##@,.##,###@##@,###,,...\n");
	 printf("   ,,###@###.,###.:###,#########,###'####,,#######,###.###'###,,   \n");
	 printf("  `,'#######',########,###..'##+,########,;#######+###,;###+##,,   \n");
	 printf("  .,#####+###.########,###,,'##+,#####+##,#####'######,,######,,   \n");
	 printf("  ,,###,:,@##;##.,,'##,###,,'##::##,:,.##,###,,,#####@,,.#####:`   \n");
	 printf("..,,##,:.,###+##,,,:##.###,,'##,'##,,,.##.##;,.,#####@,,::###+,,...\n");
	 printf("..,,##,,`:'##+#;,`,.##,##',,:##.;#+,.,,##,##,,`,'#####,`,,###,,....\n");
	 printf("  `:,,,` ,,#,,',, .:@#,;@,,,,##,,.,, `,+':,,,, ,,#,'#,: `,,::,.    \n");
	 printf("   .,,` .,,,,,,,  ,,:,,,,,  ,,::,,,   ,::,,,. `.,::::,,...,,,,     \n");
	 printf("     ,...` ``   ,`  .. ``   `.`        ``  `    ..`,,`  .....`     \n");

}

void showCreator()
{
	 printf("::::::::::::::::'#''+'+++'''''''+'++++''''''''''''''''+#@@@@@@@@######;;;;;;;;\n");
	 printf(":::::::::::::::::+'+++##+++''''++++####+++++''''''''''++##@@@@##@####+;;;;;;;;\n");
	 printf(":::::::::::::::'+++########++++++##########++++'''''''''+##@@@#@@####+;;;;;;;;\n");
	 printf("::::::::::'########################################++;'''+#@@@##@####+;;;;;;;;\n");
	 printf("::::::::::######++##########################+++#########,,'#@##@@####';;;;;;;;\n");
	 printf(":::::::,:,######+#############################++++######.,,,,;#######;;;;;;;;;\n");
	 printf("::::::::::#######+#############################++++#####,,,,,,+#####+;;;;;;;;'\n");
	 printf(":::::::,:::#####++###########++################++++####+,,,,,,;###+#+;;;;;;;';\n");
	 printf(",:::::::::,#++++++#########@';;+###@############+++##+++++;,,,:##';:';;;;;';;;\n");
	 printf(",:::::,:::,#+++++++########+;;;;#################++##+++++###;,#''''';;;';;;;;\n");
	 printf(":::::::::,:++''+'++########;;;;;+###############+++#+'+++++#+++''''''::;;;;;;;\n");
	 printf(":::::::::::'+''''++#######+;;;;;'###############+++#+''''''++'''';''':::::::;;\n");
	 printf(",:::::,,:::;#;'''+++######';;;:;;##############++++#'''''''+'''';;''':::::::::\n");
	 printf(",::,::::::::#;;'''+++#++#+';;::;;+##########+++++++#'';';''+'''';;;'':::::::::\n");
	 printf("::::::,:,:::#';;;++++++##';;:::;;'#########++++++++#'''''''+''++'';';:::::::::\n");
	 printf("::::::::,:,:;#;;;'+++++#+';;;:;;;'+##+++++++++++++#+''''''++;++++';';:::::::::\n");
	 printf(":::,,:,,::::,+#';'+++##++';;;:;;;'++##+++++++++''+#'''';''++;;''+''';:::::::::\n");
	 printf(":::,:,:,,,,:,,;+#####+++'';;;:;;;;'+++##+++++++++#'';;''''+'';';'+''::::::::::\n");
	 printf(":::,,,,:,,,:,,:::;''+++'';;;::;;;;;+++++########+''';''''''';';;+';;::::::::::\n");
	 printf("::::,:,,,,,,,,:,:;'''''';;;;;:;;;;;;+++'+'''''''''';''''''''''''';;;::::::::::\n");
	 printf("::::,:,,,:,,,:,,,:'''''';;;;;;;;;;;;''+''''''''''';'''''''''''';;;;:::::::::::\n");
	 printf(":::,::,,,,,,,,,,,:'''''''';;;;;'+';'''''''''''''''''''''''';;;;;;;;:::::::::::\n");
	 printf("::::::,,:,,,,,,,,:'''''''+''''++''+''''''''';;'''''''''''''';;;;::::::::::::::\n");
	 printf(":::,,:,:,,,:,,,,,,'''''''++++++++''''''''''';;;''''''''''''';;;:::::::::::::::\n");
	 printf("::::::,,,,,,,,,,,,;''''''++++++++'''''''''''';'''''''''''''';;::::::::::::::::\n");
	 printf(":::,:::,,::,:,,:,,;''''''''+++'''''''''''''';;'''''''''''''+';;;::::::::::::::\n");
	 printf(":::::,,,,,,,,,,,,,:''''''++''''''''''''+'''';''''''''''''''''++;::::::::::::::\n");
	 printf(":::::::,,,,,,,,,,,:''''++++++++++++''''++''''''''''''''''+'''##;::::::::::::::\n");
	 printf("::::::::,,,,,,,,,,,''+++####+++++++++#+++'''''''''''''''+''''#+:::::::::::::::\n");
	 printf("::::::::,:,,,,,,,,,:'+++++++++++''++++++++''''''''''''+++''''+;:::::::::::::::\n");
	 printf(":::::::,,,:,:,,,,,,,+'''''''''''''''''''++'''''''''''++++'''':::::::::::::::::\n");
	 printf("::::::::,,:,,:,,,:,,''''''''''''''''''''''''''''''''''++++''':::::::::::::::::\n");
	 printf(":::::::,,,:,,,,,,,,::+''''''+'+'''''''''''''''''''++'+++++''':::::::::::::::::\n");
	 printf("::::::::,,,,,,,,,,,:,++'++++++++++'''''''''''''''+'++'++++''':::::::::::::::::\n");
	 printf(":::::::::::::,,,,,,,:;+'++++###++''''''''''++'+''''++++++'''';::::::::::::::::\n");
	 printf("::::::::,:,,,,:,,,:,:,+++++++#++''''''''''+++++++'+++++++'''''::::::::::::::::\n");
	 printf(":::::::::::,,,:::,:,:,++''''++'''''''''''++++++++++++++++'''''::::::::::::::::\n");
	 printf("::::::::,:::::::,:,,::;'''''''''''''''''+++++++++++++++++'''''::::::::::::::::\n");
	 printf("::::::::::::,:,:::::::,+'++'+'+'''''''''++++++++++##++++''''''':::::::::::::::\n");
	 printf(":::::::::::::::::::,:::;++++++++'+''''++++++++++++#++++'''''''';::::::::::::::\n");
	 printf("::::::::::::::::::,,::,:'+++++++++++++++++++++++++++++''''''''';::::::::::::::\n");
	 printf(":::::::::::::::::::::::::'+++++++++++##++######++++++'''''''''';;:::::::::::::\n");
	 printf(":::::::::::::::::::::::::::'++++++#############+++++++'''''''';;;:::::::::::::\n");
	 printf(":::::::::::::::::::::::::::::++#################+++++''''''';;;:::::::::::::::\n");
	 printf(":::::::::::::::::::::::::::::+++++++#++####++#++++++'''''''';;:::,,,::::::::::\n");
	 printf(":::::::::::::::::::::::::::::++++++++++++++++++++++++''''''';;::,...,::,,,,,,:\n");
	 printf(":::::::::::::::::::::::::::::;+++++++++++++++++++++++'''''';;::,,.....,,,,,,,,\n");
	 printf("if GOD is a creator,then im his co-employee ;D\n");
	 createVoice("image of mac'o's creator, harry ");
}

void shutdownMACO()
{
	createVoice("engaging full system force shutdown");
	createVoice("terminating all the processes");
	createVoice("mac'o system shutting down, good bye!");
}

void sayHai(int flag)
{
	static int countHai=1;
	if(flag==0)
	{
		if(countHai == 1)
			createVoice("hai , hello harry");
		else if(countHai == 2)
			createVoice("yaeh,hai again.");
		else if(countHai == 3)
			createVoice("really?, do you want to do this again?");
		else
			createVoice("no,no,no more hai's for today.");
		countHai++;
	}
	else
	{
		char charHaiCount[100];
		snprintf(charHaiCount,sizeof charHaiCount,"todays hai count is %d",countHai);
		createVoice(charHaiCount);
	}

}

void changeMACOColor()
{
	int scrColor;
	createVoice("choose any of the below color");
	printf("choose any of the below color\n * 0-balck\n * 1-blue\n * 2-green\n * 3-aqua\n * 4-red\n * 5-purple\n * 6-yellow\n * 7-white\nMACO COLOR~>");
	scanf("%d",&scrColor);
	createVoice("initiating color change");
	char colorCh[100];
	snprintf(colorCh, sizeof colorCh, "color %d",scrColor);
	system(colorCh);
	createVoice("color change completed");
	//getch();
}

void showLogo()
{
	system("cls");
	//printf("\t===============================================================\n");
	printf("\t\t**       **\t  **  \t    *****   \t   ****   \n");
	printf("\t\t***     ***\t **** \t  ********* \t ******** \n");
	printf("\t\t****   ****\t**  **\t ***        \t **    ** \n");
	printf("\t\t***  *  ***\t******\t  ********* \t ******** \n");
	printf("\t\t***     ***\t**  **\t    *****   \t   ****   \n");
	printf("\tAn intelligent system created by devilking15292 (Hari krishnan)\n");
	printf("\t===============================================================\n");
	printf("\t\t\t\tVERSION "VERSION "\n");
	printf("\t===============================================================\n");

}

int compare_strings(char a[], char b[])
{
   int c = 0;

   while (a[c] == b[c]) {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }

   if (a[c] == '\0' && b[c] == '\0')
      return 1;
   else
      return 0;
}

void createVoice(char * message)
{
	//string speak=strcat("echo readF.Speak \"", message);
	//char *speak=strcat(strcat("echo readF.Speak \"",message),"\" >> %temp%/~maco.vbs");
	//char textSpeak[] = (char*)speak;
	//const char * textSpeak = speak.c_str();
	//printf(message);
	char buf[1000];
	system("echo.");
	snprintf(buf, sizeof buf, "%s%s%s", "echo readF.Speak \"", message, "\" >> %temp%/~maco.vbs");
	system("echo Set readF = CreateObject(\"SAPI.Spvoice\") > %temp%/~maco.vbs");
	system(buf);
	system("echo readF.voice readF.getvoices.item(1) >> %temp%/~maco.vbs");
	system("echo readF.Rate 1 >> %temp%/~maco.vbs");
	system("start /MIN /WAIT cscript %temp%/~maco.vbs");
	//system("del %temp%\\~maco.vbs");
	//system("cls");
	//showLogo();
}

void intiateShutdown(int flag)
{
	if(flag==1)
	{
		system("shutdown -s /t 300");
		createVoice("shutdown intialized in 300 seconds");
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);

		char buf[700];
			snprintf(buf, sizeof buf,"shutdown will be done exactly at year %d month %d date %d ,time %d hours %d minutes %d seconds", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec+300);
		char* mes = &buf[0];
		createVoice(mes);
	}
	else if(flag==2)
	{
		char rep[]="no",repY[]="yes";
		createVoice("The system will shutdown instantly, do you want to continue ?");
		puts("do you want to continue \"yes/no\"");
		gets(rep);
		if(compare_strings(rep,repY))
		{
			createVoice("initializing the instant pc shutdown");
			createVoice("shutting down, good bye!");
			system("shutdown -s /t 0");
		}
		else
			createVoice("instant pc shutdown cancelled");
	}
	else
	{
		system("shutdown /a");
		createVoice("shutdown aborted,i repeat,shutdown aborted!");
	}
}

/*int createFile(char* message )
{
	FILE *fp;

	  fp = fopen("d:/maco.vbs", "w+");
	   fprintf(fp, "Set readF = CreateObject(\"SAPI.Spvoice\")\n");
	   fprintf(fp, "readF.Speak \""+message+"\"");
	  // fputs("This is testing for fputs...\n", fp);
	   fclose(fp);
	   return 1;
}*/
