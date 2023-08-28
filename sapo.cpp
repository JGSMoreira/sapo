#include <GL/glut.h>

// SUPOSTAMENTE UM SAPO
void desenharSapo() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Corpo do sapo (quadrado verde)
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);

    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.3, 0.5);
    glVertex2f(-0.3, 0.7);
    glVertex2f(-0.5, 0.7);

    glVertex2f(0.5, 0.5);
    glVertex2f(0.3, 0.5);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.5, 0.7);

    glEnd();

    // Olhos do sapo
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.4);
    glVertex2f(-0.3, 0.4);

    glVertex2f(0.1, 0.2);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.3, 0.4);
    glVertex2f(0.1, 0.4);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.3);
    glVertex2f(-0.2, 0.3);

    glVertex2f(0.2, 0.2);
    glVertex2f(0.1, 0.2);
    glVertex2f(0.1, 0.3);
    glVertex2f(0.2, 0.3);
    glEnd();

    // Boca do sapo
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);

    glVertex2f(-0.3, 0.0);
    glVertex2f(-0.1, 0.0);
    glVertex2f(-0.1, -0.2);
    glVertex2f(-0.3, -0.2);

    glVertex2f(-0.1, 0.0);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.1, -0.2);
    glVertex2f(-0.1, -0.2);

    glVertex2f(0.1, 0.0);
    glVertex2f(0.3, 0.0);
    glVertex2f(0.3, -0.2);
    glVertex2f(0.1, -0.2);
    glEnd();

    // Lingua do sapo
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.1, -0.1);
    glVertex2f(0.0, -0.1);
    glVertex2f(0.0, -0.2);
    glVertex2f(-0.1, -0.2);

    glVertex2f(0.0, -0.1);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.1, -0.2);
    glVertex2f(0.0, -0.2);

    glEnd();

    // Pés do sapo
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.4, -0.7);
    glVertex2f(-0.6, -0.7);

    glVertex2f(0.6, -0.5);
    glVertex2f(0.4, -0.5);
    glVertex2f(0.4, -0.7);
    glVertex2f(0.6, -0.7);
    glEnd();

    glFlush();
}

void mostrar() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    desenharSapo();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Sapinho");
    glutDisplayFunc(mostrar);
    glutMainLoop();
    return 0;
}
