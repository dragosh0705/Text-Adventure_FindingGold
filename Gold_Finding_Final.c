#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include<string.h>

void main() {

	int yes1 = 0;
	char select[5];
	char name[15];
	printf("TEXT ADVENTURE! - ����");
	scanf("%d", &yes1);
	if (select == yes1) {
		printf("�Ƹ����� ���Ű��� ȯ���մϴ�.\n");
	}
	printf("����� �̸���? \n");
	scanf("%s", &name[0]);
	printf("��, %s���̱���!", name);
	printf("%s��, ����� ���� �Ƹ����� �ֽ��ϴ�.\n �̰����� ������ �����ؾ� �մϴ�.\n ������ �����ϱ���� ���� ������ �����̴ϴ�. \n �� ���ĳ����ñ� �ٶ��ϴ�\n", name);

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

	printf("��������\n");

	printf("���� ���ðڽ��ϱ�? (east or west) : \n");
	scanf("%s", &direction[0]);

	//test2 = strcmp(direction, "east");
	//printf("test2 = %d \n", test2);

	if (strcmp(direction, "east") == 0) {
		printf("���Դϴ�. ������ ���ڽ��ϱ�? (yes2 or no2) : \n");
		scanf("%s", &answer1[0]);

		//	test1 = strcmp(answer1, "yes2");
		//	printf("test1 = %d\n", test1);


		if (strcmp(answer1, "yes2") == 0) {
			printf("�踦 ��������ϴ�.\n");

			printf("�踦 Ÿ�� ȣ���� �������ϴ�.\n ���� �������� �����߽��ϴ�. �����ϼ���.\n");

			for (lisha = 0; lisha < 3; lisha++) {
				printf("���� \n");
			}
			printf("���� �Ϸ�\n");

			printf("���� ���ڽ��ϱ�? : (north or south)\n");
			scanf("%s", &answer3);

			if (strcmp(answer3, "south") == 0) {
				printf("������ ���Դϴ�! \n ����⿡ ž���Ͽ����ϴ�. GAME CLEAR!");
			}
			else {
				printf("ȭ�� ������ �޾ҽ��ϴ�\n GAME OVER!");
			}
		}
		if (strcmp(answer1, "no2") == 0) {
			printf("�踦 ������ ���Ͽ����ϴ�.\n");

			printf("ȣ���� �ǳ� �� �����ϴ�.\n GAME OVER!");
			exit();
		}
	}

	if (answer1 == no2) {
		printf("ȣ���� �ǳ� �� �����ϴ�.\n GAME OVER!");
		exit();
	}

	while (strcmp(direction, "west") == 0) {
		printf("���Դϴ�. ȭ���� ����ðڽ��ϱ�? (yes3 or no3) : \n");
		scanf("%s", &answer2[0]);

		if (strcmp(answer2, "yes3") == 0) {
			printf("ȭ���� ��������ϴ�. ������ ���Խ��ϴ�. �ָ� ���� ���Դϴ�. ���� ȭ���� �������? : (yes4 or no4)\n"); {
				scanf("%s", &answer4[0]);
			}
		}

		if (strcmp(answer4, "no4") == 0) {
			printf("�ٽ� �����ϼ���\n");
			continue;
		}


		if (strcmp(answer4, "yes4") == 0) {
			printf("���� ���񷶽��ϴ�!\n");
			printf("�տ� �ݱ��� ���Դϴ�. �����? (ok) : \n");
			scanf("%s", &ok[0]); 
			printf("�ݱ����� ���Խ��ϴ�\n ������ ���� ������ ã�ҽ��ϴ�.\n ���� ������ �������� ���� �������� ���� ���ؾ� �մϴ�.\n ���� �����? : (north2 or south2) \n");
			scanf("%s", &answer6[0]);

				if (strcmp(answer6, "north2") == 0) {
					printf("���� ���� ���ֹ��� ȭ���� �¾� ���������ϴ�...\n GAME OVER!");
					break;
				}
				if (strcmp(answer6, "south2") == 0) {
					printf("������ ���Դϴ�!\n ���׿� �����Ͽ� ������ ������ ������ �Ƹ����� �����ϴ�.\n  GAME CLEAR!");
				}
				break;
		}

		// printf("�տ� �ݱ��� ���Դϴ�. �����? (yes5 or no5) : \n");


		if (strcmp(answer2, "no3") == 0) {
			printf("ȭ���� �� ��������ϴ�. \n ���� �޷������� ������ ���� ������ �޾ҽ��ϴ�...\n GAME OVER!");
			break;
		}
	}
		/*
		printf("���� ���Խ��ϴ�! �غ�� ȭ���� ������ �������!");

		if (answer2 == yes3) {
			printf("���� ���񷶽��ϴ�. ������ ���ư�����.");
		}

		if (answer2 == no3) {
			printf("ȭ���� �����ϴ�! �뿡�� ���ݴ��߽��ϴ�...\n  GAME OVER!");
		}
		*/
	}


	



