
#include "common.h"

void HighAndLow(int input, int rand)
{
	while (true)
	{
		printf("何か数字を入力してください > ");
		scanf_s("%d", &input);

		if (input == rand)
		{
			printf("正解です！\n");
			break;	// breakはwhile文を抜けるのにも使える
					// breakは、一番近いfor,while,switchの{}範囲から抜ける
		}
		else if (input < rand)
		{
			printf("もっと大きい数字です！\n");
		}
		else
		{
			printf("もっと小さい数字です！\n");
		}
	}
}

int main()
{
	int inputValue = 0;
	int randValue = 0;

	srand((unsigned)time(NULL));
	randValue = rand() % 100;

	printf("0～99の中から、正解の数字を当ててください\n\n");

	HighAndLow(inputValue, randValue);

	system("pause");
	return 0;
}
