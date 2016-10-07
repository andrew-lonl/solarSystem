#include <GL/glut.h>
#include "solarsystem.hpp"

#define WINDOWS_X_POS 50
#define  WINDOWS_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

void onDisplay()
{
    solarsystem.onDisplay();
}

void onUpdate()
{
    solarsystem.onUpdate();
}

void onKeyboard(unsigned char key, int x, int y)
{
    solarsystem.onKeyboard(key,  x, y);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(WINDOWS_X_POS, WINDOWS_Y_POS);
    glutCreateWindow("SolarSystem");
    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);
    glutMainLoop();
    return 0;
}
