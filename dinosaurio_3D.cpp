//Al incluir a glut.h �sta incluye a gl.h y a glu.h
#include <GL/glut.h>

//funci�n para inicializar estados de gl
void inicializar(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

//funci�n para dibujar un cubo a partir de pol�gonos
void prisma(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
	};

	glBegin(GL_QUADS);	//Enfrente
	glColor3f(0.388, 0.513, 0.364);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Derecha
	glColor3f(0.156, 0.694, 0.062);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Atr�s
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Izquierda
	glColor3f(0.156, 0.694, 0.062);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Abajo

	glColor3f(0.4, 0.2, 0.6);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Arriba
	glColor3f(0.388, 0.513, 0.364);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


//Funci�n de dibujado
void dibujar(void)
{
	//Color de fondo por r,g,b y transparencia
	//glClearColor(0, 1, 0, 1);

	//Borra la pantalla (buffer) indicado (buffer de color) y muestra el color de la funci�n de arriba
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	

	//quiero empujar al cubo hacia adelante
	glTranslatef(0.0, -5.0, -5.0);
	glRotatef(-80.0, 0.0, 1.0, 0.0);


	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslatef(0.0, 1.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(-1.0, 0.0, 0.0);
	prisma();
	glTranslatef(0.0, 1.0, 0.0);
	prisma();
	glTranslatef(1.0, 0.0, 0.0);
	prisma();
	glTranslated(1.0, 0.0, 0.0);
	prisma();
	glTranslated(0.0, 1.0, 0.0);
	glTranslated(-1.0, 0.0, 0.0);
	prisma();

	//cabeza
	glTranslated(0.0, 1.0, 0.0);
	prisma();
	glTranslated(0.0, 1.0, 0.0);
	prisma();
	glTranslated(0.0, 1.0, 0.0);
	prisma();
	glTranslated(0.0, 0.0, -1.0);
	prisma();
	glTranslated(0.0, 0.0, 1.0);
	glTranslated(0.0, -1.0, 0.0);
	glTranslated(0.0, -1.0, 0.0);
	glTranslated(0.0, -1.0, 0.0);
	glTranslated(0.0, -1.0, 0.0);
	glTranslated(1.0, 0.0, 0.0);
    
	//cuerpo
	glTranslated(0.0, 0.0, 1.0);
	prisma();
	glTranslated(-1.0, 0.0, 0.0);
	prisma();
	glTranslated(-1.0, 0.0, 0.0);
	prisma();
	
	glTranslated(0.0, -1.0, 0.0);
	prisma();
	glTranslated(1.0, 0.0, 0.0);
	prisma();
	glTranslated(1.0, 0.0, 0.0);
	prisma();
	
	glTranslated(0.0, 0.0, 1.0);
	prisma();
	glTranslated(-1.0, 0.0, 0.0);
	prisma();
	glTranslated(-1.0, 0.0, 0.0);
	prisma();
	
	//PataIzq der y cola 
	glTranslated(0.0, -1.0, 0.0);
	prisma();
	glTranslated(0.0, 1.0, 0.0);
	glTranslated(1.0, 0.0, 0.0);
	glTranslated(1.0, 0.0, 0.0);
	glTranslated(0.0, -1.0, 0.0);
	prisma();
	glTranslated(0.0, 1.0, 0.0);
	glTranslated(-1.0, 0.0, 0.0);
	glTranslated(0.0, 0.0, 1.0);
	prisma();
	glTranslated(0.0, 0.0, 1.0);
	prisma();
	glTranslated(0.0, -1.0, 0.0);
	prisma();
	glTranslated(0.0, 0.0, 1.0);
	prisma();

	//Ordena dibujado con la ejecuci�n de comandos de la pila
	glFlush();
}

void remodelar(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5, 0.1 ,20);	
	//glOrtho(-5,5,-5,5, 3 ,20);	

	//glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);
	//glFrustum (-1, 1,-1, 1, 0.1, 10.0);
	//glFrustum (-0.6, 0.6,-0.6, 0.6, 0.1, 10.0);
	//glFrustum(-5, 5, -5, 5, 0.1, 20.0);
	glFrustum (-10, 10, -10, 10, 2.0, 50.0);

	glutPostRedisplay();
}

void teclado(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);

	glutPostRedisplay();
}

//funci�n principal
int main(int argc, char *argv[])
{
	//inicializa GLUT con el sistema de ventanas pasando los argumentos del main
	glutInit(&argc, argv);

	//Buffer simple para dibujar
	//Colores RGB
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);

	//Define ventana de 500 pixeles de ancho por 500 de alto
	glutInitWindowSize(500, 500);

	//Posiciona la ventana de izquierda a derecha 50 pixeles y de arriba a abajo 25
	glutInitWindowPosition(50, 25);

	//Crea y abre la ventana y recibe el nombre que va en su barra de t�tulo
	glutCreateWindow(argv[1]);

	//Llamada a funci�n para inicializar estados de opengl
	inicializar();

	//Llamada a la funci�n a ser dibujada y redibujada
	glutDisplayFunc(dibujar);

	//Lamada a funci�n para remodelar
	glutReshapeFunc(remodelar);

	glutKeyboardFunc(teclado);

	//Llamada a funci�n que cede el control a GLUT y procesa eventos de ventana, rat�n
	glutMainLoop();

	//termina la ejecuci�n devolviendo cero
	return 0;
}
