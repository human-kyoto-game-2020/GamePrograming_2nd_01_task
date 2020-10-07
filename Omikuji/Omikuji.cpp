
#include "../HighAndLow/common.h"

int omikuji(int value)
{
    srand((unsigned)time(NULL));
    value = rand() % 6;

    switch (value)
    {
    case 0: printf("今日の運勢：大吉！\n"); return 0;
    case 1: printf("今日の運勢：中吉！\n"); return 0;
    case 2: printf("今日の運勢：小吉！\n"); return 0;
    case 3: printf("今日の運勢：末吉！\n");   return 0;
    case 4: printf("今日の運勢：凶！\n"); return 0;
    case 5: printf("今日の運勢：大凶！\n"); return 0;
    default:printf("とてつもない運勢です\n"); return 0;
    }
}

int main()
{
    int inputValue = 0;
    int randValue = 0;

    printf("今日の運勢を占います\n\n");
    printf("何か数字を入力してください > ");
    scanf_s("%d", &inputValue);

    omikuji(randValue);

    system("pause");
    return 0;
}
