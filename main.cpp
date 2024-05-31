#include <GL/glut.h>
#include <string>

void drawStartButton() {
    glColor3f(1.0f, 0.0f, 0.0f); // Red color for the text

    glRasterPos2i(315, 350);
    glScalef(7.0f, 7.0f, 5.0f);
    std::string text = "Start Game";
    for (char c : text) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Call the function to draw the Start Game button
    drawStartButton();

    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("OpenGL Start Game Button");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white

    glutMainLoop();
    return 0;
}
