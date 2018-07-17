#ifndef grid_h
#define grid_h
void squre()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //glColor4f(0.1,0.1,0.0,1.0);
    glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 895.0f, 0.0f);
    glVertex2f( 895.0f,  895.0f);
    glVertex2f(0.0f, 895.0f);
    //grid1();
    glEnd();
    //glFlush();
}

void grid1()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  200.0f);
      glVertex2f(250.0f, 150.0f);
    glColor4f(1.0,0.5,0.5,0.0);
      glVertex2f(200.0f, 100.0f);
      glVertex2f(50.0f, 50.0f);
      glVertex2f(0.0f, 0.0f);
     glVertex2f(0.0f, 295.0f);
     glVertex2f(295.0f, 295.0f);
     glVertex2f(295.0f, 45.0f);
    glEnd();
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 0.0f);
    glVertex2f( 595.0f, 0.0f);
    glVertex2f(595.0f, 295.0f);
    glVertex2f( 300.0f,  295.0f);
    glEnd();
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 300.0f);
    glVertex2f( 295.0f, 300.0f);
    glVertex2f(295.0f, 595.0f);
    glVertex2f( 0.0f,  595.0f);
    glEnd();
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 300.0f);
    glVertex2f( 595.0f, 300.0f);
    glVertex2f(595.0f, 595.0f);
    glVertex2f( 300.0f,  595.0f);
    glEnd();
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f, 300.0f);
    glVertex2f( 895.0f, 300.0f);
    glVertex2f(895.0f, 595.0f);
    glVertex2f( 600.0f,  595.0f);
    glEnd();
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 600.0f);
    glVertex2f( 295.0f, 600.0f);
    glVertex2f(295.0f, 895.0f);
    glVertex2f( 0.0f,  895.0f);
    glEnd();
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 600.0f);
    glVertex2f( 595.0f, 600.0f);
    glVertex2f(595.0f, 895.0f);
    glVertex2f( 300.0f,  895.0f);
    glEnd();
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f, 600.0f);
    glVertex2f( 895.0f, 600.0f);
    glVertex2f(895.0f, 895.0f);
    glVertex2f( 600.0f,  895.0f);
    glEnd();



    glFlush();
    
    
}

/*void grid2()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 0.0f);
    glVertex2f( 595.0f, 0.0f);
    glVertex2f(595.0f, 295.0f);
    glVertex2f( 300.0f,  295.0f);
    glEnd();
    glFlush();
    
    
}*/

/*void grid3()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 300.0f);
    glVertex2f( 295.0f, 300.0f);
    glVertex2f(295.0f, 595.0f);
    glVertex2f( 0.0f,  595.0f);
    glEnd();
    glFlush();
    
    
}

void grid4()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 300.0f);
    glVertex2f( 595.0f, 300.0f);
    glVertex2f(595.0f, 595.0f);
    glVertex2f( 300.0f,  595.0f);
    glEnd();
    glFlush();
    
    
}

void grid5()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f, 300.0f);
    glVertex2f( 895.0f, 300.0f);
    glVertex2f(895.0f, 595.0f);
    glVertex2f( 600.0f,  595.0f);
    glEnd();
    glFlush();
    
    
}

void grid6()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 600.0f);
    glVertex2f( 295.0f, 600.0f);
    glVertex2f(295.0f, 895.0f);
    glVertex2f( 0.0f,  895.0f);
    glEnd();
    glFlush();
    
    
}

void grid7()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 600.0f);
    glVertex2f( 595.0f, 600.0f);
    glVertex2f(595.0f, 895.0f);
    glVertex2f( 300.0f,  895.0f);
    glEnd();
    glFlush();
    
    
}
void grid8()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,1.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f, 600.0f);
    glVertex2f( 895.0f, 600.0f);
    glVertex2f(895.0f, 895.0f);
    glVertex2f( 600.0f,  895.0f);
    glEnd();
    glFlush();
    

}*/

#endif
