#include <GL/glut.h> ///(0) �ϥ� GLUT �~��

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M��

    glColor3f(1,1,0);
    glutSolidTeapot(0.3);

    glutSwapBuffers();///�洫�⭿��buffers
}

int main(int argc, char ** argv) ///??? �H�e�O int main()
{
    glutInit(&argc, argv); ///(1) GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160766�ڬO�o�������P��");///(3)�}��

    glutDisplayFunc(display);///(4)���@�U�n��ܪ����

    glutMainLoop();///(5)�D�n�j��
}
