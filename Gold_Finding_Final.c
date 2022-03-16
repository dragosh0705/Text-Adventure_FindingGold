#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include<string.h>

void main() {

	int yes1 = 0;
	char select[5];
	char name[15];
	printf("TEXT ADVENTURE! - 도굴");
	scanf("%d", &yes1);
	if (select == yes1) {
		printf("아마존에 오신것을 환영합니다.\n");
	}
	printf("당신의 이름은? \n");
	scanf("%s", &name[0]);
	printf("아, %s님이군요!", name);
	printf("%s님, 당신은 현재 아마존에 있습니다.\n 이곳에서 유물을 도굴해야 합니다.\n 하지만 도굴하기까지 많은 위험이 있을겁니다. \n 잘 해쳐나가시기 바랍니다\n", name);

	char direction[15];
	char select1[5];
	char answer1[5];
	char answer2[5];
	char answer3[10];
	char answer4[20];
	char answer5[20];
	char answer6[20];
	char east[5];
	char west[5];
	char yes2[5];
	char no2[5];
	char yes3[5];
	char no3[5];
	char yes4[10];
	char no4[10];
	char ok[5];
	int lisha = 0;
	char north[20];
	char south[20];
	char north2[20];
	char south2[20];

	//	int test1;
	//	int test2;

	printf("시작지점\n");

	printf("어디로 가시겠습니까? (east or west) : \n");
	scanf("%s", &direction[0]);

	//test2 = strcmp(direction, "east");
	//printf("test2 = %d \n", test2);

	if (strcmp(direction, "east") == 0) {
		printf("숲입니다. 나무를 베겠습니까? (yes2 or no2) : \n");
		scanf("%s", &answer1[0]);

		//	test1 = strcmp(answer1, "yes2");
		//	printf("test1 = %d\n", test1);


		if (strcmp(answer1, "yes2") == 0) {
			printf("배를 만들었습니다.\n");

			printf("배를 타고 호수를 지나갑니다.\n 리샤 유적지에 도착했습니다. 도굴하세요.\n");

			for (lisha = 0; lisha < 3; lisha++) {
				printf("도굴 \n");
			}
			printf("도굴 완료\n");

			printf("어디로 가겠습니까? : (north or south)\n");
			scanf("%s", &answer3);

			if (strcmp(answer3, "south") == 0) {
				printf("공항이 보입니다! \n 비행기에 탑승하였습니다. GAME CLEAR!");
			}
			else {
				printf("화살 공격을 받았습니다\n GAME OVER!");
			}
		}
		if (strcmp(answer1, "no2") == 0) {
			printf("배를 만들지 못하였습니다.\n");

			printf("호수를 건널 수 없습니다.\n GAME OVER!");
			exit();
		}
	}

	if (answer1 == no2) {
		printf("호수를 건널 수 없습니다.\n GAME OVER!");
		exit();
	}

	while (strcmp(direction, "west") == 0) {
		printf("숲입니다. 화살을 만드시겠습니까? (yes3 or no3) : \n");
		scanf("%s", &answer2[0]);

		if (strcmp(answer2, "yes3") == 0) {
			printf("화살을 만들었습니다. 숲에서 나왔습니다. 멀리 용이 보입니다. 만든 화살을 꺼낼까요? : (yes4 or no4)\n"); {
				scanf("%s", &answer4[0]);
			}
		}

		if (strcmp(answer4, "no4") == 0) {
			printf("다시 생각하세요\n");
			continue;
		}


		if (strcmp(answer4, "yes4") == 0) {
			printf("용을 무찔렀습니다!\n");
			printf("앞에 금광이 보입니다. 들어갈까요? (ok) : \n");
			scanf("%s", &ok[0]); 
			printf("금광으로 들어왔습니다\n 금으로 만든 유물을 찾았습니다.\n 이제 나가서 북쪽으로 갈지 남쪽으로 갈지 정해야 합니다.\n 어디로 갈까요? : (north2 or south2) \n");
			scanf("%s", &answer6[0]);

				if (strcmp(answer6, "north2") == 0) {
					printf("가는 도중 원주민의 화살을 맞아 쓰러졌습니다...\n GAME OVER!");
					break;
				}
				if (strcmp(answer6, "south2") == 0) {
					printf("공항이 보입니다!\n 공항에 도착하여 도굴한 유물을 가지고 아마존은 떠납니다.\n  GAME CLEAR!");
				}
				break;
		}

		// printf("앞에 금광이 보입니다. 들어갈까요? (yes5 or no5) : \n");


		if (strcmp(answer2, "no3") == 0) {
			printf("화살을 못 만들었습니다. \n 용이 달려오지만 도구가 없어 공격을 받았습니다...\n GAME OVER!");
			break;
		}
	}
		/*
		printf("용이 나왔습니다! 준비된 화살을 꺼내서 무찌르세요!");

		if (answer2 == yes3) {
			printf("용을 무찔렀습니다. 앞으로 나아가세요.");
		}

		if (answer2 == no3) {
			printf("화살이 없습니다! 용에게 공격당했습니다...\n  GAME OVER!");
		}
		*/
	}


	



