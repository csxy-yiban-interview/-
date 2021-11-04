#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


int main()
{
    char arr[8][8] = {
    {0,0,3,3,3,3,0,0},
    {0,0,3,5,5,3,0,0},
    {0,3,3,0,5,3,3,0},
    {0,3,0,0,4,5,3,0},
    {3,3,0,4,0,0,3,3},
    {3,0,0,3,4,4,0,3},
    {3,0,0,2,0,0,0,3},
    {3,3,3,3,3,3,3,3} };
    int m_x = 6, m_y = 3;
    int cnt = 0;
    while (1)

    {
        int cnt2 = 0;
        system("clear");
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (arr[i][j] == 0) printf(" ");
                else if (arr[i][j] == 2) printf("@");
                else if (arr[i][j] == 3) printf("#");
                else if (arr[i][j] == 4) printf("$");
                else if (arr[i][j] == 5) printf("o");
                else if (arr[i][j] == 7) printf("@");
                else if (arr[i][j] == 9)
                {
                    printf("$");
                    cnt2++;  + 1;
                        
            }
            printf("\n");
        }
        if (cnt2 == 4)
        {
            printf("恭喜过关!一共走了%d步!\n", cnt);
            return 0;
        }
        switch (getch())
        {
        case 183:if (arr[m_x - 1][m_y] != 3)
        {
            if (arr[m_x - 1][m_y] == 0 || arr[m_x - 1][m_y] == 5)
            {
                arr[m_x - 1][m_y] += 2;
                arr[m_x--][m_y] -= 2;
            }
            else if (arr[m_x - 1][m_y] == 4 || arr[m_x - 1][m_y] == 9)
            {
                if (arr[m_x - 2][m_y] != 3 && arr[m_x - 2][m_y] != 4)
                {
                    arr[m_x - 2][m_y] += 4;
                    arr[m_x - 1][m_y] -= 2;
                    arr[m_x--][m_y] -= 2;
                }
            }
        }
                break;
        case 184:if (arr[m_x + 1][m_y] != 3)
        {
            if (arr[m_x + 1][m_y] == 0 || arr[m_x + 1][m_y] == 5)
            {
                arr[m_x + 1][m_y] += 2;
                arr[m_x++][m_y] -= 2;
            }
            else if (arr[m_x + 1][m_y] == 4 || arr[m_x + 1][m_y] == 9)
            {
                if (arr[m_x + 2][m_y] != 3 && arr[m_x + 2][m_y] != 4)
                {
                    arr[m_x + 2][m_y] += 4;
                    arr[m_x + 1][m_y] -= 2;
                    arr[m_x++][m_y] -= 2;
                }
            }
        }
                break;
        case 185:if (arr[m_x][m_y + 1] != 3)
        {
            if (arr[m_x][m_y + 1] == 0 || arr[m_x][m_y + 1] == 5)
            {
                arr[m_x][m_y + 1] += 2;
                arr[m_x][m_y++] -= 2;
            }
            else if (arr[m_x][m_y + 1] == 4 || arr[m_x][m_y + 1] == 9)
            {
                if (arr[m_x][m_y + 2] != 3 && arr[m_x + 2][m_y] != 4)
                {
                    arr[m_x][m_y + 2] += 4;
                    arr[m_x][m_y + 1] -= 2;
                    arr[m_x][m_y++] -= 2;
                }
            }
        }
                break;
        case 186:if (arr[m_x][m_y - 1] != 3)
        {
            if (arr[m_x][m_y - 1] == 0 || arr[m_x][m_y - 1] == 5)
            {
                arr[m_x][m_y - 1] += 2;
                arr[m_x][m_y--] -= 2;
            }
            else if (arr[m_x][m_y - 1] == 4 || arr[m_x][m_y - 1] == 9)
            {
                if (arr[m_x][m_y - 2] != 3 && arr[m_x][m_y] != 4)
                {
                    arr[m_x][m_y - 2] += 4;
                    arr[m_x][m_y - 1] -= 2;
                    arr[m_x][m_y--] -= 2;
                }
            }
        }
                break;
        }
        cnt++;
    }
    return 0;
}