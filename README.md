# 2021project

這裡有我在電腦圖學寫的程式。

Week03-1
---------
```C
///把第1個範例 OpenGL, 拿來亂改
///把第1個Project變 *粗黑色* Active
#include <stdio.h>
int main( int argc, char** argv) ///" ** "代表指標陣列，很多字串
{
    printf("現在的 argc是:%d\n", argc);
    for(int i=0; i<argc; i++)
    {
        printf("argv[%d]是:%s\n", i, argv[i]);
    }
}

```



Week03-2
----------
```C
///留下精華
#include <GL/glut.h> ///(1) 使用 GLUT 外掛

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);

            glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);

            glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

        glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[]) ///我們只要留 main()裡面的 5 行
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);

    glutMainLoop();
}


```





week03-3
---------
```C++
#include <GL/glut.h> ///(0) 使用 GLUT 外掛

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空

    glColor3f(1,1,0);
    glutSolidTeapot(0.3);

    glutSwapBuffers();///交換兩倍的buffers
}

int main(int argc, char ** argv) ///??? 以前是 int main()
{
    glutInit(&argc, argv); ///(1) GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160766我是聰明的蔡同學");///(3)開窗

    glutDisplayFunc(display);///(4)等一下要顯示的函示

    glutMainLoop();///(5)主要迴圈
}

