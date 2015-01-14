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
	int menuChoice, i, dirChoice,c=0;
	int paronomastis;
	int count;
	char sympChoice[15],a;
	int points[6];
	for (int i = 0; i < 6; i++)
	{
		points[i] = 0;
	}
	do
	{
		printf("<MAIN MENU>\n\n");
		printf("[1]AIMORAGIA\n");
		printf("[2]EGKAVMATA\n");
		printf("[3]LIPOTHYMIA\n");
		
		scanf(" %d", &menuChoice);
		printf("\n");

	} while (menuChoice != 1 && menuChoice != 2 && menuChoice !=3);

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
		printf("\n<ODHGEIES>\n\n");          //odhgeies
		printf("AN KAPOIOS NIWTHEI OTI TOU ERXETAI LIPOTHYMIA, YPODEIXTE TOU NA PAREI VATHIES\nANAPNOES ");
		printf("KATHWS ESEIS ELEGXETAI TO SFYGMO TOU\n");
		system("pause");
		printf("AN TELIKA DEN KATAFERETE NA APOTREPSETE TH LIPOTHYMIA, XAPLWSTE TO ATOMO ANASKELA,\n");
		printf("KAI ANSHKWSTE TA PODIA TOU STHRIZONTAS TA SE MIA KAREKLA H SE 2 MAXILARIA\n");
		system("pause");
		printf("XALARWSTE TA ROUXA TOU, EIDIKA AYTA POY MPOREI NA TON SFYGOUN STO LAIMO\n");
		printf("TON THWRAKA KAI THN KOILIA (P.X.,GRAVATA,STITHODESMOS,ZWNH K.LP.)\n");
		system("pause");
		printf("ELEGKSE AN TO ATOMO FORA KINHTIKES ODONTOSTOIXIES KAI AFAIRESTE TIS.\n");
		system("pause");
		printf("AN EISTE SE KLEISTO XWRO,ANOIKSTE ENA PARATHYRO KAI,AN EINAI DYNATON,FRONTISTE NA DHMIOYRGITHEI REYMA.\n");
		system("pause");
		printf("ELEGKSE AN TO ATOMO TRAYMATISTHKE KATA THN PTWSH TOY.\n");
		system("pause");
		printf("MEINETE DIPLA TOU MEXRI NA KSANAVREI TIS AISTHHSEIS TOY.\n");
		system("pause");
		printf("AN THIATHREI THN ANAPNOH TOY,GYRISTE TON STO PLAI. STH THESH AYFTH TO KEFALI TOY THA STHRIZETAI STON\n");
		printf("AGKWNA TOY,KAI TO GONATO TOY THA EINAI LYGISMENO MPROSTA,WSTE NA MH LYGIZEI MPROYMYTA.\n");
		system("pause");
		printf("OTAN SYNELTHEI ENTELWS,THWSTE TOY NA PIEI KATI GLYKO.\n");
		system("pause");
		printf("AN H AITIA THW LIPOTHYMIAS THEN EINAI KSEKATHARH KAI APLH (P.X. FOVOS), EKSASFALISTE THN ASFALH METAVASH TOY STO NOSKOMEIO.");
		system("pause");

		return 0;
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
					c = c + 1;
					break;
				case 2:
					points[1]++;
					c = c + 1;
					break;
				case 3:
					points[2]++;
					points[3]++;
					c = c + 2;
					break;
				case 4:
					points[5]++;
					points[5]++;
					c = c + 2;
					break;
				case 5:
					points[2]++;
					points[4]++;
					c = c + 2;
					break;
				case 6:
					points[2]++;
					c = c + 1;
					break;
				case 7:
					points[2]++;
					c = c + 1;
					break;
				case 8:
					points[2]++;
					points[4]++;
					c = c + 2;
					break;
				case 9:
					points[2]++;
					c = c + 1;
					break;
				case 10:
					points[4]++;
					c = c + 1;
					break;
				case 11:
					points[4]++;
					c = c + 1;
					break;
				case 12:
					points[4]++;
					c = c + 1;
					break;
				case 13:
					points[4]++;
					c = c + 1;
					break;
				case 14:
					points[4]++;
					c = c + 1;
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
					c = c + 2;
					break;
				case 3:
					points[0]++;
					points[1]++;
					c = c + 2;
					break;
				case 4:
					points[0]++;
					c = c + 1;
					break;
				case 5:
					points[1]++;
					c = c + 1;
					break;
				case 6:
					points[1]++;
					c = c + 1;
					break;
				case 7:
					points[1]++;
					points[2]++;
					c = c + 2;
					break;
				case 8:
					points[2]++;
					c = c + 1;
					break;
				case 9:
					points[2]++;
					c = c + 1;
					break;
				case 10:
					points[2]++;
					c = c + 1;
					break;
				case 11:
					points[2]++;
					c = c + 1;
					break;
				case 12:
					points[2]++;
					c = c + 1;
					break;
				case 13:
					points[2]++;
					c = c + 1;
					break;
				}
			}
		}
	}

	if (i == 15){
		paronomastis = 6;
	}
	else{
		paronomastis = 3;
	}
	for (int count = 0; count<paronomastis; count++)
	{
		points[count] = (points[count]* 100) / c ;
	}

	printf("<PITHANES PERIPTWSEIS>\n\n");

	if (i == 15)
	{
		printf("[1]RINORRAGIA %d %%\n", points[0]);
		printf("[2]OTORRAGIA %d %%\n", points[1]);
		printf("[3]ESWTERIKH AIMORRAGIA %d %%\n", points[2]);
		printf("[4]AIMORRAGIA STOUS PNEUMONES %d %%\n", points[3]);
		printf("[5]GASTRORRAGIA %d %%\n", points[4]);
		printf("[6]AIMORRAGIA STHN EGKYMOSYNH %d %%\n\n", points[5]);
	}
	else
	{
		printf("[1]EGKAVMA 1ou VATHMOU %d %%\n", points[0]);
		printf("[2]EGKAVMA 2ou VATHMOU %d %%\n", points[1]);
		printf("[3]EGKAVMA 3ou VATHMOU %d %%\n\n", points[2]);
	}

	printf("\nPARAKALW EPILEXTE TH PIO PITHANH EPILOGH: ");
	scanf(" %d", &dirChoice);
	
	printf("\n<ODHGEIES>\n\n");          //odhgeies
	if (i == 15)
	{
		if (dirChoice == 1)
		{
			printf("BALTE TON ASTHENH NA KATHISEI ME TO KEFALI SKYMMENO PROS TA EMPROS, WSTE NA MHN KYLA TO AIMA STO LAIMO TOU\n");
			system("pause");
			printf("XALARWSTE TA ROUXA POU TOU SFIGGOUN TO LAIMO KAI PEITE TOU NA ANAPNEEI MONO APO TO STOMA\n");
			system("pause");
			printf("YPODEIXTE TOU NA PIASEI TH MYTH TOU SFIXTA ME TON DEIKTH KAI TON ANTIXEIRA KAI NA THN KRATISEI ETSI GIA 10 LEPTA\n");
			system("pause");
			printf("ENW O ASTHENHS KRATA TH MYTH TOU, ESEIS TOPOTHETEITE PANW THS MIA KRYA KOMPRESA H PAGO TYLIGMENO SE GAZA\n");
			system("pause");
			printf("AN H RINORRAGIA DEN STAMATHSEI, ZHTHSTE APO TON ASTHENH NA FYSHXEI APALA TH MYTH TOU GIA NA FYGOUN TA PHGMATA,\n");
			printf("BREXTE ENA KOMMATI BAMBAKI ME FYSIOLOGIKO ORO H KRYO NERO, STRIPSTE TO GIA NA MPAINEI KAI VOULWSTE ME AUTO TO ROUTHOUNI POU AIMORRAGEI\n");
			system("pause");
			printf("AN H RINORRAGIA EPIMENEI, TOTE PREPEI NA DEI TON ASTHENH WTORINOLARYGGOLOGOS\n");
			system("pause");
		}
		else if (dirChoice == 2)
		{
			printf("YPODEIXTE STON ASTHENH NA GEIREI TO KEFALI TOU PROS THN PLEURA TOU AUTIOU POU AIMORRAGEI\n");
			system("pause");
			printf("ELEXTE THN ANAPNOH KAI TO SFYGMO TOU\n");
			system("pause");
			printf("FRONTISTE GIA TH METAFORA STO STATHMO PRWTWN PRWTWN VOHTHEIWN H SE KAPOIO NOSOKOMEIO\n");
			system("pause");
		}
		else if (dirChoice == 3)
		{
			printf("AN TO ATOMO EXEI XASEI TIS AISTHISEIS TOU, KANEI EMETO H BGAZEI AIMA APO TO STOMA,\n");
			printf("XAPLWSTE TO STO PLEURO GIA NA MPOREI NA ANAPNEEI ELEUTHERA \n");
			system("pause");
			printf("AN O TRAVMATIAS BRISKETAI SE OPOIADHPOTE ALLH KATASTASH, APLWSTE KATW MIA KOUVERTA H KAPOIO ROUXO KAI XAPLWSTE TON \n");
			printf("ANASKELA ME TA PODIA TOU ANYPSWMENA KATA 20-30 EKATOSTA KAI AKOUMPISMENA SE ENA MAXILARI H KAPOIO TYLIGMENO ROUXO.\n");
			printf("AN EISTE BEBAIOI OTI DEN EXEI XTYPHSEI STO KEFALI, TON AYXENA H TH SPONDYLIKH STHLH, GYRISTE TO KEFALI TOU STO PLAI\n");
			printf("WSTE NA MHN KINDYNEUEI NA PNIGEI AMA KANEI EMETO\n");
			system("pause");
			printf("SKEPASTE TON TRAVMATIA ELAFRA, ALLA MHN TON ZESTANETE POLY.\n");
			system("pause");
			printf("KALESTE ASTHENOFORO\n");
			system("pause");
			printf("MH DWSETE STON ASTHENH NA PIEI H NA FAEI TIPOTA, GIATI MPOREI NA XREIASTEI XEIROURGIO\n");
			system("pause");
		}
		else if (dirChoice == 4)
		{
			printf("PRWTA PREPEI NA DIEUKRINISETE AN PROKEITAI GIA AIMOPTYSH H AIMATEMESH. STHN AIMOPTYSH TO AIMA APOBALLETAI ME BHXA,\n");
			printf("EXEI ZWHRO KOKKINO H ROZ XRWMA KAI EINAI ANAMEMEIGMENO ME BLENNA KAI SALIO, ENW STHN AIMATEMESH EXEI SYNHTHWS PIO SKOURO XRWMA KAI PERIEXEI");
			printf("TROFES KAI KOMMATIA FAGHTOY.\n");
			system("pause");
			printf("KSAPLWNETE TON ASTHENH MPROYMYTA H SE PLAGIA THESH, WSTE TO AIMA NA MPOREI EYKOLA NA APOVLHTHEI APO TOYS PNEYMONES KAI NA MHN KINTHYNEYEI NA");
			printf("PATHEI PNIGMONH APO APOFRAKSH THS ANAPNEYSTIKHS OTHOY H APO EISROFHSH AIMATOS.\n");
			system("pause");
			printf("AN O ASTHENHS MPOREI NA SAS YPOTHEIKSEI APO POION PNEYMONA PROERXETAI TO PROVLHMA, KSAPLWSTE TON STO PLEYVRO EKEINO OPOY YPARXEI TO PROVLHMA,");
			printf("GIA NA THIEYKOLYNETE THN ANAPNOH TOY.\n");
			system("pause");
			printf("THIATHRHSTE TON ASTHENH ZESTO, SKEPAZONTAS TON ME MIA KOYVERTA.\n");
			system("pause");
			printf("ELEGKSTE THN ANAPNOH KAI TO SFYGMO TOY.\n");
			system("pause");
			printf("FRONTISTE GIA THN AMESH METAFORA TOY ASTHENOYS STO NOSOKOMEIO.\n");
			system("pause");
		}
		else if (dirChoice == 5)
		{
			printf("KSAPLWSTE TON ASTHENH.\n");
			system("pause");
			printf("ELEGKSTE THN ANAPNOH KAI TON SFYGMO TOY.\n");
			system("pause");
			printf("KSEPASTE TON ME MIA ELAFRIA KOYVERTA GIA NA THIATHRHSEI THN THERMOKRASIA TOY.\n");
			system("pause");
			printf("FRONTISTE GIA TH METAFORA TOY SE NOSOKOMEIO.\n");
			system("pause");
		}
		else if (dirChoice == 6)
		{
			printf("*SOS*: SE KAMIA PERIPTWSH MHN PROSPATHHSETE NA SKOYPISETE H NA AFAIRESETE THROMVOUS AIMATOS H INES POY THA PAROYSIASTOYN STON KOLPO THS EGKYOY.\n\n");

			printf("VALTE TH GYNAIKA NA KSAPLWSH.\n");
			system("pause");
			printf("PROSPATHHSTE NA TH VOHTHHSETE NA XALARWSEI KAI NA HREMHSEI.\n");
			system("pause");
			
			printf("ANTIMETWPISTE THN KATASTASH SOK,AN YPARXEI: ");
			scanf(" %c", &a);
			
			if (a == 'Y'){
				printf("\n\n<PRWTES ENERGEIES GIA SOK>");
				
				printf("\n\nTHRASTE GRHGORA, ALLA ME PSYXRAIMIA. STHN PERIPTWSH TOY SOK, H TAXYTHTA STHN ANTIMETWPISH TOY EINAI POLY SHMANTIKOS PARAGONTAS.");
				printf("KATHHSYXASTE TO THYMA KAI VOHTHHSTE TO NA XALARWSEI.\n");
				system("pause");
				printf("MHN TO METAKINHSETE KATHOLOY, PARA MONON AN KINTHYNEYEI H ZWH TOY APO ALLH AITIA STO SHMEIO OPOY VRISKETAI.\n");
				system("pause");
				printf("KALESTE ASTHENOFORO, EPISHMAINONTAS OTI PROKEITAI GIA TH METAFORA ATOMOY POY EXI PATHEI SOK, DHLADH GIA EKSAIRETIKA EPEIGON PERISTATIKO.\n");
				system("pause");
				
				printf("\n<PRWTES VOHTHEIES>\n\n");
				printf("XWRHS NA METAKINHSETE TO THYMA, VELTIWSTE TH STASH TOY GIA NA NIWSEI PIO ANETA.\n");
				system("pause");
				printf("XALARWSTE TA TOYXA GIA NA MHN TO SFIGGOYN, IDIAITERA STO LAIMO KAI STHN KOILIA.\n");
				system("pause");
				printf("AN EISTE VEVAIOI OTI *DEN* YPARXOYN KAKWSEIS STO KEFALI, TH SPONDYLIKH STHLH, TO THWRAKA H KATAGMATA STA PODIA, ANASHKWSTE KAI STEREWSTE TA PODIA TOY ME ENA MAKSILARI H ENA TYLIGMENO");
				printf("ROYXO 20-30 EKATOSTA PIO PSHLA APO TO YPOLOIPO SWMA.\n");
				system("pause");
				printf("ELEGKSTE THN ANAPNOH TOY KAI TO SFYGMO TOY KAI KANTE TOY TEXNHTH ANAPNOH, AN YPARXEI PROVLHMA.\n");
				system("pause");
				printf("SKEPASTE TO THYMA ME KATI ELAFRY, DEN PREPEI NA KREYWNEI, ALLA OYTE NA ZESTAINETAI POLY.\n");
				system("pause");
				printf("AN DEN YPARXEI TRAYMATISMOS STO KEFALI, TH SPONDYLIKH STHLH H TON AYXENA, GYRISTE TO KEFALI TOY STO PLAI, WSTE, AN KANEI EMETO, NA MHN YPARXEI KINDYNOS NA PNIGEI.\n");
				system("pause");
				printf("PERIPOIHTHEITE TYXON EKSWTERIKA TRAYMATA (AIMORRAGIES)\n");
				system("pause");
				printf("OSO PERIMENTE TO ASTHENOFORO, ENTHARRYNETE TON TRAYMATIA KAI PROSPATHHSTE NA METRIASETE TO FOVO TOY.\n");
				printf("************************************************\n\n");
				system("pause");
			}
			
			printf("ENHMERWSTE TO GIATRO THS KAI PARTE ODHGIES GIA TIS EPOMENES KINHSEIS SAS.\n");
			system("pause");
			printf("AN H AIMORRAGIA EINAI MEGALH, FRONTISTE GIA THN AMESH METAFORA THS EGKYOY STO NOSOKOMEIO.\n");
			system("pause");
		}
	}
	else
	{
		if (dirChoice == 1)
		{
			printf("AFAIRESTE APO THN PERIOXH TOU EGKAUMATOS TA ROUXA H ALLA AXESOUAR (DAXTYLIDIA, ROLOI, ALYSIDA, ZWNH), POU MPOREI NA DHMHOURGISOUN PROVLHMA AN YPARXEI OIDHMA\n");
			system("pause");
			printf("DROSISTE TO EGKAVMA ME TREXOUMENO NERO, ME KRYES KOMPRESES H VOUTWNTAS TO AKRO POU EXEI EGKAUMA MESA SE ENA DOXEIO ME NERO\n");
			system("pause");
			printf("ZHTHSTE IATRIKH SYMBOULH GIA TO AN XREIAZETAI NA XRHSIMOPOIHSETAE KAPOIA KREMA H ALOIFH.\n");
			system("pause");
		}
		else if (dirChoice == 2)
		{
			printf("ANTIMETWPISTE THN KATASTASH SOK\n");
			system("pause");
			printf("APOMAKRYNETE APO TO EGKAUMA ROUXA H OTIDHPOTE ALLO TO KALYPTEI, EFOSON DEN EINAI KOLLHMENO PANW STO DERMA.\n");
			system("pause");
			printf("DROSISTE TO EGKAUMA ME KRYO TREXOUMENO NERO, ME KRYES KOMPRESES H BOUTWNTAS TO AKRO ME TO EGKAUMA MESA SE ENA DOXEIO ME NERO. EPIMEINETE MEXRI NA YPOXWRISEI O PONOS\n");
			system("pause");
			printf("DWSTE STON TRAUMATIA NA PIEI NERO H XYMOUS. APOTELESMATIKOTERA GIA THN PROLHPSH TOU SOK EINAI: TO NERO STO OPOIO THA EXETE DIALYSEI ALATI (ENA KOUTALAKI ALATI SE ENA LITRO NERO),\n");
			printf("TO METALLIKO NERO XWRIS ANTHRAKIKO KAI TO GALA\n");
			system("pause");
			printf("KALYPSTE APALA TO EGKAVMA ME APOSTEIROMENES GAZES H KATHARES PETSETES KAI METAFERETE TON TRAUMATIA STO NOSOKOMEIO\n");
		}
		else if (dirChoice == 3)
		{
			printf("KALESTE ASTHENOFORO\n");
			system("pause");
			printf("ELEXTE TO SFYGMO KAI THN ANAPNOH TOU THYMATOS. AN XREIAZETAI, PROXWRHSTE SE TEXNHTH ANAPNOH KAI SE THWRAKIKES SYMPIESEIS.\n");
			system("pause");
			printf("PROSPATHISTE NA PROLAVETE TO SOK H ANTIMETWPISTE TO, AN EXEI HDH EMFANISTEI.\n");
			system("pause");
			printf("APOMAKRYNETE POLY PROSEKTIKA APO TO EGKAVMA KATHE TI POU TO KALYPTEI, ME THN PROYPOTHESH OTI DEN EINAI KOLLHMENO PANW STO DERMA.\n");
			system("pause");
			printf("MHN AFAIREITE APO TO EGKAVMA KAMENO DERMA\n");
			system("pause");
			printf("SKEPASTE THN PERIOXH TOU EGKAVMATOS ME ENA KOMMATI KATHARO YFASMA (P.X., SENTONI), TO OPOIO EXETE VREXEI ME NERO H FYSIOLOGIKO ORO, KAI PERIMENETE ASTHENOFORO\n");
			system("pause");
		}
	}

	return 0;
}