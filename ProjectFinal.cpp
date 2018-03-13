#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _angle_tri = 0.0;
float _angle_2 = 90;
float i = 0.0f;
float go=0.1;
float go1 = 0.1;

void init(void)
{
   GLfloat ambient[] = { 0.0, 0.0, 0.0, 1.0 };
   GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat position[] = { 0.0, 3.0, 2.0, 0.0 };
   GLfloat lmodel_ambient[] = { 0.4, 0.4, 0.4, 1.0 };
   GLfloat local_view[] = { 0.0 };

  glClearColor(0.0, 0.1, 0.1, 0.0);
   glEnable(GL_DEPTH_TEST);
   glShadeModel(GL_SMOOTH);

   glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
   glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
   glLightfv(GL_LIGHT0, GL_POSITION, position);
   glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
   glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
}

void drawScene() {
   GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
   GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
   GLfloat mat_ambient_color[] = { 0.8, 0.8, 0.2, 1.0 };
   GLfloat mat_diffuse[] = { 0.1, 0.5, 0.8, 1.0 };
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat no_shininess[] = { 0.0 };
   GLfloat low_shininess[] = { 1.0 };
   GLfloat high_shininess[] = { 100.0 };
   GLfloat mat_emission[] = {0.3, 0.2, 0.2, 0.0};
   //
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -3.0); //Move forward 5 units


//
    //glScalef(.5,.5,0.0);
    glPushMatrix(); //Save the transformations performed thus far
	 glScalef(0.5,0.5,0.5);
	glTranslatef(-1.0, -1.2, 0.0); //Move to the center of the trapezoid
	 glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.30, 0.0);
	glVertex3f(0.60, 0.30, 0.0);
	glVertex3f(0.60, 1.50, 0.0);
	glVertex3f(0.38, 2.00, 0.0);
	glVertex3f(0.15, 1.50, 0.0);

	glEnd();
	glPopMatrix();

//
	glPushMatrix(); //Save the transformations performed thus far
	 glScalef(0.5,0.5,0.5);
	glTranslatef(-0.60, 0.01, 0.0); //Move to the center of the trapezoid
	 glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.30, 0.0);
	glVertex3f(1.30, 0.30, 0.0);
	glVertex3f(0.90, 0.60, 0.0);
	glVertex3f(0.55, 0.60, 0.0);


	glEnd();
	glPopMatrix();

//
    glPushMatrix(); //Save the transformations performed thus far
     glScalef(0.5,0.5,0.5);
	glTranslatef(-0.55, -1.20, 0.0); //Move to the center of the trapezoid
	 glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.30, 0.0);
	glVertex3f(0.65, 0.30, 0.0);
	glVertex3f(0.65, 1.55, 0.0);
    glVertex3f(0.15, 1.55, 0.0);

	glEnd();
	glPopMatrix();

//
    glPushMatrix(); //Save the transformations performed thus far
     glScalef(0.5,0.5,0.5);
	glTranslatef(-0.10, -0.30, 0.0); //Move to the center of the trapezoid
    glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.30, 0.0);
	glVertex3f(0.75, 0.30, 0.0);
	glVertex3f(0.75, 0.65, 0.0);
    glVertex3f(0.15, 0.65, 0.0);

	glEnd();
	glPopMatrix();

	//
    glPushMatrix(); //Save the transformations performed thus far
     glScalef(0.5,0.5,0.5);
	glTranslatef(0.5, -1.2, 0.0); //Move to the center of the trapezoid
    glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.30, 0.0);
	glVertex3f(0.60, 0.30, 0.0);
	glVertex3f(0.60, 1.50, 0.0);
	glVertex3f(0.38, 2.00, 0.0);
	glVertex3f(0.15, 1.50, 0.0);

	glEnd();
	glPopMatrix();


    glPushMatrix(); //Save the transformations performed thus far
    glScalef(0.5,0.5,0.5);
	glTranslatef(0.25, -1.2, 0.0); //Move to the center of the trapezoid
    glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.30, 0.0);
	glVertex3f(0.40, 0.30, 0.0);
	glVertex3f(0.40, 1.50, 0.0);
	glVertex3f(0.15, 1.50, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.10, -0.40, 0.0); //Move to the center of the trapezoid
    glColor3f(0.0,1.0,1.0);
    glRotatef(180,0.5,.5,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.40, 0.20, 0.0);
	glVertex3f(0.40, 0.5, 0.0);
	glVertex3f(0.15, 0.5, 0.0);

	glEnd();
	glPopMatrix();


///........####creat foundation####............

	glPushMatrix(); //Save the transformations performed thus far
	 glScalef(0.5,0.5,0.5);
	glTranslatef(-1.25, -1.15, 0.0); //Move to the center of the trapezoid
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(2.5, 0.20, 0.0);
	glVertex3f(2.5, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

///...............######Create Window######.................

    ///.....Door
    glPushMatrix(); //Save the transformations performed thus far
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.10, -1.05, 0.0); //Move to the center of the trapezoid
    glColor3f(0.0,0.0,1.0);
    glRotatef(180,0.5,.5,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.80, 0.20, 0.0);
	glVertex3f(0.80, 0.5, 0.0);
	glVertex3f(0.15, 0.5, 0.0);

	glEnd();
	glPopMatrix();

///.....
	glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(1.0,1.0,1.5);
    glTranslatef(-0.60,0.10,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(-0.20,0.15,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();


    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(0.12,0.15,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();


    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(0.46,0.15,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();


    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(0.87,0.10,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(-.60,-0.3,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();


    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(-.20,-0.3,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(0.55,-0.3,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glColor3f(0.8,1.0,1.5);
    glTranslatef(0.87,-0.5,0.0);
    glRotatef(360,0.5,1.0,0.0);
    glutSolidCube(.25); //(GLdouble size)

    glPopMatrix();




///........##### Design for House 2 ##### ............ House 2 design here.......don't mix up....

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-3.35, -0.65, 0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.65, 0.20, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-3.35, -0.35, 0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.65, 0.20, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-4.25, -0.35, 0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.65, 0.20, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-4.25, -0.65, 0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.65, 0.20, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-4.25, 0.20, 0.0);
    glColor3f(1.5,0.5,0.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(1.55, 0.20, 0.0);
	glVertex3f(1.55, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    //glRotatef(250,1.80,1.0,0.0);
	glTranslatef(-3.50,-0.80, 0.0);
    glColor3f(1.5,0.5,0.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.10, 0.20, 0.0);
	glVertex3f(0.12, 0.20, 0.0);
	glVertex3f(0.12, 0.90, 0.0);
	glVertex3f(0.10, 0.90, 0.0);

	glEnd();
	glPopMatrix();

///....
    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-2.80,-0.80, 0.0);
    glColor3f(1.5,0.5,0.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.10, 0.20, 0.0);
	glVertex3f(0.12, 0.20, 0.0);
	glVertex3f(0.12, 1.30, 0.0);
	glVertex3f(0.10, 1.30, 0.0);
	glEnd();
	glPopMatrix();


    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-4.22,-0.80, 0.0);
    glColor3f(1.5,0.5,0.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.10, 0.20, 0.0);
	glVertex3f(0.12, 0.20, 0.0);
	glVertex3f(0.12, 1.30, 0.0);
	glVertex3f(0.10, 1.30, 0.0);
	glEnd();
	glPopMatrix();






///............####### Tree #####.............

    glPushMatrix();
    glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.25,-0.1,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.35,-0.3,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
     glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.20,-0.30,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.25,0.1,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.35,0.3,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
     glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.20,0.30,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
     glScalef(.5,.5,0.0);
	glTranslatef(1.05, -0.85, 0.0); //Move to the center of the trapezoid
     glRotatef(180,1.0,1.0,0.0);
    glColor3f(1.0,0.7,1.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	///............####### Tree2 #####.............

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.55,0.1,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.65,-0.1,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.5,-0.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(1.35, -0.65, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(1.0,0.7,1.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	///....... ### tree 4####........

    glPushMatrix();
    glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.85,0.15,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.20,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.95,-0.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(1.80,-0.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(1.65, -0.65, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(1.0,0.7,1.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();


	///...... ### tree 5 ###......

    glPushMatrix();
    glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(2.25,0.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.20,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
      glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(2.35,-0.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    //glColor3f(0.0,1.0,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(2.20,-0.05,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.15,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(2.0, -0.65, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(1.0,0.7,1.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	///..........###tree3###........

	 glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.05,0.80,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.20,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.17,0.85,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.20,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.20,1.0,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.20,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.45,0.82,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.20,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();


    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(-0.02, 0.35, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.0,1.7,0.5);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.30, 0.0);
	glVertex3f(0.15, 0.30, 0.0);

	glEnd();
	glPopMatrix();

	///......### Tree Left ###....

    glPushMatrix();
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.60,0.10,0.0);
    glRotatef(-90,1.5,0.5,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.60,-0.05,0.0);
    glRotatef(-90,1.5,0.5,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(-1.45, -0.8, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);

	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.70, 0.20, 0.0);
	glVertex3f(0.70, 0.25, 0.0);
	glVertex3f(0.15, 0.30, 0.0);

	glEnd();
	glPopMatrix();


	///.............### Cloiud ### ...........

    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(0.70,1.25,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(0.50,1.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(0.35,1.15,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(0.88,1.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    ///.
     glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(1.15,1.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(1.35,1.25,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(1.5,1.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(1.45,1.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    ///...
     glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-0.5,1.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

      glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-0.2,1.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

      glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-0.3,1.10,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

      glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-0.4,1.15,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

///....
    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-1.6,1.15,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-1.75,1.1,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9,1.7,0.8);
    glTranslatef(-1.55,1.0,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.10,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();








	///........ ####far Boat in river ###................

    if (go1>=-0.2){
        go1=go1+.002;
        }
     if(go1>1){
        go1=-0.1;
       }


    glPushMatrix(); //Save the transformations performed thus far
    glScalef(0.50,.5,0.0);
	glTranslatef(4.0, -0.5, 0.0); //Move to the center of the trapezoid
    glRotatef(180,-2.30,2.1,0.0);
    glColor3f(1.0,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.10-go1, 0.0);
	glVertex3f(0.30, 0.20-go1, 0.0);
	glVertex3f(0.30, 0.6-go1, 0.0);
	glVertex3f(0.15, 0.75-go1, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.5,0.5,0.5);
    glTranslatef(3.5+go1,-0.62,0.0);
    glRotatef(180,1.2,1.0,0.0);
    glutSolidSphere(.08,20,15);
    glPopMatrix();


    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.5,0.5,0.5);
    glTranslatef(3.7+go1,-0.62,0.0);
    glRotatef(180,1.2,1.0,0.0);
    glutSolidSphere(.08,20,15);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
	glTranslatef(3.35, -0.88, 0.0);
    glRotatef(340,2.30,1.0,0.0);
    glColor3f(0.50,1.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.10+go1, 0.20, 0.0);
	glVertex3f(0.35+go1, 0.20, 0.0);
	glVertex3f(0.35+go1, 0.35, 0.0);
	glVertex3f(0.10+go1, 0.35, 0.0);

	glEnd();
	glPopMatrix();

///................... ##### Boat-L1 #######.............

     if (go>=-0.2){
        go=go+.002;
        }
     if(go>1){
        go=-0.1;
       }

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(0.5,0.5,0.0);
	glTranslatef(3.25, -0.2, 0.0);
    glRotatef(180,2.50,2.50,0.0);
    glColor3f(0.50,0.50,0.50);

	glBegin(GL_POLYGON);
	glVertex3f(0.10, 0.20+go, 0.0);
	glVertex3f(0.35, 0.05+go, 0.0);
	glVertex3f(0.35, 0.90+go, 0.0);
	glVertex3f(0.10, 0.75+go, 0.0);

	glEnd();
	glPopMatrix();

//......
   glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(3.60, -0.10, 0.0); //Move to the center of the trapezoid
    //glRotatef(180,1.0,1.0,0.0);
     glRotatef(360,2.5,1.0,0.0);
    glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.10+go, 0.20, 0.0);
	glVertex3f(0.12+go, 0.20, 0.0);
	glVertex3f(0.12+go, 1.0, 0.0);
	glVertex3f(0.10+go, 1.0, 0.0);

	glEnd();
	glPopMatrix();

	//.....
    glPushMatrix(); //Save the transformations performed thus far
    glScalef(0.5,0.5,0.5);
	glTranslatef(3.50, 1.15, 0.0); //Move to the center of the trapezoid
   // glRotatef(180,-1.0,1.0,0.0);
     glRotatef(180,10.0,-.40,0.0);
     //glColor3f(0.0,1.0,0.50);
     glColor3f(1.0,1.0,1.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.10+go, 0.20, 0.0);
	glVertex3f(0.40+go, 0.20, 0.0);
	glVertex3f(0.25+go, 1.0, 0.0);
	glEnd();
	glPopMatrix();

    ///....again river....

   /* glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.0,1.0,1.5);
    glTranslatef(4.1,1.3,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidSphere(.45,20,15);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.0,1.0,1.5);
    glTranslatef(4.0,0.50,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.40,20,15);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.0,1.0,1.5);
    glTranslatef(4.1,-0.30,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.40,20,15);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.0,1.0,1.5);
    glTranslatef(4.1,-1.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.40,20,15);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.0,1.0,1.5);
    glTranslatef(4.1,-2.20,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.40,20,15);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.0);
    glColor3f(0.0,1.0,1.5);
    glTranslatef(4.1,2.1,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.40,20,15);
    glPopMatrix();*/

///blue
    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	//glTranslatef(2.22, -1.23, 0.0); //Move to the center of the trapezoid
	glTranslatef(3.40, -2.4, 0.0);
    glRotatef(360,2.90,1.0,0.0);
    glColor3f(0.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.20, 0.0);
	glVertex3f(1.10, 0.20, 0.0);
	glVertex3f(1.10, 3.50, 0.0);
	glVertex3f(0.1, 2.3, 0.0);

	glEnd();
	glPopMatrix();
///skyblue_riverSide
    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(3.0, -2.4, 0.0);
    glRotatef(360,2.90,1.0,0.0);
    glColor3f(0.8,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.20, 0.0);
	glVertex3f(1.50, 0.20, 0.0);
	glVertex3f(1.50, 3.7, 0.0);
	glVertex3f(0.0, 2.3, 0.0);

	glEnd();
	glPopMatrix();
///..............### River ###........

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	//glTranslatef(2.2, -1.0, 0.0); //Move to the center of the trapezoid
	glTranslatef(2.32, -2.40, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    //glColor3f(1.0,0.50,0.0);
    glColor3f(1.0,0.90,0.50);
	glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.20, 0.0);
	glVertex3f(2.2, 0.20, 0.0);
	glVertex3f(2.2, 3.7, 0.0);
	glVertex3f(0.19, 2.3, 0.0);

	glEnd();
	glPopMatrix();





///.........### Sun ###.........
    glPushMatrix();
    glColor3f(1.0,0.8,0.0);
    glTranslatef(-1.1,1.10,0.0);
    glRotatef(360,1.8,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);

    glutSolidSphere(.15,15,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();
       /*glPushMatrix();
      glTranslatef (-3.75, 3.0, 0.0);
      glRotatef(_angle,1.0,0.0,0.0);
      GLfloat light_position1[] = {1.0, -1.30, 1.0, 0.0 };
      glLightfv(GL_LIGHT0, GL_POSITION, light_position1);
      GLfloat white_light1[] = { 1.0, 0.60, 2.0, 0.0 };

      glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light1);
      glLightfv(GL_LIGHT0, GL_SPECULAR, white_light1);
      glutSolidSphere(1.0, 16, 16);
      glPopMatrix();*/
///....
    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.3, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.27, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.24, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.21, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.18, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.15, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();


    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.12, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.09, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.33, 0.50, 0.0); //Move to the center of the trapezoid
    glRotatef(180,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.55, 0.1, 0.0);
	glEnd();
	glPopMatrix();

///.......
    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.14, 1.11, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.13, 1.08, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();


    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.12, 1.05, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

   glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.10, 1.02, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.10, 0.99, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.10, 0.96, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.11, 0.93, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

///.....
    /*glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.20, 1.05, 0.0); //Move to the center of the trapezoid
    glRotatef(90,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.3, 1.05, 0.0); //Move to the center of the trapezoid
    glRotatef(90,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.45, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 0.90, 0.0); //Move to the center of the trapezoid
    glRotatef(90,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();


    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 0.95, 0.0); //Move to the center of the trapezoid
    glRotatef(90,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();*/

///...........

	glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 1.11, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 1.08, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 1.05, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 1.02, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 0.99, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 0.96, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(-1.7, 0.93, 0.0); //Move to the center of the trapezoid
    glRotatef(360,0.70,0.70,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
    //glLineWidth(.50);
	glVertex3f(0.15, 0.1, 0.0);
	glVertex3f(0.65, 0.1, 0.0);
	glEnd();
	glPopMatrix();

///.....### Road 1 ###......

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-0.15, -1.65, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-0.15, -1.45, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.50,1.50,1.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-0.15, -1.25, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();



    glPushMatrix(); //Save the transformations performed thus far
    //glScalef(.5,.5,0.0);
	glTranslatef(-0.30, -0.90, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    //glColor3f(0.5,1.0,0.0);
    //glColor3f(0.9,1.7,0.8);
    glColor3f(0.5,0.0,0.0);

	glBegin(GL_POLYGON);
	glVertex3f(0.10, 0.30, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.45, 0.55, 0.0);
	glVertex3f(0.10, 0.55, 0.0);

	glEnd();
	glPopMatrix();

///........@@@@@ road's tree ####..........................
   glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(1.7,-1.25,0.0);
    glRotatef(180,0.10,1.30,0.7);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(1.48, -1.7, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    //glColor3f(0.5,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();
///..
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(1.0,-1.28,0.0);
    glRotatef(180,0.10,1.30,0.7);
    glutSolidCone(.15,.35,25,25);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
	glTranslatef(0.77, -1.72, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();
	///..
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.30,-1.28,0.0);
    glRotatef(180,0.09,1.30,0.7);
    glutSolidCone(.15,.35,25,25);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
	glTranslatef(-0.53, -1.72, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

    ///..
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-1.20,-1.28,0.0);
    glRotatef(180,0.09,1.30,0.7);
    glutSolidCone(.15,.35,25,25);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
	glTranslatef(-1.45, -1.72, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

    ///..
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-1.95,-1.25,0.0);
    glRotatef(180,0.09,1.30,0.7);
    glutSolidCone(.15,.35,25,25);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
	glTranslatef(-2.2, -1.72, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

    ///..
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-3.35,-1.25,0.0);
    glRotatef(180,0.09,1.30,0.7);
    glutSolidCone(.15,.35,25,25);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
	glTranslatef(-3.6, -1.72, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

    ///..
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-4.1,-1.25,0.0);
    glRotatef(180,0.09,1.30,0.7);
    glutSolidCone(.15,.35,25,25);
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
	glTranslatef(-4.35, -1.72, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();




	/*glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.70,-1.45,0.0);
    glRotatef(-90,0.60,-1.5,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(0.25, -1.7, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.65,-1.65,0.0);
    glRotatef(-90,0.60,-1.5,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(0.20, -1.9, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.60,-1.85,0.0);
    glRotatef(-90,0.60,-1.5,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(0.15, -2.1, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.30, 0.0);
	glVertex3f(0.15, 0.20, 0.0);

	glEnd();
	glPopMatrix();

	///......
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.55,0.0);
    glTranslatef(-0.50,-1.25,0.0);
    glRotatef(90,-0.20,-1.2,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(-0.65, -1.5, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.55, 0.20, 0.0);
	glVertex3f(0.55, 0.20, 0.0);
	glVertex3f(0.15, 0.30, 0.0);

	glEnd();
	glPopMatrix();


    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.45,-1.45,0.0);
    glRotatef(90,-0.20,-1.2,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(-0.60, -1.7, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.15, 0.30, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.40,-1.65,0.0);
    glRotatef(90,-0.20,-1.2,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(-0.55, -1.9, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.15, 0.30, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,0.0);
    glColor3f(0.0,0.50,0.0);
    glTranslatef(-0.35,-1.85,0.0);
    glRotatef(90,-0.20,-1.2,0.5);
    glutSolidCone(.15,.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix(); //Save the transformations performed thus far
    glScalef(.5,.5,0.0);
	glTranslatef(-0.50, -2.1, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.45, 0.20, 0.0);
	glVertex3f(0.15, 0.30, 0.0);

	glEnd();
	glPopMatrix();*/









///......... #### House 2 #### ..........

    glPushMatrix();
    glTranslatef(-2.30, 0.05, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(1.10, 0.20, 0.0);
	glVertex3f(0.60, 0.35, 0.0);

	glEnd();
	glPopMatrix();


//....
    glPushMatrix();
    glTranslatef(-2.25, -0.45, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.45, 0.0);
	glVertex3f(0.15, 0.45, 0.0);

	glEnd();
	glPopMatrix();



    glPushMatrix();
    glTranslatef(-1.8, -0.45, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.45, 0.0);
	glVertex3f(0.15, 0.45, 0.0);

	glEnd();
	glPopMatrix();

	///.....
    glPushMatrix();
    glTranslatef(-2.0, -0.45, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.0,1.50,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.50, 0.20, 0.0);
	glVertex3f(0.50, 0.40, 0.0);
	glVertex3f(0.15, 0.40, 0.0);

	glEnd();
	glPopMatrix();

///.....foundation....
    glPushMatrix();
    glScalef(.5,.5,0.0);
    glTranslatef(-4.3, -0.7, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.65, 0.05, 0.0);
	glVertex3f(1.65, 0.10, 0.0);
	glVertex3f(0.15, 0.10, 0.0);

	glEnd();
	glPopMatrix();
//...
    glPushMatrix();
    glTranslatef(-2.10, -0.1, 0.0); //Move to the center of the trapezoid
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.35, 0.05, 0.0);
	glVertex3f(0.35, 0.75, 0.0);
	glVertex3f(0.15, 0.75, 0.0);

	glEnd();
	glPopMatrix();

///....Windows...
    glPushMatrix();
    glColor3f(0.50,0.0,1.5);
    glTranslatef(-1.45,0.05,0.0);
    glRotatef(360,1.0,1.80,0.0);
    glutSolidCube(.12);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.50,0.0,1.5);
    glTranslatef(-1.90,0.05,0.0);
    glRotatef(360,1.0,1.80,0.0);
    glutSolidCube(.12);
    glPopMatrix();


///........ @@@@@@@ More Design for this House Plz go to up, in the House 1 code...... plz don't mistake @@@@@@@......


///......... ###### House 3 ####.......

    /*glPushMatrix();
    glTranslatef(-1.70, 0.10, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.0,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.90, 0.20, 0.0);
	glVertex3f(0.50, 0.35, 0.0);

	glEnd();
	glPopMatrix();*/

    glPushMatrix();
    glTranslatef(-1.60, -0.05, 0.0); //Move to the center of the trapezoid
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.0,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.80, 0.20, 0.0);
	glVertex3f(0.70, 0.45, 0.0);
	glVertex3f(0.05, 0.45, 0.0);

	glEnd();
	glPopMatrix();

///....
    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-2.70, -0.65, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.50, 0.05, 0.0);
	glVertex3f(0.50, 0.62, 0.0);
	glVertex3f(0.15, 0.62, 0.0);

	glEnd();
	glPopMatrix();

///....
    glPushMatrix();
    glTranslatef(-1.49, -0.50, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,0.0,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.62, 0.20, 0.0);
	glVertex3f(0.62, 0.65, 0.0);
	glVertex3f(0.15, 0.65, 0.0);

	glEnd();
	glPopMatrix();

	///....Foundation
    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.3, -0.7, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.65, 0.05, 0.0);
	glVertex3f(1.65, 0.10, 0.0);
	glVertex3f(0.15, 0.10, 0.0);

	glEnd();
	glPopMatrix();

	///....window
    glPushMatrix();
    glColor3f(1.50,0.0,1.5);
    glTranslatef(-0.95,0.05,0.0);
    glRotatef(360,1.0,1.80,0.0);
    glutSolidCube(.12);
    glPopMatrix();


///........... #### tree for house 2 & 3 ####.........


    glPushMatrix();
     glScalef(.5,.5,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(-3.5,0.90,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.35,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
     glScalef(.5,.5,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(-3.0,0.80,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.35,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();

    glPushMatrix();
     glScalef(.5,.5,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(-4.0,0.70,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.35,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();


     glPushMatrix();
     glScalef(.5,.5,0.0);
    glColor3f(0.50,1.0,0.0);
    glTranslatef(-3.80,0.95,0.0);
    glRotatef(360,1.2,1.0,0.0);
    glutSolidSphere(.35,20,15); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();



///........ #### Road 2 ####......

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.05, -1.65, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.05, -1.45, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.05, -1.25, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.05, -1.05, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.05, -0.85, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(0.65, 0.05, 0.0);
	glVertex3f(0.65, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

///...
    glPushMatrix();
    glTranslatef(-1.60, -1.0, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.40, 0.20, 0.0);
	glVertex3f(0.40, 0.60, 0.0);
	glVertex3f(0.15, 0.60, 0.0);

	glEnd();
	glPopMatrix();

///..... ### Main Road ###  ......

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-4.45, -1.75, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(6.5, 0.05, 0.0);
	glVertex3f(6.5, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-4.45, -2.10, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(6.5, 0.05, 0.0);
	glVertex3f(6.5, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-4.45, -1.94, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.25, 0.05, 0.0);
	glVertex3f(1.25, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-3.25, -1.94, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.25, 0.05, 0.0);
	glVertex3f(1.25, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-2.0, -1.94, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.25, 0.05, 0.0);
	glVertex3f(1.25, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(-0.75, -1.94, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.25, 0.05, 0.0);
	glVertex3f(1.25, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glTranslatef(0.50, -1.94, 0.0);
    glRotatef(360,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.05, 0.0);
	glVertex3f(1.25, 0.05, 0.0);
	glVertex3f(1.25, 0.07, 0.0);
	glVertex3f(0.15, 0.07, 0.0);

	glEnd();
	glPopMatrix();




    glPushMatrix();
    glTranslatef(-2.40, -1.20, 0.0);
    glRotatef(180,1.0,1.0,0.0);
   // glColor3f(0.50,0.50,0.50);
     glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.40, 0.20, 0.0);
	glVertex3f(0.40, 4.0, 0.0);
	glVertex3f(0.15, 4.0, 0.0);

	glEnd();
	glPopMatrix();

///...........#### Land and grass ####

    glPushMatrix();
    glTranslatef(-2.40, -1.0, 0.0);
    glRotatef(180,1.0,1.0,0.0);
     // glColor3f(0.50,0.50,0.50);
     //glColor3f(0.50,0.50,0.0);................its for tree color
     //glColor3f(0.0,0.50,0.50);................. good color for river may be
   // glColor3f(0.0,1.0,0.50);  //................... another tree color
    glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.95, 0.20, 0.0);
	glVertex3f(0.95, 0.95, 0.0);
	glVertex3f(0.15, 0.95, 0.0);

	glEnd();
	glPopMatrix();
///..
    glPushMatrix();
    glTranslatef(-1.40, -1.0, 0.0);
    glRotatef(180,1.0,1.0,0.0);
    glColor3f(0.0,1.90,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.95, 0.20, 0.0);
	glVertex3f(0.95, 2.65, 0.0);
	glVertex3f(0.15, 2.65, 0.0);

	glEnd();
	glPopMatrix();
///...




///........... #### Birds #####...........

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.25, 1.5, 0.0);
	glRotatef(270,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.2, 1.5, 0.0);
	glRotatef(-270,1.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.0, 1.5, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.10, 1.4, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();


	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.0, 1.65, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.10, 1.55, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();


	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.0, 1.80, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-1.10, 1.70, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.70, 1.65, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.80, 1.55, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.70, 1.5, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.80, 1.4, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.40, 1.5, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.50, 1.4, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.20, 1.5, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.25, 1.4, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(1.0,1.0,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.40, 1.2, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.50, 1.1, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.10, 1.2, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(-0.10, 1.1, 0.0);
	glRotatef(270,2.0,1.0,0.0);
    glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(2.00, 1.2, 0.0);
	glRotatef(270,-2.50,1.0,0.0);
    glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.5,0.5,0.5);
	glTranslatef(2.13, 1.05, 0.0);
	glRotatef(285,2.0,1.0,0.0);
    glColor3f(0.0,0.0,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(0.15, 0.20, 0.0);
	glVertex3f(0.35, 0.20, 0.0);
	glVertex3f(0.35, 0.25, 0.0);
	glVertex3f(0.15, 0.25, 0.0);

	glEnd();
	glPopMatrix();









 /*glPushMatrix();
    glColor3f(0.0,0.0,1.9);
    glTranslatef(0.60,0.15,0.0);
    glRotatef(360,0.0,1.0,0.0);
    glutSolidSphere(.35,25,25); //(GLdouble radius,GLint slices, GLint stacks);
    glPopMatrix();


     glPushMatrix();
    glColor3f(0.8,1.0,0.5);
    glTranslatef(.62,0.75,0.0);
    glRotatef(360,1.10,1.0,0.0);
    glutSolidCube(.45); //(GLdouble size)
    glPopMatrix();*/






//	glPopMatrix();
	glutSwapBuffers();

}
void update(int value){
_angle += 2.0f;
if(_angle > 360){
    _angle -= 360;
}
_angle_tri += 2.0f;
if(_angle_tri > 360){
        _angle_tri -= 360;

}
glutPostRedisplay();
glutTimerFunc(25, update ,0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1300, 750);

	//Create the window
	glutCreateWindow("Natural Beauty of Bangladesh");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	//glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClearColor(0.70f, 1.70f, 0.80f, 0.0f);

	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;


}

