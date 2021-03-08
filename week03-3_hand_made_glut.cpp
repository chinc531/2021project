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
