//Al incluir a glut.h ésta incluye a gl.h y a glu.h
#include <GL/glut.h>

//función para inicializar estados de gl
void inicializar(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

//función para dibujar un cubo a partir de polígonos
void prisma(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
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

	glBegin(GL_POLYGON);	//Atrás
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


//Función de dibujado
void dibujar(void)
{
	//Color de fondo por r,g,b y transparencia
	//glClearColor(0, 1, 0, 1);

	//Borra la pantalla (buffer) indicado (buffer de color) y muestra el color de la función de arriba
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

	//Ordena dibujado con la ejecución de comandos de la pila
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

//función principal
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

	//Crea y abre la ventana y recibe el nombre que va en su barra de título
	glutCreateWindow(argv[1]);

	//Llamada a función para inicializar estados de opengl
	inicializar();

	//Llamada a la función a ser dibujada y redibujada
	glutDisplayFunc(dibujar);

	//Lamada a función para remodelar
	glutReshapeFunc(remodelar);

	glutKeyboardFunc(teclado);

	//Llamada a función que cede el control a GLUT y procesa eventos de ventana, ratón
	glutMainLoop();

	//termina la ejecución devolviendo cero
	return 0;
}
