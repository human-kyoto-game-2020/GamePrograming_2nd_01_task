
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int inputValue = 0;
	int randValue = 0;

	srand((unsigned)time(NULL));
	randValue = rand() % 100;

	printf("0～99の中から、正解の数字を当ててください\n");
	printf("\n");

	while( true )
	{
		printf("何か数字を入力してください > ");
		scanf_s("%d", &inputValue);

		if( inputValue == randValue )
		{
			printf("正解です！\n");
			break;	// breakはwhile文を抜けるのにも使える
					// breakは、一番近いfor,while,switchの{}範囲から抜ける
		}
		else if( inputValue < randValue )
		{
			printf("もっと大きい数字です！\n");
		}
		else
		{
			printf("もっと小さい数字です！\n");
		}
	}

	system("pause");
	return 0;
}
