//al incluir a glut.h esta incluyendo a gl.h y a glu.h
#include<math.h>
#include <GL/glut.h>
#define  pi 3.14159265

//funcion de dibujado
void dibujar(void) {
	//color de fondo por r,g,b y transparencia
	glClearColor(0.019, 0.117, 0.341, 1);

	//borra la pantalla (buffer)indicado (buffer de color) y muestra el color de la funcion de arriba
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glOrtho(-5, 50, -5, 50, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);

	glLineWidth(3.0);

	glBegin(GL_QUADS);

	glColor3f(0.356, 0.815, 0.043);
	glVertex3f(6.0, 2.0, -1.0);
	glVertex3f(8.0, 2.0, -1.0);
	glVertex3f(6.0, 4.0, -1.0);
	glVertex3f(4.0, 4.0, -1.0);

	glColor3f(0.356, 0.815, 0.043);
	glVertex3f(8.0, 2.0, -1.0);
	glVertex3f(10.0, 2.0, -1.0);
	glVertex3f(12.0, 4.0, -1.0);
	glVertex3f(10.0, 4.0, -1.0);

	glColor3f(0.933, 0.549, 0.227);
	glVertex3f(6.0, 6.0, -1.0);
	glVertex3f(10.0, 6.0, -1.0);
	glVertex3f(10.0, 10.0, -1.0);
	glVertex3f(6.0, 10.0, -1.0);
	
	glColor3f(0.870, 0.266, 0.070);
	glVertex3f(7.0, 7.0, -1.0);
	glVertex3f(9.0, 7.0, -1.0);
	glVertex3f(9.0, 9.0, -1.0);
	glVertex3f(7.0, 9.0, -1.0);

	//pata1
	glColor3f(0.917, 0.839, 0.180);
	glVertex3f(16.0, 2.0, -1.0);
	glVertex3f(17.0, 2.0, -1.0);
	glVertex3f(17.0, 5.0, -1.0);
	glVertex3f(16.0, 5.0, -1.0);

	glColor3f(0.917, 0.839, 0.180);
	glVertex3f(19.0, 2.0, -1.0);
	glVertex3f(20.0, 2.0, -1.0);
	glVertex3f(20.0, 5.0, -1.0);
	glVertex3f(19.0, 5.0, -1.0);

	glColor3f(0.917, 0.839, 0.180);
	glVertex3f(16.0, 5.0, -1.0);
	glVertex3f(20.0, 5.0, -1.0);
	glVertex3f(20.0, 8.0, -1.0);
	glVertex3f(16.0, 8.0, -1.0);

	glColor3f(0.917, 0.839, 0.180);
	glVertex3f(16.0, 8.0, -1.0);
	glVertex3f(18.0, 8.0, -1.0);
	glVertex3f(18.0, 12.0, -1.0);
	glVertex3f(16.0, 12.0, -1.0);

	glColor3f(0.917, 0.839, 0.180);
	glVertex3f(14.0, 9.0, -1.0);
	glVertex3f(16.0, 9.0, -1.0);
	glVertex3f(16.0, 12.0, -1.0);
	glVertex3f(14.0, 12.0, -1.0);

	glColor3f(0.917, 0.839, 0.180);
	glVertex3f(13.0, 10.0, -1.0);
	glVertex3f(14.0, 9.0, -1.0);
	glVertex3f(14.0, 12.0, -1.0);
	glVertex3f(13.0, 11.0, -1.0);
	
	glColor3f(0.447, 0.407, 0.113);
	glVertex3f(18.0, 10.0, -1.0);
	glVertex3f(19.0, 10.0, -1.0);
	glVertex3f(19.0, 11.0, -1.0);
	glVertex3f(18.0, 11.0, -1.0);

	glColor3f(0.447, 0.407, 0.113);
	glVertex3f(16.0, 12.0, -1.0);
	glVertex3f(16.5, 12.0, -1.0);
	glVertex3f(16.5, 13.0, -1.0);
	glVertex3f(16.0, 13.0, -1.0);
	
	glColor3f(0.447, 0.407, 0.113);
	glVertex3f(17.0, 12.0, -1.0);
	glVertex3f(17.5, 12.0, -1.0);
	glVertex3f(17.5, 13.0, -1.0);
	glVertex3f(17.0, 13.0, -1.0);
	
	glEnd();
	
	glPointSize(10.0);

	glBegin(GL_POINTS);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(16.25, 13.5, -1.0);
	glVertex3f(17.25, 13.5, -1.0);


	glEnd();

	
	glPointSize(5.0);

	glBegin(GL_POINTS);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(16.0, 11.0, -1.0);

	glEnd();
	
	
	glBegin(GL_TRIANGLES);
	//t1
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6.0, 4.0, -1.0);
	glVertex3f(8.0, 6.0, -1.0);
	glVertex3f(6.0, 6.0, -1.0);
	//t2
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(8.0, 6.0, -1.0);
	glVertex3f(10.0, 4.0, -1.0);
	glVertex3f(10.0, 6.0, -1.0);
	//t3
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(10.0, 6.0, -1.0);
	glVertex3f(12.0, 6.0, -1.0);
	glVertex3f(10.0, 8.0, -1.0);
	//t4
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(10.0, 8.0, -1.0);
	glVertex3f(12.0, 10.0, -1.0);
	glVertex3f(10.0, 10.0, -1.0);
	//t5
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(8.0, 10.0, -1.0);
	glVertex3f(10.0, 10.0, -1.0);
	glVertex3f(10.0, 12.0, -1.0);
	//t6
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(8.0, 10.0, -1.0);
	glVertex3f(6.0, 12.0, -1.0);
	glVertex3f(6.0, 10.0, -1.0);
	//t7
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(6.0, 8.0, -1.0);
	glVertex3f(6.0, 10.0, -1.0);
	glVertex3f(4.0, 10.0, -1.0);
	//t8
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(4.0, 6.0, -1.0);
	glVertex3f(6.0, 6.0, -1.0);
	glVertex3f(6.0, 8.0, -1.0);

	glEnd();

	//Palo

	glBegin(GL_LINES);

	glColor3f(0.356, 0.815, 0.043);
	glVertex3f(8.0, 2.0, -1.0);
	glVertex3f(8.0, 6.0, -1.0);

	glEnd();


	glColor3f(1.0, 1.0, 0.0);

	float x, y;
	float angRad, angGrand=0;
	float centroX= 40.0;
	float centroY= 40.0;
	float radio= 2.0;

	glBegin(GL_POLYGON);
	for (angGrand = 0; angGrand<360; angGrand++)
	{
		angRad=(angGrand*pi)/180;
		x = centroX + radio * cos(angRad);
		y = centroY + radio * sin(angRad);
		glVertex3f(x, y, -2.0);
	}
	glEnd();



	//ordena dibujado con la ejecucion de comandos de la pila
	glFlush();

}

void teclado(unsigned char key, int x, int y) {
	if (key==27)
	exit(0);
}
//funcion principal
int main(int argc, char *argv[]) {

	//inicializa GLUT con el sistema de ventans pasando los argumentos del main
	//instancia de una ventana
	glutInit(&argc, argv);

	//buffer simple para dibujar
	//colores RGB
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	//define la ventana de 500 pixeles de ancho por 250 de alto
	glutInitWindowSize(700, 700);

	//posiciona la ventana de izquierda a derecha 50 pixeles y de arrib a abajo 25
	glutInitWindowPosition(10, 15);

	//crea y abre la ventana y recibe el nombre que va en su barra de titulo 
	glutCreateWindow(argv[1]);

	//llamada a la funcion a ser dibujada y redibujada
	glutDisplayFunc(dibujar);
	glutKeyboardFunc(teclado);
	//llamada  a funcion que cede el control a GLUT y procesa eventos de ventana, raton 
	glutMainLoop();

	//termina la ejecucion devolviendo cero
	return 0;


}
