//
// copyright 2018 Palestine Polytechnic Univeristy
//
// This software can be used and/or modified for academich use as long as 
// this commented part is listed
//
// Last modified by: Zein Salah, on 26.03.2021
//


#include "RenderWidget.h"
#include <glut.h>
#include <QPainter>

RenderWidget::RenderWidget(QWidget *parent) : QGLWidget(parent)
{

}


RenderWidget::~RenderWidget()
{

}


QSize RenderWidget::minimumSizeHint() const
{
    return QSize(100, 100);
}


QSize RenderWidget::sizeHint() const
{
    return QSize(600, 600);
}


void RenderWidget::initializeGL()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}


void RenderWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

//    glLineWidth(3);
//    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//   glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    //glBegin(GL_TRIANGLES);
    //  glColor3f(1.0, 0.0, 0.0);   // red
    //  glVertex2f(100, 100);
    //  glVertex2f(400, 100);
    //  glVertex2f(250, 400);
    //glEnd();
    
    //glBegin(GL_TRIANGLES);
    //  glColor3f(1.0, 0.0, 0.0);   // red
    //  glVertex2f(100, 100);
    //  glColor3f(0.0, 1.0, 0.0);   // green
    //  glVertex2f(400, 100);
	   // glColor3f(0.0, 0.0, 1.0);   // blue
    //  glVertex2f(250, 400);
    //glEnd();
    





    //*********************************************************Create the box ********************************
    //glBegin(GL_TRIANGLES);
    //glColor3f(1.0, 1.0, 1.0);   // white
    //glVertex2f(100, 100);
    //glColor3f(0.3, 0.3, 0.3);   // gray 

    //glVertex2f(400, 100);
    //glColor3f(0.3, 0.3, 0.3);   // gray 
    //glVertex2f(100, 400);
    //glEnd();

 


 
    //glBegin(GL_TRIANGLES);
    //glColor3f(1.0, 1.0, 1.0);   // white
    //glVertex2f(400, 400);
    //glColor3f(0.3, 0.3, 0.3);   // gray 
    //glVertex2f(400, 100);
    //glColor3f(0.3, 0.3, 0.3);   // gray 
    //glVertex2f(100, 400);
    //glEnd();
   




    //  *******************************************************   Make a corner-based triangle*************************************
    //glBegin(GL_TRIANGLES);
    //glColor3f(1.0, 1.0, 0.0);   // yellow
    //glVertex2f(180,40);
    //
    //glVertex2f(400, 40);
    //
    //glVertex2f(180,180);
    //glEnd();






    //********************************************   Creating a quintet ******************************************

    glBegin(GL_TRIANGLES);

    glColor3f(0.0, 0.0, 1.0);   // blue
    glVertex2f(80, 40);
    glVertex2f(360, 40);
    glVertex2f(480, 200);
    
    
    glEnd();
    glBegin(GL_TRIANGLES);

    glColor3f(0.0, 0.0, 1.0);   // blue
    glVertex2f(80, 40);
    glVertex2f(480, 200);
    glVertex2f(230, 330);



    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.0, 0.0, 1.0);   // blue
   
    glVertex2f(230, 330);
    glVertex2f(0, 200);
    glVertex2f(80, 40);


    glEnd();



    //glBegin(GL_TRIANGLES);
    //  glColor3f(1.0, 0.0, 0.0);   // red
    //  glVertex2f(80, 80);
    //  glVertex2f(360, 80);
    //  glVertex2f(230, 300);

    //glEnd();

    //*******************************************Creating triangles*******************************************
    glBegin(GL_TRIANGLES);
      glColor3f(0.0, 1.0, 0.0);   // green
      glVertex2f(80, 80);
      glVertex2f(360, 80);
      glColor3f(1.0, 0.0, 0.0);   // red
     glVertex2f(230,150);
    glEnd();




    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0);   // green
        glVertex2f(360, 80);
        glColor3f(1.0, 0.0, 0.0);   // red
        glVertex2f(230, 150);
        glColor3f(0.0, 1.0, 0.0);   // green
        glVertex2f(230, 300);
    glEnd();


    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0);   // green
        glVertex2f(80, 80);
        glVertex2f(230, 300);
        glColor3f(1.0, 0.0, 0.0);   // red
        glVertex2f(230, 150);
    glEnd();





    glFlush();
}


void RenderWidget::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

//    glViewport(0, 0, width, height);
}


