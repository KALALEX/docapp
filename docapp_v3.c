//#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

/*********************************************************
* ------------------------------------------------------ *
* This is an app designed to help all the the people who *
* don't know how to perform first aid help               *
* Authors: Alexandros Kalavitis, Dimitris Giampouris     *
* email: kalalex007@hotmail.com/giampouris@gmail.com     *
* ------------------------------------------------------ *
**********************************************************/

//int ckeck_N_Y(???);         //ALELELELELELELE

int main()
{
	int menuChoice, i, dirChoice;
	int paronomastis;
	int count;
	char sympChoice[15];
	int points[6];
	for (int i = 0; i < 6; i++)
	{
		points[i] = 0;
	}

	printf("<MAIN MENU>\n\n");
	printf("[1]AIMORAGIA\n");
	printf("[2]EGKAVMATA\n");
	printf("[3]LIPOTHYMIA\n");

	scanf(" %d", &menuChoice);
	printf("\n");

	switch (menuChoice)
	{
	case 1:{
		printf("<AIMORAGIA>\n\n");

		printf("EKDORA-PLHGH: ");
		scanf(" %c", &sympChoice[0]);

		if (sympChoice[0] == 'Y')            //checkare edw auth thn epilogh gia thn ekdora
		{
			break;
		}

		printf("\nROI AIMATOS APO TH MYTI: ");
		scanf(" %c", &sympChoice[1]);

		printf("\nROH AIMATOS APO TO AUTI: ");
		scanf(" %c", &sympChoice[2]);

		printf("\nVHXAS ME AIMA: ");
		scanf(" %c", &sympChoice[3]);

		printf("\nKOLPIKH AIMORAGIA KAI SOK: ");
		scanf(" %c", &sympChoice[4]);

		printf("\nEMETOS ME AIMA: ");
		scanf(" %c", &sympChoice[5]);

		printf("\nKAFE EMETOS: ");
		scanf(" %c", &sympChoice[6]);

		printf("\nKENWSH ME AIMA: ");
		scanf(" %c", &sympChoice[7]);

		printf("\nMAVRH KENWSH: ");
		scanf(" %c", &sympChoice[8]);

		printf("\nKASTANOMAVRA H KOKKINA OURA: ");
		scanf(" %c", &sympChoice[9]);

		printf("\nPTWSH ARTIRIAKHS PIESHS: ");
		scanf(" %c", &sympChoice[10]);

		printf("\nNAYTIA: ");
		scanf(" %c", &sympChoice[11]);

		printf("\nEFIDRWSH: ");
		scanf(" %c", &sympChoice[12]);

		printf("\nTAXYPALMIA ME ADYNAMO SFYGMO: ");
		scanf(" %c", &sympChoice[13]);

		printf("\nWXROTHTA: ");
		scanf(" %c", &sympChoice[14]);
		break; }
	case 2:
	{
		printf("\nEGKAVMA APO HLEKTRISMO: ");
		scanf(" %c", &sympChoice[0]);

		if (sympChoice[0] == 'Y')            //checkare edw auth thn epilogh gia egkavma apo hlektrismo bzzzz!
		{
			break;
		}

		printf("\nXHMIKO EGKAVMA: ");
		scanf(" %c", &sympChoice[1]);

		if (sympChoice[1] == 'Y')             //check gia xhmika ypokathgories
		{
			break;
		}

		printf("\nOXYS PONOS: ");
		scanf(" %c", &sympChoice[2]);

		printf("\nKOKKINISMA DERMATOS: ");
		scanf(" %c", &sympChoice[3]);

		printf("\nOIDHMA: ");
		scanf(" %c", &sympChoice[4]);

		printf("\nENTONO OIDHMA: ");
		scanf(" %c", &sympChoice[5]);

		printf("\nFYSALIDES: ");
		scanf(" %c", &sympChoice[6]);

		printf("\nSOK: ");
		scanf(" %c", &sympChoice[7]);

		printf("\nTAXYPALMIA: ");
		scanf(" %c", &sympChoice[8]);

		printf("\nPTWSH ARTHRIAKHS PIESHS: ");
		scanf(" %c", &sympChoice[9]);

		printf("\nVHXAS DYSPNOIA: ");
		scanf(" %c", &sympChoice[10]);

		printf("\nAPOUSIA PONOU: ");
		scanf(" %c", &sympChoice[11]);

		printf("\nASPRO KASTANO H MAVRO DERMA: ");
		scanf(" %c", &sympChoice[12]);

		printf("\nFOUSKALES ME POLY YGRO STO EGKAVMA: ");
		scanf(" %c", &sympChoice[13]);
		break;
	}
	case 3:
		{
		printf("\nOdhgeies\n");          //odhgeies
		break;
		}
	}

	if (menuChoice == 1)
	{
		i = 15;
	}
	else
	{
		i = 14;
	}

	for (int count = 0; count<i; count++)
	{
		if (sympChoice[count] == 'Y')
		{
			if (i == 15)
			{
				switch (count)
				{
				case 1:
					points[0]++;
					break;
				case 2:
					points[1]++;
					break;
				case 3:
					points[2]++;
					points[3]++;
					break;
				case 4:
					points[5]++;
					points[5]++;
					break;
				case 5:
					points[2]++;
					points[4]++;
					break;
				case 6:
					points[2]++;
					break;
				case 7:
					points[2]++;
					break;
				case 8:
					points[2]++;
					points[4]++;
					break;
				case 9:
					points[2]++;
					break;
				case 10:
					points[4]++;
					break;
				case 11:
					points[4]++;
					break;
				case 12:
					points[4]++;
					break;
				case 13:
					points[4]++;
					break;
				case 14:
					points[4]++;
					break;
				}
			}
			else if (i == 14)
			{
				switch (count)
				{
				case 2:
					points[0]++;
					points[1]++;
					break;
				case 3:
					points[0]++;
					points[1]++;
					break;
				case 4:
					points[0]++;
					break;
				case 5:
					points[1]++;
					break;
				case 6:
					points[1]++;
					break;
				case 7:
					points[1]++;
					points[2]++;
					break;
				case 8:
					points[2]++;
					break;
				case 9:
					points[2]++;
					break;
				case 10:
					points[2]++;
					break;
				case 11:
					points[2]++;
					break;
				case 12:
					points[2]++;
					break;
				case 13:
					points[2]++;
					break;
				}
			}
		}
	}

	if (i == 15)
		paronomastis = 5;
	else
		paronomastis = 3;

	for (int count = 0; count<paronomastis; count++)
	{
		points[count] = (points[count] / paronomastis) * 100;
	}

	printf("<PITHANES PERIPTWSEIS>\n\n");

	if (i == 15)
	{
		printf("[1]RINORRAGIA %d %\n", points[0]);
		printf("[2]OTORRAGIA %d %\n", points[1]);
		printf("[3]ESWTERIKH AIMORRAGIA %d %\n", points[2]);
		printf("[4]AIMORRAGIA STOUS PNEUMONES %d %\n", points[3]);
		printf("[5]GASTRORRAGIA %d %\n", points[4]);
		printf("[6]AIMORRAGIA STHN EGKYMOSYNH %d %\n", points[5]);
	}
	else
	{
		printf("[1]EGKAVMA 1ou VATHMOU %d %\n", points[0]);
		printf("[2]EGKAVMA 2ou VATHMOU %d %\n", points[1]);
		printf("[3]EGKAVMA 3ou VATHMOU %d %\n", points[2]);
	}

	printf("PARAKALW EPILEXTE TH PIO PITHANH EPILOGH: ");
	scanf(" %d", &dirChoice);


	return 0;
}