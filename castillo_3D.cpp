#include<GL/glut.h>

void inicalizar(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma (void) 
{
	GLfloat vertice[8][3] = {
		{ 0.5,-0.5, 0.5},
		{-0.5,-0.5, 0.5},
		{-0.5,-0.5,-0.5},
		{ 0.5,-0.5,-0.5},
		{ 0.5, 0.5, 0.5},
		{ 0.5, 0.5,-0.5},
		{-0.5, 0.5,-0.5},
		{-0.5, 0.5, 0.5},
	};
	
	glBegin(GL_POLYGON);
	glColor3f(0.733, 0.607, 0.505);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.588, 0.490, 0.411);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.2, 0.6);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.2, 0.4);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);

	glEnd();


}

void dibujar(void)
{
	//glClearColor(0, 0, 0, 0);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glRotatef(45.0, 1.0, 1.0, 0.0);
	//prisma - mover
	glTranslatef(0.0, 0.0, -5.0);

	prisma();
	//AQUI VA EL PRISMA DE LA DERECHA
	//Primera linea
	glTranslatef(1.0, 0.0, 0.0);
	prisma(); 
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	//segunda linea 
	glTranslatef(0.0, 0.0, -1.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	//Linea del central del castillo
	glTranslatef(0.0, 0.0, -1.0);
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	//Cuarta linea 
	glTranslatef(0.0, 0.0, -1.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	//Quinta linea
	glTranslatef(0.0, 0.0, -1.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	//cuadros arriba
	glTranslatef(0.0, 1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	
	glTranslatef(-1.0, 0.0, 0.0);
	glTranslatef(-1.0, 0.0, 0.0);
	glTranslatef(-1.0, 0.0, 0.0);
	glTranslatef(-1.0, 0.0, 0.0);

	glTranslatef(0.0, 1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);

	glTranslatef(0.0, 0.0, 1.0);
	glTranslatef(0.0, 0.0, 1.0);
	glTranslatef(0.0, 0.0, 1.0);
	glTranslatef(0.0, 0.0, 1.0);
	
	glTranslatef(0.0, 1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	
	glTranslatef(1.0, 0.0, 0.0);
	glTranslatef(1.0, 0.0, 0.0);
	glTranslatef(1.0, 0.0, 0.0);
	glTranslatef(1.0, 0.0, 0.0);

	glTranslatef(0.0, 1.0, 0.0);
	prisma();

	glFlush();
}

void remodelar(int width, int height)
{
	if (height == 0)
	{
		height = 1;

	}

	glViewport(0,0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//Tipo de vista
	glOrtho(-10, 10, -10, 10, 0.1, 20);
	
	//glFrustum(-5, 5, -5, 5, 4.0, 20.0);

	glutPostRedisplay();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(500, 500);

	glutInitWindowPosition(50, 25);

	glutCreateWindow(argv[1]);

	inicalizar();

	glutDisplayFunc(dibujar);

	glutReshapeFunc(remodelar);

	glutMainLoop();

	return 0;
}