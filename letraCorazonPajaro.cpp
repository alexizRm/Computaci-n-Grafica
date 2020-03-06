#include <GL/glut.h>

void dibujar(void)
{
	glClearColor(0, 0, 0, 0);

	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glOrtho(-5, 50, -5, 50, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);

	glLineWidth(3.0);

	

	glBegin(GL_QUADS);

	//Letra A 
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(2.0, 2.0, -1.0);
	glVertex3f(4.0, 2.0, -1.0);
	glVertex3f(4.0, 6.0, -1.0);
	glVertex3f(2.0, 6.0, -1.0);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(2.0, 6.0, -1.0);
	glVertex3f(9.0, 6.0, -1.0);
	glVertex3f(9.0, 8.0, -1.0);
	glVertex3f(2.0, 8.0, -1.0);

	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(7.0, 2.0, -1.0);
	glVertex3f(9.0, 2.0, -1.0);
	glVertex3f(9.0, 6.0, -1.0);
	glVertex3f(7.0, 6.0, -1.0);

	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(4.0, 4.0, -1.0);
	glVertex3f(7.0, 4.0, -1.0);
	glVertex3f(7.0, 5.0, -1.0);
	glVertex3f(4.0, 5.0, -1.0);

	//Corazon

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(2.0, 18.0, -1.0);
	glVertex3f(4.0, 16.0, -1.0);
	glVertex3f(4.0, 22.0, -1.0);
	glVertex3f(2.0, 20.0, -1.0);
	
	glColor3f(0.85, 0.0, 0.0);
	glVertex3f(4.0, 16.0, -1.0);
	glVertex3f(6.0, 14.0, -1.0);
	glVertex3f(6.0, 22.0, -1.0);
	glVertex3f(4.0, 22.0, -1.0);

	glColor3f(0.7, 0.0, 0.0);
	glVertex3f(6.0, 14.0, -1.0);
	glVertex3f(8.0, 12.0, -1.0);
	glVertex3f(8.0, 20.0, -1.0);
	glVertex3f(6.0, 22.0, -1.0);

	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(8.0, 12.0, -1.0);
	glVertex3f(10.0, 14.0, -1.0);
	glVertex3f(10.0, 22.0, -1.0);
	glVertex3f(8.0, 20.0, -1.0);

	glColor3f(0.4, 0.0, 0.0);
	glVertex3f(10.0, 14.0, -1.0);
	glVertex3f(12.0, 16.0, -1.0);
	glVertex3f(12.0, 22.0, -1.0);
	glVertex3f(10.0, 22.0, -1.0);

	glColor3f(0.25, 0.0, 0.0);
	glVertex3f(12.0, 16.0, -1.0);
	glVertex3f(14.0, 18.0, -1.0);
	glVertex3f(14.0, 20.0, -1.0);
	glVertex3f(12.0, 22.0, -1.0);

	//flor
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(24.0, 9.0, -1.0);
	glVertex3f(26.0, 7.0, -1.0);
	glVertex3f(26.0, 10.0, -1.0);
	glVertex3f(24.0, 12.0, -1.0);

	glVertex3f(26.0, 7.0, -1.0);
	glVertex3f(28.0, 9.0, -1.0);
	glVertex3f(28.0, 12.0, -1.0);
	glVertex3f(26.0, 10.0, -1.0);



	//El Pollito Pio

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(16.0, 5.0, -1.0);
	glVertex3f(19.0, 5.0, -1.0);
	glVertex3f(21.0, 7.0, -1.0);
	glVertex3f(14.0, 7.0, -1.0);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(17.0, 7.0, -1.0);
	glVertex3f(21.0, 7.0, -1.0);
	glVertex3f(21.0, 9.0, -1.0);
	glVertex3f(19.0, 9.0, -1.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(21.0, 7.0, -1.0);
	glVertex3f(23.0, 7.0, -1.0);
	glVertex3f(21.0, 9.0, -1.0);

	glVertex3f(26.0, 1.0, -1.0);
	glVertex3f(26.0, 2.0, -1.0);
	glVertex3f(24.0, 4.0, -1.0);
	
	glVertex3f(26.0, 3.0, -1.0);
	glVertex3f(28.0, 7.0, -1.0);
	glVertex3f(26.0, 4.0, -1.0);
	
	glEnd();

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex3f(19.5, 8.0, -1.0);

	glEnd();

	glLineWidth(3.0);

	glBegin(GL_LINES);

	glVertex3f(26.0, 7.0, -1.0);
	glVertex3f(26.0, 0.0, -1.0);


	glEnd();

	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);


	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(500, 500);

	glutInitWindowPosition(50, 25);

	glutCreateWindow(argv[1]);

	glutDisplayFunc(dibujar);

	glutMainLoop();

	return 0;

}