
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
void circle1(GLfloat x, GLfloat y, GLfloat r)
{
    float angle;
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        angle=i*50*(1.4);
        glVertex2f(x+(cos(angle)*r),y+(sin(angle)*r));
    }
    glEnd();
}


void grid7()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,1.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    
    //glColor3f(0.36,0.25,0.20);
    glColor3f(0.32,0.49,0.46);
   glBegin(GL_POLYGON);
  glVertex2f( 140.0f, 70.0f);
    glVertex2f( 140.0f,  250.0f);
      glVertex2f( 170.0f,  250.0f);
     glVertex2f(170.0f, 70.0f);
    glEnd();
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 60.0f, 180.0f);
    glVertex2f( 250.0f,  180.0f);
    glVertex2f( 220.0f,  220.0f);
    glVertex2f(90.0f, 220.0f);
    glEnd();

    
   glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 70.0f, 200.0f);
    glVertex2f( 240.0f,  200.0f);
    glVertex2f( 220.0f,  220.0f);
    glVertex2f(90.0f, 220.0f);
    glEnd();

    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 80.0f, 220.0f);
    glVertex2f( 230.0f,  220.0f);
    glVertex2f( 210.0f,  240.0f);
    glVertex2f(100.0f, 240.0f);
    glEnd();
    
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 90.0f, 240.0f);
    glVertex2f( 220.0f,  240.0f);
    glVertex2f( 200.0f,  260.0f);
    glVertex2f(110.0f, 260.0f);
    glEnd();
    
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 100.0f, 260.0f);
    glVertex2f( 210.0f,  260.0f);
    glVertex2f( 190.0f,  280.0f);
    glVertex2f(120.0f, 280.0f);
    glEnd();
    
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 110.0f, 280.0f);
    glVertex2f( 200.0f,  280.0f);
    glVertex2f( 180.0f,  295.0f);
    glVertex2f(130.0f, 295.0f);
    glEnd();



    
    /*circle1(110,260,70);
    circle1(180,260,70);*/
    //base
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f( 295.0f,  25.0f);
    glVertex2f( 295.0f,  50.0f);
    glVertex2f( 230.0f,  50.0f);
    glVertex2f( 230.0f,  25.0f);
    //glVertex2f( 140.0f,  230.0f);
      glEnd();
    
    //body
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 250.0f,  50.0f);
    glVertex2f( 295.0f,  50.0f);
    glVertex2f( 295.0f,  250.0f);
    glVertex2f( 250.0f,  250.0f);
    //glVertex2f( 140.0f,  230.0f);
    glEnd();
    
    //roof
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f( 295.0f,  250.0f);
    glVertex2f( 230.0f,  250.0f);
    glVertex2f( 295.0f,  295.0f);
    //glVertex2f( 250.0f,  230.0f);
    //glVertex2f( 140.0f,  230.0f);
    glEnd();
    
   
    
}

void grid8()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,1.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    
    //base
     glColor3f(0.0,0.0,1.0);
     glBegin(GL_POLYGON);
     glVertex2f( 0.0f,  25.0f);
     glVertex2f( 270.0f,  25.0f);
     glVertex2f( 270.0f,  50.0f);
     glVertex2f(0.0f,  50.0f);
     //glVertex2f( 140.0f,  230.0f);
     glEnd();
     
     //body
    glColor3f(1.0,1.0,0.0);
     glBegin(GL_POLYGON);
     glVertex2f( 0.0f,  50.0f);
     glVertex2f( 250.0f,  50.0f);
     glVertex2f( 250.0f,  250.0f);
     glVertex2f( 0.0f,  250.0f);
     //glVertex2f( 140.0f,  230.0f);
     glEnd();
     
     //roof
     glColor3f(1.0,0.0,1.0);
     glBegin(GL_POLYGON);
     glVertex2f( 0.0f,  250.0f);
     glVertex2f( 270.0f,  250.0f);
     glVertex2f( 220.0f,  295.0f);
     glVertex2f( 0.0f,  295.0f);
     //glVertex2f( 140.0f,  230.0f);
     glEnd();
    
    //door
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 60.0f,  50.0f);
    glVertex2f( 150.0f,  50.0f);
    glVertex2f( 150.0f,  180.0f);
    glVertex2f( 60.0f,  180.0f);
    //glVertex2f( 140.0f,  230.0f);
    glEnd();
    
    //door in
    glColor3f(0.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f( 60.0f,  50.0f);
    glVertex2f( 110.0f,  60.0f);
    glVertex2f( 110.0f,  170.0f);
    glVertex2f( 60.0f,  180.0f);
    //glVertex2f( 140.0f,  230.0f);
    glEnd();


    

}
void grid4()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.9,1.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    
    glColor3f(0.0,1.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  200.0f);
    glVertex2f(0.0f, 200.0f);
    glEnd();
    
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 120.0f, 0.0f);
    glVertex2f( 190.0f,  0.0f);
    glVertex2f( 170.0f,  15.0f);
    glVertex2f(140.0f, 15.0f);
    glEnd();
    
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 130.0f, 15.0f);
    glVertex2f( 180.0f,  15.0f);
    glVertex2f( 155.0f,  30.0f);
    //glVertex2f(130.0f, 295.0f);
    glEnd();
    

    
    
    
   /* glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f( 110.0f, 280.0f);
    glVertex2f( 200.0f,  280.0f);
    glVertex2f( 180.0f,  295.0f);
    glVertex2f(130.0f, 295.0f);
    glEnd();*/
    


    /*glColor3f(0.0,0.5,0.0);
    circle1(110,10,50);
    circle1(190,10,50);
    circle1(150,80,50);
    glEnd();*/
    
    
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 200.0f);
    glVertex2f( 70.0f, 295.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(295.0f, 200.0f);
    glEnd();
    //glColor3f(0.5,0.5,0.5);
    //circle1(190,90,20);
    //circle1(180,260,70);
    //glEnd();


    
    
}
void grid5()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.9,1.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    glColor3f(0.0,1.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  200.0f);
    glVertex2f(0.0f, 200.0f);
    glEnd();

    
    //roof
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f( 0.0f,  0.0f);
    glVertex2f( 110.0f,  90.0f);
    glVertex2f( 215.0f,  0.0f);
    glVertex2f( 0.0f,  0.0f);
    //glVertex2f( 140.0f,  230.0f);
    glEnd();
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 295.0f);
    glVertex2f( 70.0f, 200.0f);
    glVertex2f( 0.0f,  200.0f);
    //glVertex2f(295.0f, 200.0f);
    glEnd();
    
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(40.0f, 200.0f);
    glVertex2f( 100.0f, 295.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(295.0f, 200.0f);
    glEnd();


    
}
void grid6()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.9,1.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    
    glColor3f(0.0,1.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  200.0f);
    glVertex2f(0.0f, 200.0f);
    glEnd();
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 295.0f);
    glVertex2f( 70.0f, 200.0f);
    glVertex2f( 0.0f,  200.0f);
    //glVertex2f(295.0f, 0.0f);
    glEnd();
    
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(40.0f, 200.0f);
    glVertex2f( 100.0f, 295.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(295.0f, 200.0f);
    glEnd();
    
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(60,50);
    glVertex2f(100,70);
    glVertex2f(82,60);
    glVertex2f(90,80);
    glVertex2f(77,60);
    glVertex2f(80,90);
    glVertex2f(70,60);
    glVertex2f(60,80);
    glVertex2f(65,56);
    glVertex2f(50,70);
    glEnd();
    //grass2
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(60,60);
    glVertex2f(77,60);
    glVertex2f(90,80);
    glVertex2f(80,70);
    glVertex2f(80,110);
    glVertex2f(70,70);
    glVertex2f(60,100);
    glVertex2f(60,70);
    glVertex2f(50,80);
    glEnd();
    
}
void grid1()//6
{
    int l;
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.9,1.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(75.0f, 0.0f);
    glVertex2f( 170.0f, 100.0f);
    glVertex2f( 210.0f,  100.0f);
    glVertex2f(295.0f, 0.0f);
    glEnd();
    glColor3f(0.5,0.5,0.5);
    circle1(190,90,20);
    //circle1(180,260,70);
    glEnd();
    
    glColor3f(1.0,1.0,1.0);
    circle1(150,220,50);
    circle1(150,190,50);
    circle1(90,210,50);
    circle1(220,210,50);
    glEnd();

    
    
    
}


void grid2()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.9,1.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    glColor3f(1.0,0.0,0.0);
    //glBegin(GL_POLYGON);
    circle1(140.0,110.0,70.0);
    glEnd();
    
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(100.0f, 0.0f);
    glVertex2f( 170.0f, 100.0f);
    glVertex2f( 210.0f,  100.0f);
    glVertex2f(295.0f, 0.0f);
    glEnd();
    
    glColor3f(0.5,0.5,0.5);
    circle1(190,90,20);
    //circle1(180,260,70);
    glEnd();
    
    glColor3f(1.0,1.0,1.0);
    circle1(150,220,50);
    circle1(200,220,50);
    circle1(100,220,50);
    circle1(50,220,30);
    glEnd();
    


    
}


void grid3()//6
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.9,1.5);
    //glColor3f(0.96,0.80,0.69);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 295.0f, 0.0f);
    glVertex2f( 295.0f,  295.0f);
    glVertex2f(0.0f, 295.0f);
    glEnd();
    
    
    
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(100.0f, 0.0f);
    glVertex2f( 170.0f, 100.0f);
    glVertex2f( 210.0f,  100.0f);
    glVertex2f(295.0f, 0.0f);
    glEnd();
    
    glColor3f(0.5,0.5,0.5);
    circle1(190,90,20);
    //circle1(180,260,70);
    glEnd();

    
   glColor3f(1.0,1.0,1.0);
    circle1(150,220,50);
    circle1(150,190,50);
    circle1(90,210,50);
    circle1(220,210,50);
    glEnd();
}
































/*void grid()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.0,0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.0f);
    glVertex2f(135.0f,0.0f);
    glVertex2f(135.0f,135.0f);
    glEnd();
    glFlush();
    
    
}



void grid2()//7
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,0.0,0.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 0.0f);
    glVertex2f( 595.0f, 0.0f);
    glVertex2f(595.0f, 295.0f);
    glVertex2f( 300.0f,  295.0f);
    glEnd();
    glFlush();
    
    
}
void grid3(void)//8
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.0,0.0,0.0,0.0);
    //GLt
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f, 0.0f);
    glVertex2f( 895.0f, 0.0f);
    glVertex2f(895.0f, 295.0f);
    glVertex2f( 600.0f,  295.0f);
    glEnd();
    
    glFlush();
    
    
}

void grid4()//3
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0,0.0,1.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 300.0f);
    glVertex2f( 295.0f, 300.0f);
    glVertex2f(295.0f, 595.0f);
    glVertex2f( 0.0f,  595.0f);
    glEnd();
    glFlush();
    
    
}

void grid5()//4
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.0,1.0,0.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 300.0f);
    glVertex2f( 595.0f, 300.0f);
    glVertex2f(595.0f, 595.0f);
    glVertex2f( 300.0f,  595.0f);
    glEnd();
    glFlush();
    
    
}

void grid6()//5
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.9,0.9,0.0,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0f, 300.0f);
    glVertex2f( 895.0f, 300.0f);
    glVertex2f(895.0f, 595.0f);
    glVertex2f( 600.0f,  595.0f);
    glEnd();
    glFlush();
    
    
}

void grid7()//0
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.5,0.5,0.5,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 600.0f);
    glVertex2f( 295.0f, 600.0f);
    glVertex2f(295.0f, 895.0f);
    glVertex2f( 0.0f,  895.0f);
    glEnd();
    glFlush();
    
    
}

void grid8()//1
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.4,0.0,0.2,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0f, 600.0f);
    glVertex2f( 595.0f, 600.0f);
    glVertex2f(595.0f, 895.0f);
    glVertex2f( 300.0f,  895.0f);
    glEnd();
    glFlush();
    
    
}
void grid9()//2
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.1,0.6,0.1,1.0);
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
