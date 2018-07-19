﻿//comment added
#include "stdafx.h"
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>






void printTitle();
// pre-cond: none
// Post-cond: Prints title/baner

int getChoice(double x);
//precond:none
//postcond: Returns an int

int attrubuteStats(int x,int y[6][4]);
//pre-cond: none
//post-cond: stores the players atribute stats

void printMenu();
// pre-cond: none
// post-cond: Prints Menu

void raceDescription(int x);

void printRace(int x);
// pre-cond: none
// post-cond: Prints Race stats and descriptiom

int getRace();

void raceName(int x);

char getYN();
// precond:  None
// postcond: Returns a 'y' or 'n'

double getInRange(double s, double f);

int getIntInRange(double s, double f);

int getTrack();

void printTrack(int x);

void trackName(int x);

int getRaceStats();




using namespace std;

int main()

{	
	char CharaFName[80], CharaLName[80];
	int isRace, isTrack, exp, level;
	
	printTitle();
	Sleep(5000);
	system("CLS");


	isRace = getRace();
	cout << "\nYou have chosen to be";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	raceName(isRace); cout << ".\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	Sleep(5000);
	system("CLS");

	cout << "\nAccessing";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cout << " LCARS ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE); 
	cout << "Historical Data\nPlease standby...\n\n";
	Sleep(3000);
	raceDescription(isRace);

	cout << "\nWhat is your charactor\'s first name? ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cin >> CharaFName;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	cout << "\nWhat is your charactor\'s last name? ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cin >> CharaLName;
	cout << "\n\n" << CharaFName << " " << CharaLName << "\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	cout << "Welcome to StarFleet, Cadet ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cout << CharaLName << ".\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);

	cout << "OK Cadet, Now you must choose your career track.\n\n";
	system("pause");
	system("CLS");
	isTrack = getTrack();

	cout << "\nCadet ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cout << CharaFName << ' ' << CharaLName;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	raceName(isRace);
	cout << ' ';
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	trackName(isTrack);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	cout << " career track.\n\n";
	system("pause");
	return 0;

}

void printTitle() {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	
	
	
	cout << "\n\n\n";
	cout << setw(52) << ".``````````````````````````````````````````````````````````````````````````````````````````````````.\n";
	cout << setw(52) << "`                                                .o+`                                              .\n";
	cout << setw(52) << "`                                               oNMMm-                                             .\n";
	cout << setw(52) << "`                                             `yMMMMMN/                                            .\n";
	cout << setw(52) << "`                                            `hMMMMMMMN/                                           .\n";
	cout << setw(52) << "`                                           `hMMMMMMMMMN+                                          .\n";
	cout << setw(52) << "`                                           yMMMMMMMMMMMN/                                         .\n";
	cout << setw(52) << "`                                          yMMMMMMMMMMMMMN:                                        .\n";
	cout << setw(52) << "`                                         +NMMMMMMMMMMMMMMm-                                       .\n";
	cout << setw(52) << "`                                        :NMMMMMMMMMMMMMMMMd`                                      .\n";
	cout << setw(52) << "`                                       .NMMMMMMMMMMMMMMMMMMy                                      .\n";
	cout << setw(52) << "`                                      `dMMMMMMMMMMMMMMMMMMMNo                                     .\n";
	cout << setw(52) << "`                                      yMMMMMMMMMMMMMMMMMMMMMN:                                    .\n";
	cout << setw(52) << "`                                     +NMMMMMMMMMMMMMMMMMMMMMMm.                                   .\n";
	cout << setw(52) << "`                                `-:/oNMMMMMMMMMMMMMMMMMMMMMMMMd:-`                                .\n";
	cout << setw(52) << "`                         `.:+shmmNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMNNmdys+:.`                         .\n";
	cout << setw(52) << "`                     .:ohmNNNdhso/-dMMMMMMMMMMMMMMMMMMMMMMMMMMMMsoyhmNNmmho:.                     .\n";
	cout << setw(52) << "`                 `:ohmNNdy+-.`    /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMd` ``.:oydNNmdo:`                 .\n";
	cout << setw(52) << "`              `:smNNds/.`        `mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs       `./sdNNmy:`              .\n";
	cout << setw(52) << "`            -odNNho-`            sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:          `-ohNNdo-            .\n";
	cout << setw(52) << "`          -yNMmo-`              -NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd`            `-smMNy-          .\n";
	cout << setw(52) << "`        -yNMd/`                `dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo               .+mMNy-        .\n";
	cout << setw(52) << "`      `+NMm+`                  oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.                .oNMm+`      .\n";
	cout << setw(52) << "`     `hNMh.                   .NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh                  -dMNy`     .\n";
	cout << setw(52) << "`    `dMMs`                    yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/                  `hMMh`    .\n";
	cout << setw(52) << "`    yMMh`                    /NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm`                  `dMMs    .\n";
	cout << setw(52) << "`   :NMN.                    `mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo                   -NMN-   .\n";
	cout << setw(52) << "`   yMMy                     oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.                   dMMs   .\n";
	cout << setw(52) << "`   dMM+                    .NMMMMMMMMMMMMMMMMMMMMMNmdyyyhmNMMMMMMMMMMMMy                   sMMh   .\n";
	cout << setw(52) << "`   dMMo                    yMMMMMMMMMMMMMMMMMMMNmy/.`    `:smMMMMMMMMMMN-                  yMMy   .\n";
	cout << setw(52) << "`   oMMd                   :NMMMMMMMMMMMMMMMMMNd/.           .omMMMMMMMMMh                 `mMM+   .\n";
	cout << setw(52) << "`   .NMM+                  dMMMMMMMMMMMMMMMMNh:`               -hNMMMMMMMM/                +MMm`   .\n";
	cout << setw(52) << "`    /NMN:                /MMMMMMMMMMMMMMMNd/                   `oNMMMMMMMm`              :NMN:    .\n";
	cout << setw(52) << "`     +NMN:              `mMMMMMMMMMMMMMMm/`                      /NMMMMMMM+             /NMN/     .\n";
	cout << setw(52) << "`      :mMNo`            +MMMMMMMMMMMMMNo`                         /NMMMMMMm`          `sNMm:      .\n";
	cout << setw(52) << "`       .yNMd/`         `mMMMMMMMMMMMNy-                            :NMMMMMMo        `+mMNy.       .\n";
	cout << setw(52) << "`         :hNMd/`       oMMMMMMMMMMMm/                               :NMMMMMN.     .omMNh:         .\n";
	cout << setw(52) << "`           :yNMms:`   .NMMMMMMMMMNy.                                 :NMMMMMs  `:yNMNy:           .\n";
	cout << setw(52) << "`             .odNMmy/.sMMMMMMMMMm/                                    /NMMMMN+ymNNd+.             .\n";
	cout << setw(52) << "`                -+hNNNNMMMMMMMNy.                                      +MMMMMMNh+-                .\n";
	cout << setw(52) << "`                   `:dMMMMMMMMy.``                              ```-/shmMNMMMN-                   .\n";
	cout << setw(52) << "`                    `mMMMMMMNNNNmdyso/:--.``````````````.--:/osydmNNNmhs+sMMMMo                   .\n";
	cout << setw(52) << "`                    +MMMMMNs`.:/oshdmNNNNNNNNmmmdmmmmNNNNNNNNNdhyo+:.     hMMMN`                  .\n";
	cout << setw(52) << "`                   `mMMMMN/          `.-://++oooooooo++//:-.`             `dMMM+                  .\n";
	cout << setw(52) << "`                   /MMMMd-                                                 .mMMm`                 .\n";
	cout << setw(52) << "`                   mMMNy`                                                   -NMM+                 .\n";
	cout << setw(52) << "`                  .NNN+                                                      :mNd                 .\n";
	cout << setw(52) << "`                   .-`                                                         -.                 .\n";
	cout << setw(52) << ".``````````````````````````````````````````````````````````````````````````````````````````````````.\n";
	cout << setw(52) << "Star Trek RPG\n" << setw(57) << "Charactor Creation Test\n"
		<< setw(50) << "ALPHA TEST\n" << setw(52) << "By Michael\n\n\n";


}

int getChoice(double x) {
	while (x != int(x)) {
		cout << x << " is not a valid option \nPleas try again: ";
		cin >> x;
		cin.ignore(80, '\n');
	}
	return x;
}

int rollDie()
{
	int roll;
	int min = 1; // the min number a die can roll is 1
	int max = 6;// this->dieSize; // the max value is the die size

	roll = rand() % (max - min + 1) + min;

	return roll;
}

char getYN() {
	char x;

	cin >> x; cin.ignore(80, '\n');
	if (x >= 'A' && x <= 'Z')
		x += 'a' - 'A';

	while (!(x == 'y' || x == 'n')) {
		cout << "You must enter Yes or No! Please try again: ";
		cin >> x; cin.ignore(80, '\n');
		if (x >= 'A' && x <= 'Z')
			x += 'a' - 'A';
	}
	return x;
}

void printRace(int x) {
	

		switch (x) {
		case 1:
			cout << "\nHailing from the frigid planet Andoria, Andorians are\ncharacterized by their blue skin, snowy white hair and antennae.\nThey tend to be violent and warlike, though they channel their\naggressive tendencies into ritualized dueling.\n\n\n"
				<< "Attributes\n\tFitness 3[6]\n\tVitality + 1\n\tCoordination 2[5]\n\tIntellect 2[5]\n\tLogic - 1\n\tPerception + 1\n\tPresence 2[5]\n\tPsi 0[5]\n" << "Skills\n\tAny Science(choose Specialization)\n\tCulture(Andorian) 2 (3)\n\tHistory(Andorion) 1"
				<< "(2)\t\n\tLanguage\n\t\tAndorian 2\n\tPrimitive Weaponry(CM) 2 (3)\n\tWorld Knowledge(Andoria) 1 (2)\n\n";
			break;

		case 2:
			cout << "\nBetozoids are characterized by their telepathic abilities,\nenabling them to read most minds.\nTheir strong ethics, however, prevent them from abusing their powers.\nPeaceful and altruistic, Betazoids typically become ship's counselors, doctors or ombossodors.\n\n"
				<< "Attributes\n"
				<<"\tFitness 1[5]\n"
				<<"\tCoordination 2[5]\n"
				<<"\tIntellect 2[5]\n"
				<<"\tPresence 2[5]\n"
				<<"\tEmpathy + 1\n"
				<<"\tPsi 2[6]\n"
				<<"Skills\n"
				<<"\tCharm(Influence) 2 (3)\n"
				<<"\tCulture(Betazoid) 2 (3)\n"
				<<"\tHistory(Betazoid) 1 (2)\n"
				<<"\tLanguage\n\t\tBetazoid 1\n"
				<<"\tReceptive Telepathy 2\n"
				<<"\tWorld Knowledge(Betazed) 1 (2)\n\n";
			break;

		case 3:
			cout << "\nNative to the planet Belarus IX, Bolians are distinguished by\ntheir light blue skin and a bifurcated ridge running down the center\nof their face. They tend to be dedicated to duty, working hard to\nprove tbeir commitment to the Federation and StarFleet.Their\n"
				<< "affinity for organization and group dynamics makes them wellsuited\nto almost any position in StarFleet.\n\n"
				<< "Atrributes\n"
				<< "\tFitness 2[5]\n\t\tStrenght -1\n"
				<< "\tCoordination 2[5]\n\t\tDexterity +1\n"
				<< "\tIntellect 2[5]\n"
				<< "\tPresence 2[5]\n"
				<< "\tPsi 0[5]\n"
				<< "Skills\n"
				<< "\tAdministration (choose Specialization) 2 (3)\n"
				<< "\tCulture (Bolian) 2 (3)\n"
				<< "\tHistory(Bolian) 1 (2)\n"
				<< "\tLanguage\n\t\tBolian 2\n"
				<< "\tSocial Science (choose Specialization} 2 (3)\n"
				<< "\tWorld Knowledge(Bolarus IX) 1 (2)\n\n";
			break;

		case 4:
			cout << "\nThe natives of Alpha Centauri appear vitually identical to\n"
				<< "Humans, though the placement of their internal organs differs\n"
				<< "significantly. A highly spiritual people, they subscribe to a holistic\n"
				<< "approach, making them excellent scientists and artists. Quite\n"
				<< "often, people mistake Centaurans for Humans.\n\n"

				<< "Attributes\n"
				<< "\tFitness 2[5]\n"
				<< "\tCoordination 2[5]\n"
				<< "\tIntellect 2[5]\n\t\tLogic + 1\n"
				<< "\tPresence 2[5]\n\t\tEmpathy + 1\n"
				<< "\tPsi 0[5]\n"

				<< "Skills\n"
				<< "\tAny Science(choose Specialization) 2 (3)\n"
				<< "\tArtistic Expression(choose Specialization) 2 (3)\n"
				<< "\tCulture(Centouran) 2 (3)\n"
				<< "\tHistory(Centauran} 1 (2)\n"
				<< "\tLanguage\n\t\tCentauran Prime 2\n"
				<< "\tWorld Knowledge(Alpha Cenfauri) 1 (2)\n\n";
				break;		
		case 5:
			cout << "\nHumans come from Earth or one of the many colony worlds in\n"
				<< "Federation space.Transcending their warlike natures, they grew to\n"
				<< "venture out into space to explore the unknown, and helped to\n"
				<< "found the United Federation of Planets.\n\n"
				<< "Attributes\n"
				<< "\tFitness 2[5]\n"
				<< "\tCoordination 2[5]\n"
				<< "\tIntellect 2[5]\n"
				<< "\tPresence 2[5]\n\t\tWillpower + 1\n"
				<< "\tPsiO[5]\n"
				<< "Skills\n"
				<< "\tAny Science(choose Specialization) 1 (2)\n"
				<< "\tAthletics(choose Specialization) 2 (3)\n"
				<< "\tCulture(Human) 2 (3)\n"
				<< "\tHistory(Human) 1 (2)\n"
				<< "\tLanguage\n\t\tFederation Standard 2"
				<< "\tWorld Knowledge(Earth or other homeworld) 1 (2)\n\n";
			break;

		case 6:
			cout << "\nStocky and vaguely porcine, Tellarites ore known for their\n"
				<< "engineering skill and argumentative natures.A Tellarite will debate\n"
				<< "simply for the enjoyment if gives him(though they do not, as a\n"
				<< "rule, question the orders of their commanding officers). They can\n"
				<< "typically be found serving throughout StarFleet, most often as\n"
				<< "engineers and scientists.\n\n"
				<< "Attributes\n"
				<< "\tFitness 3 [6]\n"
				<< "\tCoordination 2[5]\n\t\tReaction + 1"
				<< "\tIntellect 2[5]\n\t\tPresence 2[5]\n"
				<< "\tEmpathy - 1\n"
				<< "\tPsi 0[S]"
				<< "Skills\n"
				<< "\tAny Engineering (choose two Specializations) 2 (3)\n"
				<< "\tCulture(Tellorite) 2 (3)\n"
				<< "History(Tellorite} 1 (2)\n"
				<< "\tLanguage\n\t\tTellarite 2\n"
				<< "\tPersuasion(Debate) 2 (3)\n"
				<< "\tWorld Knowledge(Teller) 1 (2}\n\n";
			break;

		case 7:
			cout << "\nFamous for their logic and lack of emotion, Vulcans form one\nof the pillors of the Federation. Like the Betazoids, most Vulcans\nexhibit some form of telepathic ability, though they are better\nknown for their curious natures and scientific achievements.\nVulcans can be found serving in a variety of postings in StarFleet\nfrom science to security\n\n"
				<< "Attributes\n"
				<< "\tFitness 2 [6]\n\t\tStrength +1\n"
				<< "\tCoordination 2[5]\n"
				<< "\tIntellect 2[6]\n\t\tLogic + 1\n"
				<< "\tPresence 2[5]\n\t\tEmpathy -1\n"
				<< "\tPsi 1[6]\n\t\tRange -1\n"
				<< "Skills\n"
				<< "\tAny Science (choose Specialization) 2 (3)\n"
				<< "\tCulture(Vulcan) 2 (3)\n"
				<< "\tHistory(Vulcan) 1 (2)\n"
				<< "\tLanguage\n\t\tVulcan 2\n"
				<< "\tMind Meld 2\n"
				<< "\tUnarmed Combat(Nerve Pinch) 2 (3)\n"
				<< "\tWorld Knowledge(Vulcan) 1 (2)\n\n";
			break;

		}
	}

int getRace() {
	int x;
	char choose = 'n';

	while (choose == 'n') {

		cout << "\nWhat Species are you?\n" << "Selcting a species will give you a discription before you choose\n\n";
		cout 
			<< "\t1] Andorian\n"
			<< "\t2] Betazoid\n"
			<< "\t3] Bolian\n"
			<< "\t4] Centauran\n"
			<< "\t5] Human\n"
			<< "\t6] Tellarite\n"
			<< "\t7] Vulcan\n\n"
			<< "Please choose a number: ";
		x= getIntInRange(1,7);
		system("CLS");
		printRace(x);
		cout << "Do you want to be";
		raceName(x);
		cout << "?\nChoose Yes or No:";
		choose = getYN();
		system("CLS");
	}
	return x;
}

void raceName(int x) {

	switch (x) {

	case 1:
		cout << " Andorian";
		break;
	case 2:
		cout << " Betazoid";
		break;
	case 3:
		cout << " Bolian";
		break;
	case 4:
		cout << " Centauran";
		break;
	case 5:
		cout << " Human";
		break;
	case 6:
		cout << " Tellarite";
		break;
	case 7:
		cout << " Vulcan";
		break;
	}
}

void raceDescription(int x) {
	int choice = 0;
	while (choice != 5) {
		system("CLS");
		cout << "\n\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
		cout << " LCARS ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
		cout << "HISTORICAL DATA\n\n"
			<< "1) Homeworld\n"
			<< "2) Characters\n"
			<< "3) Accomplisments\n"
			<< "4) Historic Figures\n"
			<< "5) Exit Historical Data\n"
			<< "Please make a selction: ";
		choice = getIntInRange(1, 5);

		system("CLS");


		switch (x) {


		case 1: //Andorians
			switch (choice)
			{
			case 1:
				cout << "\n\t\t\tHomeworld: Andoria\n\n\tAndorians, natives of a cold, Class M planet,\n\thave beautiful blue skin as a result of high cobalt\n\tlevels in their bloodstream, white hair and a pair of\n\tsmall antennae on their heads, which give them an\n\t"
					<< "extra sense that most races lack. These antennae,\n\twhich allow them to sense various environmental\n\tchanges and audio vibrations, help make Andorian\n\tcommunication specialists some of the Federation's\n\tmost respected. Andorians accept their violent and\n\tpassionate nature. They always demand satisfaction if\n\tthey feel another Andorian has wronged them, but\n\tthey do not always hold other races to these same\n\tstandards.\n"
					<< "\n\tExperts at organization, Andorian bureaucracies\n\twork with remarkable efficiency. One of the\n\tfounding species of the United Federation of Planets,\n\tthe Andorians gained a reputation for valor at least\n\tpartially through their service in StarFleet.\n"
					<< "\n\tThe Andorians currently want one of their own to\n\tbecome Federation President. Active on the\n\tFederation Council, they now push to strengthen\n\tStarFleet's military might. While they despise both the\n\tCardassians and the Romulans, the Andorians favor\n\timproved relations with the Klingons. They hope that\n\tcivilizing influences will make the Klingons\n\ta worthwhile ally.\n\n";
				system("pause");
				break;
			case 2:
				cout << "\n\n\tAndorians regard themselves as the UFP's\n\tpreeminent warriors, with battle skills admired and\n\trespected by all. Additionally, they have a strong\n\tsense of fairness and right. When Andorians come to\n"
					<< "\ta decision, they stand by it regardless of the\n\tconsequences. Many legitimate free traders register\n\ttheir ships on Andoria because of the efficient\n\tgovernment and the knowledge that Andoria\n\tprotects its own.\n"
					<< "\n\tAndorians maintain an outlook different from\n\tthat of most Federation members. Concerned with\n\trules, whether StarFleet regulations or Andorian\n\trituals, they will not violate any type of order or law,\n\tthough they find creative ways around restrictions.\n\tFor example, if a Ferengi trader cheats an Andorian\n\tin a business deal and no legal recourse is available,\n\tthe Andorian might follow the Ferengi around,\n\tspreading word of his double - dealing to all the\n\tFerengi's customers. The Andorian would also\n\tprobably watch the Ferengi for any violation of\n\tFederation law and promptly report the Ferengi to\n\tauthorities.\n"
					<< "\n\tWhen roleplaying an Andorian, players should\n\tfocus on the character's passion. Andorians have\n\tintense emotions and especially violent tempers.\n\tUnlike Klingons, Andorians will wait to express their\n\tanger. If insulted, they may wait months, or even\n\tyears, to avenge their honor. Andorians have a long\n\tmemory for insults.\n"
					<< "\n\tAndorian society focuses on clan structure. Each\n\tAndorian has specific obligations to his clan, ranging\n\tfrom mentoring younger relatives to serving as a clan\n\tchampion in ritual duels. The clans fought violent\n\twars ages ago, but today they compete primarily in\n\tthe political arena.\n\n";
				system("pause");
				break;
			case 3:
				cout << "\n\n\tA passionate, warlike people, the Andorians\n\tnearly destroyed themselves in a series of clan wars\n\tin a time known as the \"Age of Lament\". It was the\n\tgreat clan leader, Lor\'Vela, who established the\n\tdueling rituals by which Andorians settle their\n\tdisputes and channel their aggression to the present\n\tday. This accomplishment allowed the Andorian\n\tpeople to live in peace with one another, and paved\n\tthe way towards an eventual world wide\n\tgovernment.\n"
					<< "\n\tAndorians also share a common interest in music\n\tand song. Andoria's musicians compose emotional\n\tsongs popular across the Alpha Quadrant. Andorian\n\tblues music has inspired countless composers of\n\tmany different races throughout the UFP.\n\n";
				system("pause");
				break;
			case 4:
				cout << "\n\n\tIn the last century, Dr. Sharas Vetra of Andoria\n\tfound a cure to a series of so - called \"Orion plagues\"\n\twhich threatened millions of lives in systems near the\n\tOrion border.His medical techniques improved all\n\tpathology and brought about a greater understanding\n\tof interstellar viruses.\n\n"
					<< "\tThe greatest of all Andorian heroes is Lor'Vela, a\n\tscholar - warrior who created the dueling rituals that\n\tpreserved Andorian society. She institutionalized the\n\tgoverning council of clan leaders which continues to\n\thold power on Andoria. Andorians still swear oaths\n\tby her name.\n\n";
				system("pause");
				break;
			}
			break;
		case 2://Betazoid
			switch (choice)
			{
			case 1:
				cout << "\n\t\t\tHOMEWORID: BETAZED\n\n\tPhysically resembling humans, Betazoids have a\n\tten-month gestation period. Betazoids possess a form\n\tof telepathy/empathy, enabling them to read the\n\tminds of most life-forms, Ferengi are a notable\n\texception, possibly due to their four-lobed brains.\n\tBetazoid telepathy distinguishes them from other\n\tFederation members.\n\n"
					<< "\tTheir psychic abilities help explain why the\n\tservice records of Betazoids in the UFP Diplomatic\n\tCorps stand out, with Betazoid negotiators sought\n\tthroughout Federation space. StarFleet created the\n\tposition of ship's counselor with Betazoids in mind.\n\tBy using their gifts skillfully, Betazoids can help\n\tothers overcome their fears, cope with stress and live\n\thappier lives.\n\n"
					<< "\tBetazoids also have strong ethics. During the\n\tearly years of Betazoid space flight, they\n\tencountered a nearby species known as the Terabian.\n\tAlthough relations between the two were initially\n\tfriendly, the Terabian came to resent, then fear,\n\tBetazoid telepathy. The Terabian attacked Betazed,\n\tand herded captured Betazoids into concentration\n\tcamps. Betazoids have not forgotten the lessons of\n\tthose times, and only use their gifts with extreme\n\tdiscretion. Despite other races\' fears, a Betazoid\n\twould never use telepathy to invade another\'s private\n\tthoughts. They also demonstrate exceptional honesty\n\t- in a culture where everyone has telepathy, lying\n\tserves little purpose.\n\n"
					<< "\tBetazed hosts biennial Trade Agreements\n\tConferences, weighing the value of currencies and\n\tsetting up trade agreements between UFP and\n\tnon-member worlds. The telepathic skills of the\n\tBetazoids, coupled with their honesty, make them\n\tperfect negotiators. All sides trust their ability to\n\tcome to fair decisions, and the conferences provide\n\ta forum for Betazoid politicians to make allies and\n\tshow off the planet. Although the citizens of Betazed\n\tstill face strong prejudice among non-aligned worlds, \n\tthey have far more friends than enemies among the\n\tmember worlds.\n\n";
				system("pause");
				break;
			case 2:
				cout << "\n\n\tBetazoids have a slightly different culture than\n\thumans. They have a decided edge in any social\n\tsituation, as long as it does not involve lying.\n\tOutgoing and friendly, they find a genuine\n\tsatisfaction in helping others. Betazoids often aid\n\ttheir ship\'s captain during negotiations or first\n\tcontact with alien life-forms. Counselors interact\n\textensively with the crew of their ship and are\n\tgenerally well liked.\n\n"
					<< "\tBetazoids have few prejudices. However, they\n\tdo not like any race whose minds they cannot\n\tunderstand. Although they do not abuse their\n\tabilities, Betazoids feel helpless when confronted by\n\tbeings whose minds they cannot read, not knowing\n\twhat to say or how to react. They also dislike liars,\n\tdue to their strong sense of honesty.\n"
					<< "\n\tBetazoids have a strong culture with many\n\testablished traditions. Their society is matriarchal,\n\tthough they do not discriminate based on gender.\n\tBetazoids perform weddings without clothes, since\n\tthey feel that procreation is the purpose of marriage.\n"
					<< "\n\tGift boxes with talking faces are used for exchanging\n\tpresents. The Betazoids also practice a unique\n\tmartial art style, using the akai, a collapsible stick\n\tweapon. They rarely practice their martial arts forms\n\twith other races, since the combat style relies heavily\n\ton anticipating an opponent's thoughts and actions.\n\n";
				system("pause");
				break;
			case 3:
				cout << "\n\n\tWhen the Betazoids first ventured into space,\n\tthey made contact with the society of the nearest\n\tplanet, a people known as the Terabian. At first, \n\trelations remained friendly, the Terabian welcomed\n\ttheir neighbors and the Betazoids quickly established\n\tties. As more and more the two cultures came\n\ttogether, the Terabian came to mistrust Betazoid\n\ttelepathic abilities. The Terabian rounded up\n\tBetazoids living amongst them, herding them into\n\tinternment camps. It was only after a brief war and\n\tprotracted negotiations that the Terabian and\n\tBetazoids negotiated an armistice. Presently, Terabia\n\tand Betazed both sit on the Federation Council in\n\tpeace, a testament to the Federation\'s ability to bring\n\told enemies together.\n"
					<< "\n\tMost Betazoids see the improving relations\n\tbetween the Federation and its enemies as a\n\treflection of their diplomatic abilities. Opening\n\trelations with the Tholians continues to provide the\n\tgreatest challenge to Betazoid diplomats; hope\n\tremains high for peace between the Tholians and the\n\tFederation. As relations continue to improve\n\tbetween the two powers, the Betazoids see that their\n\twork has turned an implacable enemy into a\n\tpotential friend.\n\n"
					<< "\tBetazoid psychologists and counselors have\n\ttreated thousands of mental illnesses and virtually\n\temptied the mental wards of the galaxy. Their skill\n\tcomes from both their telepathy/empathy and from\n\tBetazoid experience in dealing with children whose\n\tabilities develop too early, driving them toward\n\tinsanity. The people of Betazed take pride in the\n\tknowledge that they have improved lives on thousands of worlds.\n\n";
				system("pause");
				break;
			case 4:
				cout << "\n\n\tKhrysaros, a mythical telepath\n\twho used his vast abilities for truth\n\tand justice, has inspired\n\tinnumerable talcs. When he left his\n\tfollowers, he gave them a set of\n\trings. The Holy Rings of Betazed\n\tsupposedly have the power to\n\tsummon Khrysaros during Betazed\'s\n\ttime of greatest need.\n\n";
				system("pause");
				break;
			}
			break;
		case 3://Bolians
			switch (choice)
			{
			case 1:
				cout << "\n\t\t\tHOMEWORID: BOLARUS IX\n\n\tBlue-skinned humanoids with a\n\tbilateral ridge running down their\n\thead, the Bolians joined the UFP\n\trelatively recently. They find Vulcan\n\tblood toxic but can receive\n\ttransfusions from Andorians, While\n\tBolians have hair, all males shave\n\ttheir heads upon reaching\n\tadulthood. Since they associate\n\tbaldness with physical prowess and\n\tdedication, many female Bolians also shave their\n\theads.\n\n"
					<< "\tBolians are perhaps the most social members of\n\tthe UFP, moreso than the Centaurans and the\n\tBetazoids. Their culture is strongly weighted towards\n\tgroup interactions, though tensions between the\n\tancient Bolian nation-states continue to simmer.\n\tThey make earnest members of the Federation, as\n\tthey try to prove their value and commitment to the\n\tUFP. Bolian scientists, diplomts and StarFleet officers\n\tseem to excel when woking in groups.\n\n"
					<< "\tBolians have since distinguished themselves in\n\tFederation service. In StarFleet, Bolian captains\n\tproved resourceful and reliable. Bolian scientists\n\tdeveloped a new recrystalization process for\n\tdilithium. A strong Bolian economy and vast natural\n\tresources promoted trade and growth in their sector.\n\tThe Bolians work to maintain a good relationship\n\twith the Federation Council, but nationalist groups\n\ton Belarus IX have raised questions about the\n\tstability of the Bolian government. Although a single\n\tcouncil governs Bolarus IX, prejudices remain\n\tbetween the people of the planet\'s three continents,\n\tBolians also believe in assisted suicide as long as it\n\trelieves suffering, and this belief has drawn criticism\n\tfrom some worlds concerned with civil rights.\n\tAcutely conscious of any event that might raise\n\tquestions about their membership, the Bolians work\n\teven more diligently to contribute to the UFP.\n\n";
				system("pause");
				break;
			case 2:
				cout << "\n\n\tBolians are gregarious and eager to work well\n\twith other Federation members. They interact well\n\twith others, and are more efficient working in\n\tgroups. Whenever Bolians work in teams, \n\tparticipating in a Combined Test\n\tthey receive a + 2 bonus for their successes, \n\trather than the standard + 1. \n\n"
					<< "\tBolians regard accomplishing their duties as a\n\tmatter of honor. They feel great satisfaction from a\n\tjob well done; however, they do not suffer the level\n\tof shame and guilt that some other honor-driven\n\traces do when they fail. If a Bolian fails at a task, he\n\tmakes a point of improving himself, so that given\n\tanother chance he will succeed.\n\n";
				system("pause");
				break;
			case 3:
				cout << "\n\n\tUpon joining the Federation, the Bolians\n\tprovided invaluable insights into the invention of\n\tanti-gravity technology. Working with StarFleet\n\tengineers, they helped improve upon technology\n\tsuch as freight lifters and tractor beams. The\n\tFederation Science Council recognizes the scholars\n\tof Bolarus IX as the UFP\'s greatest experts on the\n\tantigraviton.\n"
					<< "\n\tBolian Admiral Taneko directed Federation forces\n\tduring the Mizar Incident of 2351 with the Tholians,\n\tDuring the battle, the admiral sacrificed his life by\n\tsingle-handedly flying his fatally damaged ship into\n\tthe heart of the Tholian forces. When the warp core\n\tof his vessel detonated, it destroyed several Tholian\n\tships. This sacrifice preserved a Federation victory, \n\tand his heroism inspires all Bolians.\n\n"
					<< "\tThe Bolians did not develop a one-world\n\tgovernment until the last century, even though the\n\tthree continents of Bolarus IX maintained peaceful\n\trelations. When they learned of the Federation, the\n\tBolians forged a single world government so they\n\tcould join. Membership eluded the Bolians,\n\thowever, as Federation review committees wanted to\n\tsee the new government in action before extending\n\tan invitation. The Federation Council finally\n\trecognized the Bolian government in 2320, after\n\ttheir actions at the nearby star of Uzor. Uzor, a\n\theavily populated non-Federation planet, faced utter\n\tdestruction when its star began a sudden and rapid\n\tcollapse. The Bolians seized the initiative and, using\n\ttheir entire planetary fleet, evacuated 80% of the\n\tUzorites to a newiy discovered Class M planet near\n\tthe Federation frontier. \n\n";
				system("pause");
				break;
			case 4:
				cout << "\n\n\tVaxx, the father of Bolian unity, carefully\n\tnegotiated the formation of the world government\n\tand made it possible for the Bolians to join the UFP,\n\tHis notes on the importance of preparation for\n\tdiplomacy are required reading in StarFleet\n\tdiplomatic training.\n\n"
					<< "\tA mathematical genius, Darzana did work on\n\tmultidimensional physics that drew praise from all\n\tcorners of the Federation. The premier scientist in\n\tBolian history, she founded the Bolian Interstellar\n\tResearch Institute, On Botarus IX, she enjoys a type\n\tof celebrity usually reserved for politicians, \n\tentertainers and military heroes.\n\n";
				system("pause");
				break;
			}
			break;
		case 4: //Centaurans
			switch (choice)
			{
			case 1:
				cout << "\n\t\t\tHomeworld: ALPHA CENTAURI IV\n\n\tThe Centaurans appear similar to humans in\n\tmost respects, although their internal structure differs\n\tslightly. Some archeologists suspect that Centaurans\n\tare an offshoot of the human race (much like the\n\tRomulans are to the Vulcans) settled on Alpha\n\tCentauri IV by an early interstellar civilization such\n\tas Sargon\'s race or the Sky Spirits. They tend less\n\ttoward rashness than do their human counterparts,\n\tand others sometimes accuse them of complacency\n\tand intellectualism.\n\n"
					<< "\tDespite this, the Centaurans maintain close\n\trelationships with humans, perhaps owing to their\n\tSimilar appearances. Zefram Cochrane, the first\n\thuman to develop a warp drive, retired to Alpha\n\tCentauri, where he explored its culture and sciences.\n\tHumans encountered the people of Alpha Centauri\n\tshortly after meeting the Vulcans, and Alpha Centauri\n\thelped found the United Federation of Planets. Their\n\tknowledge of biosystems and terraforrning helped\n\tthe Federation establish colonies throughout Alpha\n\tQuadrant, Many consider Alpha Centauri one of the\n\tmost beautiful planets in the galaxy, and its people\n\tgladly helped the citizens of Earth restore their planet\n\tafter the devastation of World War III. The fertile\n\thome of the Federation Council stands as a testament\n\tto the Alpha Centaurans\' skills.\n"
					<< "\n\tThe Centaurans remain a steady member of the\n\tUFP. They rarely assume leadership roles on the\n\tFederation Council, but always remain heavily\n\tinvolved in the Council\'s decisions. Centaurans have\n\ta long-term view of actions and like to weigh\n\tthoroughly important matters. This sometimes leads\n\tto accusations of foot-dragging and excessive debate,\n\tparticularly in times of crisis.\n\n";
				system("pause");
				break;
			case 2:
				cout << "\n\n\tAlpha Centaurian culture puts great emphasis on\n\tartistry, spirituality and the interrelationship of all\n\tliving things. Not as aggressive as humans,\n\tCentaurans believe humans lack perspective. This\n\tleads to a love-hate relationship with humanity.\n\tWhile they enjoy strong ties to Earth and its people, \n\tthey also disapprove of many of humanity\'s actions\n\tand beliefs. Centaurans tend toward caution and\n\tpacifism, and believe humans act without thinking.\n\tCentaurans look down on Klingons, believing them a\n\tprimitive people with little foresight. They have close\n\tties to and great admiration for the Vulcans, and even\n\tCentauran citizens sometimes feel their politicians\n\tfollow the lead of Vulcan instead of analyzing the\n\tbenefits of a situation for Alpha Centauri.\n\n";
				system("pause");
				break;
			case 3:
				cout << "\n\n\tAlpha Centauri takes great pride in its\n\tterraforrning technology. The Centaurans helped\n\trestore Earth\'s environment after World War III with\n\tthe Renewal Project and enabled the Federation to\n\tcolonize dozens of worlds while also making core\n\tworlds more livable.\n"
					<< "\n\tThe Centauran dedication to individual rights\n\tand peace stems from their experiences during the\n\tPlague Years. Occurring approximately 100 years\n\tprior to manned spaceflight on Earth, disease ran\n\trampant among the population. Plague carriers were\n\tconfined to internment camps, while individuals\n\tfought over supposed cures. When a cure finally\n\tsurfaced and the threat of annihilation passed, the\n\tCentauran people pledged to never again allow fear\n\tto overcome higher moral principles.\n"
					<< "\n\tWhile Humans had primitive holographictechnology\n\tfor centuries, it was a Centauran scienist\n\twho pioneered true holodeck technology. Though\n\tholodecks have come a long way from the first\n\tholographic projectors used on Alpha Centauri, the\n\tapplications for science, medicine and entertainment\n\tremain a source of great pride for Centaurans. Some\n\tfellow crew members even complain that when a\n\tCentauran is off duty, there is no chance for anyone\n\tuse to use a holodeck.\n\n";
				system("pause");
				break;
			case 4:
				cout << "\n\n\tCentaurans regard Arinda Skaelas as the greatest\n\tartist in their history. She created vivid and beautiful\n\tholo-images, as well as scenes enjoyed by millions\n\ttoday. Many of her ideas continue to stimulate\n\tdevelopments in holotechnology. Her wide range of\n\tsubjects and moods gives everyone some element of\n\ther work they can appreciate.\n\n"
					<< "\tCaptain Gan Laikan remains one of the greatest\n\texplorers in StarFleet history. In the 23rd century,\n\tLaikan and the crew of the U.S.S. Asimov discovered\n\tmore Class M planets than any other starship,\n\tincluding the U.S.S. Enterprise. After retiring from\n\tStarFleet, he served on the Federation Council and\n\tbecame the first Centauran to hold the office of\n\tFederation President. Following his tenure as\n\tPresident, he served on the Federation Supreme\n\tCourt. His biography is required reading among the\n\tyouth of Alpha Centauri, and many see him as a role\n\tmodel for civil service.\n\n";
				system("pause");
				break;
			}
			break;
		case 5: //Human
			cout << "Human Database is a WIP/n/n";
			break;
		case 6://Tellarite
			switch (choice)
			{
			case 1:
				cout << "\n\t\t\tHomeworld: TEUAR\n\n\tTellarites have a unique mechanical\n\tunderstanding of the galaxy—an almost clockwork\n\tview. They almost instinctively understand how\n\tobjects work together, fostering the Tellarite\n\treputation for being expert engineers,\n\tmathematicians and merchants. Although seen by\n\tmany other Federation members as gruff and\n\targumentative, their sense of caution and willingness\n\tto take a stand for what they believe earns them\n\trespect.\n\n"
					<< "\tOne of the founding species of the Federation,\n\tthey quickly embraced the idea of a union with the\n\tAndorians, Vulcans and Terrans, seeing the potential\n\tbenefits at once. No one should underestimate the\n\tvalue of Tellarite engineers to the Federation. The\n\tTellarites helped develop the hull designs of nearly\n\tevery StarFleet vessel and took the lead in many\n\tFederation mining and trade projects. As a result,\n\tTetlar profited immensely from its\n\tmembership in the UFP.\n"
					<< "\n\tThe Tellarites enjoy the political\n\tprocesses of Federation government.\n\tThey take great satisfaction in\n\tdebating issues on the floor of the\n\tFederation Council. Tellarite\n\tbureaucrats create numerous forms\n\tso they can track the process of\n\tgovernment. Although the Tellarites\n\tannoy many other members with\n\ttheir constant quest to make large\n\tbureaucracies work, no one denies\n\tthat they also have improved\n\tgovernment efficiency.\n\n";
				system("pause");
				break;
			case 2:
				cout << "\n\n\tATellarites' looks do not lend\n\tthemselves to human beauty\n\tcontests. They appear short and\n\tfurred, and have a porcine-type\n\tsnout. However, their gruff attitude\n\tand unwavering determination to\n\tmake things work causes most\n\tbeings to ignore their looks.\n\n";
				cout << "\tTellarites have a good sense of engineering and\n\tmechanics, and the universe's workings fascinate\n\tthem.Most Tellarites like to tinker with technology, \n\tconstantly trying to make devices more efficient.\n\tMany Tellarites make a hobby out of building\n\tclockwork devices.\n\n";
				cout << "\tExpert debaters and merchants, Tellarites know\n\thow to handle money almost as well as Ferengi, and\n\tthey love arguments. Some Tellarites spend their lives\n\tperfecting the ability to argue. They are not shy about\n\tvoicing their opinions.\n\n";
				cout << "\tTellarites do not like the unexplained. If\n\tsomething does not have a plausible scientific\n\texplanation, a Tellarite\'s curiosity drives them to find\n\tan answer. Spirituality does not impress them, and\n\tthey tend to disdain any tradition which lacks a\n\tpractical side.\n\n";

				system("pause");
				break;
			case 3:
				cout << "\n\n\tIn concert with Vulcan and Human scientists,\n\tTellarite engineers developed a \"cracking\" process\n\twhich enabled the practical mining of dilithium\n\tcrystals. Before this development, dilithium was\n\texceedingly rare. Afterward, planets like Coridan\n\tcould be safely mined for vast amounts of dilithium.\n"
					<< "\n\tThe Tellar Space Elevator, the highest freestanding\n\tstructure in the Federation, stretches to the\n\tlimito f Tellar\'s atmosphere. Multiple lifts and\n\ttransport tubes make it possible to dock a starship at\n\tthe top of the elevator and travel from space to the\n\tground without a shuttle.Transporter technology\n\tmade the space elevator obsolete, but it remains an\n\timportant monument to Tellarite engineering.Tourists\n\tfrom across the UFP visit the Space Elevator every\n\tyear, and several gift shops and restaurants lie on its\n\tmultiple levels.\n"
					<< "\n\tJust as the other major founding partners of the\n\tUFP went through a dark period in their history, the\n\tTellarites waged a world war of their own, at\n\tapproximately the same time as Earth fought World\n\tWar I. The differences between Tellarite nations\n\tremain convoluted and obscure to outsiders. It was\n\tnot until Cherok, leader of the Ukora Segment, \n\targued for peace and unity that the war ended. The\n\tTellarite people remember this time, and are careful\n\tnot to allow their argumentative natures to lead to\n\toutright conflict, \n\n";
				system("pause");
				break;
			case 4:
				cout << "\n\n\tGnarr, a famous Tellarite engineer, working from\n\tearly Human spacefrarne designs, developed the\n\tbasic ship design for the Horizon-class starships.\n\tThese became the basis for most large modern\n\tStarFleet ships. Tellarites still praise his theories of\n\tdesign above all others.\n\n"
					<< "\tThe Tellarites regard Tarnoc as their greatest\n\tpolitician. He rose to prominence during the Terran\n\tConventions of 2160, when the Articles of\n\tFederation were drafted. The Tellarites place such\n\temphasis on Tarnoc\'s roie in founding the\n\tFederation that they have earned criticism from\n\tother races. Several museums exist on Tellar\n\tdedicated to the life of this figure, who later served\n\tas the UFP\'s first Secretary of Commerce,\n\n";
				system("pause");
				break;


			}
			break;
		case 7:
			switch (choice)
			{
			case 1:
				cout << "\n\t\t\tHOMEWORD: VULCAN\n\n\tThe Vulcans, best known for their philosophy of\n\tlogic, make excellent judges due to their impartiality.\n\tThey make equally excellent scientists because of\n\ttheir ability to observe phenomena without risking\n\teither emotional attachment or the trap of assuming\n\tan outcome, giving them a better understanding of\n\tscience than any other Federation members. Vulcans\n\talso enjoy a remarkable level of intelligence and\n\tsome degree of psychic power.\n"
					<< "\n\tVulcan itself is a harsh world with high\n\ttemperatures and a gravity stronger than Earth\'s. This\n\tgives the Vulcan people greater strength and\n\tendurance than humans. Although Vulcans do not\n\tflaunt these attributes, some Vulcans find fulfilling\n\tcareers in Security, where their physical capabilities\n\tgive them a significant advantage.\n"
					<< "\n\tThe Vulcans provided much of the impetus to\n\tform the United Federation of Planets. Their\n\tencounter with the Phoenix stimulated humanity\'s\n\trecovery from the horrors of World War III and, as\n\thumans expanded into the frontiers of space, the\n\tVulcans kept a watchful eye upon their new allies.\n\tWhen humans made contact with other species, the\n\tVulcans provided advice and helped to ease\n\ttensions. They continued to explore on their own and\n\tformed treaties and alliances with the Tellarites and\n\tAndorians. After the Earth - Romulan War, the Vulcans\n\tsubtly suggested the creation of an interstellar\n\tgovernment. Humans proposed the Constitution of\n\tthe Federation and the Vulcans found signing a\n\tlogical idea.\n"
					<< "\n\tVulcans wield tremendous influence in the\n\tFederation Council. Their consistently logical\n\tapproach to issues makes them strong debaters and\n\trespected politicians. Vulcan makes significant\n\tcontributions to the Federation, especially in terms of\n\tmanpower and scientific inquiry.\n\n";
					system("pause");
				break;
			case 2:
				cout << "\n\n\tPhysically, Vulcans are stronger and more\n\tresilient than humans. They have a different body\n\tchemistry featuring green, copper-based blood.\n\tVulcans also have a protective second eyelid. Their\n\tdistinctive pointed ears are recognized throughout\n\tthe Federation.\n"
					<< "\n\tLogical and highly analytical, Vulcans excel at\n\tany tasks involving intelligence, such as science.\n\tVulcans also possess a high degree of prowess in\n\tpersonal combat. The Vulcan nerve pinch has a well earned\n\treputation among members of the UFP.\n"
					<< "\n\tTheir most potent psychic ability, the Vulcanmind meld,\n\tcauses two people to share their\n\tconsciousnesses. A deeply personal and intimate\n\tability, it rarely leaves either party unscathed. The\n\tVulcan mind meld works on a variety of life-forms,\n\tincluding artificial life.\n"
					<< "\n\tVulcan philosophy developed as a means of\n\tcontrolling their powerful emotions. The only time\n\tthey cannot control these emotions is during Pon\n\tfarr, the time of mating. During this period, which\n\toccurs once every seven years, Vulcans return to\n\ttheir homeworld to mate. Vulcans go through\n\telaborate mating rituals and males may have to fight\n\tto prove their right to mate. Vulcans do not like to\n\tdiscuss this time with outsiders. The struggle felt by\n\tVulcan characters as they fight to suppress emotions\n\tmakes for challenging and enjoyable roleplaying.\n";
					system("pause");
				break;
			case 3:
				cout << "\n\n\tThe development of Vulcan philosophy ended\n\tcenturies of bloody conflict.The Vulcans refer to this\n\tperiod as the Time of Awakening, and credit Surak as\n\tthe father of the Vulcan people.Without the\n\tsuppression of emotions, most scholars believe the\n\tVulcans would have destroyed themselves.Vulcans\n\tnot only credit their philosophy with saving their\n\trace, but they also believe it has made them more\n\tsuccessful than emotional races.\n"
					<< "\n\tAs part of an early joint venture between Earth\n\tand Vulcan, soon after the Federation\'s founding,\n\tscientists from both worlds worked to develop\n\ttransporter technology. Transporters have not only\n\tmade embarking and disembarking from starships\n\teasier, but they have thousands of practical\n\tapplications in the lives of Federation citizens.\n\tTransporters help in commerce, construction, \n\tentertainment and other areas.\n"
					<< "\n\tThe dilithium recrystalization process, developed\n\tby Spock, allowed starships to become less reliant on\n\tsparse supplies of natural dilithium. This led to the\n\texpansion of the Federation and the strengthening of\n\tStarFleet.\n\n";
					system("pause");
				break;
			case 4:
				cout << "\n\n\tSurak, the father of Vulcan philosophy,\n\tdeveloped the strict adherence to logic which\n\tbrought peace to Vulcan. Vulcans credit him with\n\tsaving their race from self-destrucfion\n"
					<< "\n\tThe Vulcan priestess T'Rui had a legendary\n\tdedication to her horneworld. The only person to\n\tturn down membership on the Federation Council, \n\tshe preferred to remain on Vulcan. Her writings on\n\tlogic and on the Vulcan place in the UFP define\n\tmodern Vulcan interactions with outsiders.\n"
					<< "\n\tSomewhat more contemporary examples,\n\talready legendary during their own lifetimes, are\n\tSpock and his father, Ambassador Sarek. As First\n\tOfficer under Captain James T. Kirk on the first\n\tstarship Enterprise, Spock\'s exploits are studied by all\n\tStarFleet Academy students; the long-lived Vulcan\n\tcurrently aids the covert Romula  Vulcan\n\treunification movement. Sarek was long one of the\n\tFederation\'s most revered ambassadors before his\n\tdeath in 2368, \n\n";
					system("pause");
				break;

			}
			break;
		}

	}

}

double getInRange(double s, double f) {
	double num;

	cin >> num;
	cin.ignore(80, '\n');
	getChoice(num);

	while (num < s || num > f) {
		cout << "The number must between " << s << " and " << f << "\nPlease enter a number in that range: ";
		cin >> num;
		cin.ignore(80, '\n');
	}
	return num;
}

int getIntInRange(double s, double f) {
	double num;

	cin >> num;
	cin.ignore(80, '\n');

	while (num < s || num > f) {
		cout << "The number must between " << s << " and " << f << "\nPlease enter a number in that range: ";
		cin >> num;
		cin.ignore(80, '\n');
		getChoice(num);
	}
	return num;
}

int getTrack() {
	int x;
	char choose = 'n';
	while (choose == 'n') {

		cout << "\nWhat career track do you want to be? \n\nSelcting a career will give you a discription before you choose\n\n";
		cout
			<< "\t1] Command\n"
			<< "\t2] Operations\n"
			<< "\t3] Engineer\n"
			<< "\t4] Security\n\n"
			<< "Please choose a number: ";
		x = getIntInRange(1, 4);
		system("CLS");
		printTrack(x);
		cout << "Do you want to be on the ";
		trackName(x);
		cout << " career track? ";
		choose = getYN();
		system("CLS");


	}

	return x;
	
}

void printTrack(int x) {

	switch (x) {
	case 1:
		cout << "\nCommand Officer\n\n"
			<< "\tMembers of the Command Branch can be found serving as administrative\n"
			<< "\tpersonnel detailed to various departments throughout Starfleet. They\n"
			<< "\tensure compliance with all Starfleet regulations, assist operations and\n"
			<< "\tscience personnel and report to the commanding officer. Command\n"
			<< "\tpersonnel train in a variety of conflict resolution techniques.\n"
			<< "\tA First Officer or Captain requires the purchase of both the Department\n"
			<< "\tHead and Rank Advantages, as well os knowledge of other shipboard duties\n"
			<< "\t(such as Flight Control and Tactical).\n\n "

			<< "\t\tAdministration (Starship Administration) 2 (3)\n"
			<< "\t\tCommand (Starship Command) 2 (3)\n"
			<< "\t\tLaw (Starfleet Regulations) 2 (3)\n"
			<< "\t\tPlanetary or Starship lactics (choose Specialization) 2 (3)\n"
			<< "\t\tShipboard Systems (choose Specialization) 1 (2)\n\n"

			<< "\t\tAthletics (choose Specialization) 1 (2)\n"
			<< "\t\tComputer (choose Specialization) 1 (2)\n"
			<< "\t\tDodge 1\n"
			<< "\t\tEnergy Weapon (Phaser) 1 (2)\n"
			<< "\t\tHistory (Federation) 1 (2)\n"
			<< "\t\tLanguage\n\t\t\tFederation Standard 1\n"
			<< "\t\tPersonal Equipment (choose Specialization) 1 (2)\n"
			<< "\t\tPlanetside Survival (choose Specialization) 1 (2)\n"
			<< "\t\tVehicle Operations (Shutriecroft) 1 (2)\n\n";

		break;
	case 2:
		cout << "\nOperations Officer\n(Flight Control, Operations Manager,Transporter, etc.)\n\n"
			<< "\tThe largest branch in Starfleet, Operations personnel see to the day-to-day\n"
			<< "\toperations of Starfleet facilities. They work in numerous positions, from\n"
			<< "\tFlight Control and Operations Management to transporter operation.\n\n"

			<< "\t\tAdministration (choose Specialization) 2 (3)\n"
			<< "\t\tScience (choose related Specialization) 1 (2)\n"
			<< "\t\tShipboard Systems (choose Specialization) 2 (3)\n"
			<< "\t\tSystems Engineering (choose Specialization) 1 (2)\n"
			<< "\t\tVehicle Operation (Shuttlecraft) 2 (3)\n\n"

			<< "\t\tAthletics (choose Specialization) 1 (2)\n"
			<< "\t\tComputer(choose Specialization) 1 (2)\n"
			<< "\t\tDodge 1\n"
			<< "\t\tEnergy Weapon(Phaser) 1 (2)\n"
			<< "\t\tHistory(Federation) 1 (2)\n"
			<< "\t\tLanguage\n\t\t\tFederation Standard 1\n"
			<< "\t\tLaw (Stalest Regulations) 1 (2)\n"
			<< "\t\tPersonal Equipment (choose Specialization) 1 (2)\n"
			<< "\t\tPlanetside Survival (choose Specialization) 1 (2)\n"
			<< "\t\tUnarmed Combat (Starfleet Martial Arts) 1 (2)\n\n";
		break;
	case 3:
		cout << "\nEngineering Officer\n\n"
			<< "\tEngineers keep Starfleet equipment running at peak efficiency. Although\n"
			<< "\tengineers specialize in a particular type of engineering \— warp field\n"
			<< "\tdynamics, matter/energy conversion or materials engineering, Chief\n"
			<< "\tEngineers are expected to be proficient in a variety of specializations.\n\n"

			<< "\t\tComputer (Modeling) 2 (3)\n"
			<< "\t\tEngineering, Any (choose two Specializations) 2 (3)\n"
			<< "\t\tEngineering, Any Other (choose Specialization) 1 (2)\n"
			<< "\t\tPhysical Science (choose Specialization) 1 (2)\n"
			<< "\t\tShipboard Systems (choose two Specializations) 2 (3)\n\n"

			<< "\t\tAthletics (choose Specialization) 1 (2)\n"
			<< "\t\tDodge 1\n"
			<< "\t\tEnergy Weapon (Phaser) 1 (2)\n"
			<< "\t\tLanguage\n"
			<< "\t\t\tFederation Standard 1\n"
			<< "\t\tHistory (Federation) 1 (2)\n"
			<< "\t\tLaw (Starfleet Regulations) 1 (2)\n"
			<< "\t\tPersonal Equipment (choose Specialization) 1 (2)\n"
			<< "\t\tPlanetside Survival (choose Specialization) 1 (2)\n"
			<< "\t\tVehicle Operations (Shutriecraft and one other vehicle) 1 (2)\n\n";
			break;
	case 4:
		cout << "\nSecurity Officer\n\n"
			<< "\tTypically these Operations personnel serve on board o starship or starbase\n"
			<< "\tas a combination security guard and police officer. In addition to patrolling\n"
			<< "\tsensitive areas and beaming into potentially hazardous situations, they\n"
			<< "\tlearn to operate large-scale defensive weapons such os shipboard phasers\n"
			<< "\tand tractor beams.\n\n"

			<< "\t\tEnergy Weapon (Phaser) 2 (3)\n"
			<< "\t\tSecurity (Security Systems) 2 (3)\n"
			<< "\t\tShipboard Systems (Tactical) 2 (3)\n"
			<< "\t\tSystems Engineering (Security) 1 (2)\n"
			<< "\t\tUnarmed Combat (Starfleet Martial Arts) 2 (3)\n\n"

			<< "\t\tAthletics (choose Specialization) 1 (2)\n"
			<< "\t\tComputer (choose Specialization) 1 (2)\n"
			<< "\t\tDodge 1\n"
			<< "\t\tHistory (Federation) 1 (2)\n"
			<< "\t\tLanguage\n"
			<< "\t\t\tFederation Standard 1\n"
			<< "\t\tLaw (Starfleet Regulations) 1 (2)\n"
			<< "\t\tPersonal Equipment (choose Specialization) 1 (2)\n"
			<< "\t\tPlanetside Survival (choose Specialization) 1 (2)\n"
			<< "\t\tVehicle Operations (Shuttleaaft) 1 (2)\n\n";
			break;
	}
}

void trackName(int x) {

	switch (x)
	{

	case 1:
		cout << "Command";
		break;
	case 2:
		cout << "Operations";
		break;
	case 3:
		cout << "Engineer";
		break;
	case 4:
		cout << "Security";
		break;

	}

}
