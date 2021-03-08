///把第1個範例 openGL,拿來亂改
///把第一個Project變 *粗黑色* Active
#include <stdio.h>
int main( int argc, char** argv) ///" ** "代表指標陣列，很多字串
{
    printf("現在的 argc是:%d\n", argc);
    for(int i=0; i<argc; i++)
    {
        printf("argv[%d]是:%s\n", i, argv[i]);
    }
}
