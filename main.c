#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"grid.h"
GLfloat Color[][3]={{0,0,1},{0,1,0},{1,0,1},{0,1,1}};
int value=0,movement=0,movcomp=1,movedir,freerow,freecol ,movcord=1,movcol,movrow;
int mov[10]={0,0,0,0,0,0,0,0,0,0};
int a[5][5],movcount,b[5][5],top2=1;
int st[20][2],st1[20][2],solved=0,solving=0;
int top=-1,top3=-1;
char *currentfont;
/*GLfloat h=100.0;
GLfloat k=100.0;
GLfloat H[2][9]={{0,0,1100,1100,1100,1100,0,0},{0,300,300,0,300,1100,1100,300}};
GLfloat V[2][9]={{750,750,875,1000,1000,850,850,900,900},{300,420,480,420,300,300,370,370,300}};
//int l;
float m=0.0;*/



GLfloat abc[10][4][2]=
{{{0.0f,895.0f},{295.0f,895.0f},{295.0f,600.0f},{0.0f,600.0f}},
{{300.0f,895.0f},{595.0f,895.0f},{595.0f,600.0f},{300.0f,600.0f}},
{{600.0f,895.0f},{895.0f,895.0f},{895.0f,600.0f},{600.0f,600.0f}},
{{0.0f,595.0f},{295.0f,595.0f},{295.0f,300.0f},{0.0f,300.0f}},
{{300.0f,595.0f},{595.0f,595.0f},{595.0f,300.0f},{300.0f,300.0f}},
{{600.0f,595.0f},{895.0f,595.0f},{895.0f,300.0f},{600.0f,300.0f}},
{{0.0f,295.0f},{295.0f,295.0f},{295.0f,0.0f},{0.0f,0.0f}},
{{300.0f,295.0f},{595.0f,295.0f},{595.0f,0.0f},{300.0f,0.0f}},
{{600.0f,295.0f},{895.0f,295.0f},{895.0f,0.0f},{600.0f,0.0f}}};
void grid(float x1, float y1,float x2, float y2)//0
{
    //glClear(GL_COLOR_BUFFER_BIT);
   // glColor4f(0.5,0.5,0.5,1.0);
    //glColor3f(0.1,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f( x1,y2);
    glVertex2f(x2,y2);
    glVertex2f( x2,y1);
    glEnd();
    glFlush();
    
    
}






/*GLfloat abc[0]={{0.0f,895.0f},{295.0f,895.0f},{295.0f,600.0f},{0.0f,600.0f}};
GLfloat abc[1]={{300.0f,895.0f},{595.0f,895.0f},{595.0f,600.0f},{300.0f,600.0f}};
GLfloat abc[2]={{600.0f,895.0f},{895.0f,895.0f},{895.0f,600.0f},{600.0f,600.0f}};
GLfloat abc[3]={{0.0f,595.0f},{295.0f,595.0f},{295.0f,300.0f},{0.0f,300.0f}};
GLfloat abc[4]={{300.0f,595.0f},{595.0f,595.0f},{595.0f,300.0f},{300.0f,300.0f}};
GLfloat abc[5]={{600.0f,595.0f},{895.0f,595.0f},{895.0f,300.0f},{600.0f,300.0f}};
GLfloat abc[6]={{0.0f,295.0f},{295.0f,295.0f},{295.0f,0.0f},{0.0f,0.0f}};
GLfloat abc[7]={{300.0f,295.0f},{595.0f,295.0f},{595.0f,0.0f},{300.0f,0.0f}};
GLfloat abc[8]={{600.0f,295.0f},{895.0f,295.0f},{895.0f,0.0f},{600.0f,0.0f}};*/





/*void special_keys_handler(int key, int x, int y)
{
    if (is_game_solved()) return;
    switch (key) {
        case GLUT_KEY_UP:
 
                           glutPostRedisplay();
            }
            break;
            
        case GLUT_KEY_DOWN:
 
                            glutPostRedisplay();
            }
            break;
            
        case GLUT_KEY_LEFT:
 
                            glutPostRedisplay();
            }
            break;
            
        case GLUT_KEY_RIGHT:
 
                           glutPostRedisplay();
            }
            break;
    };
}*/


/*void draw_pixel(GLint cx, GLint cy)
{
    
    glBegin(GL_POINTS);
    glVertex2i(cx,cy);
    glEnd();
}

void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
    draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
    draw_pixel(x+h,-y+k);
    draw_pixel(-x+h,-y+k);
    draw_pixel(y+h,x+k);
    draw_pixel(-y+h,x+k);
    draw_pixel(y+h,-x+k);
    draw_pixel(-y+h,-x+k);
}*/






/*int circle1(GLfloat x, GLfloat y, GLfloat r)
{
    float angle;
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
        angle=i*2*(1.42/100);
        glvertex2f(x+(cos(angle)*r),y+(sin(angle)*r));
    }
    glEnd();
}*/



void setfont(void *font)
{
    currentfont=font;
}

void drawstring(float x,float y,float z,char *str)
{
    int i,len;
    len=strlen(str);
    glRasterPos3f(x,y,z);
    for(i=0;i<len;i++)
        glutBitmapCharacter(currentfont,(int)str[i]);
}










void init(void)
{
  glClearColor(0.1,0.1,0.2,0.0);
    glPointSize(3.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
gluOrtho2D(0.0,1800.0,0.0,895.0);
   
}
void simplechange()
{
    freerow=2;
    freecol=1;
    movedir=1;
    movcord=1;
}
void upd(int aaa)
{int solrow,solcol,i,j;
    solrow=st1[top2][0];
    solcol=st1[top2++][1];
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
            if(a[i][j]==0)
            { freerow=i;
                freecol=j;}
    a[freerow][freecol]=a[solrow][solcol];
    a[solrow][solcol]=0;
    if(top2>top3)
        solving=0;
}
void display(void)
{int i,j,k,tem=0;
    int d[10];
    for(k=1;k<9;k++)
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
            if(a[i][j]==k)
                d[k]=(i-1)*3+j;
            
    glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.1,0.1,0.2,0.5);
  squre();
    
      glColor3f(0.0,0.5,0.0);
    for(i=0;i<9;i++)
        grid(abc[i][0][0],abc[i][2][1],abc[i][1][0],abc[i][0][1]);
    
    glPushMatrix();
    glTranslated(abc[d[4]-1][3][0],abc[d[4]-1][3][1], 0);
    grid4();
    glPopMatrix();
    glFlush();
    

    glColor3f(0.0,0.1,0.2);
    glPushMatrix();
   glTranslated(abc[d[8]-1][3][0],abc[d[8]-1][3][1], 0);
    grid8();
    glPopMatrix();
    

    
    
    glPushMatrix();
    glTranslated(abc[d[7]-1][3][0],abc[d[7]-1][3][1], 0);
    grid7();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(abc[d[6]-1][3][0],abc[d[6]-1][3][1], 0);
    grid6();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(abc[d[5]-1][3][0],abc[d[5]-1][3][1], 0);
    grid5();
    glPopMatrix();
    
    
    
    glPushMatrix();
   glTranslated(abc[d[3]-1][3][0],abc[d[3]-1][3][1], 0);
    grid3();
    glPopMatrix();
    
    glPushMatrix();
   glTranslated(abc[d[2]-1][3][0],abc[d[2]-1][3][1], 0);
    grid2();
    // circle1();
    glPopMatrix();
    
   
    glPushMatrix();
   // simplechange();

    //if(movcord==1)  glTranslated(abc[0][3][0],abc[0][3][1]-mov[0], 0);
   glTranslated(abc[d[1]-1][3][0],abc[d[1]-1][3][1], 0);
 //   simplechange();
    
    grid1();
    glPopMatrix();
    //glutPostRedisplay();
    //glFlush();

    //grid11();
   // glutSwapBuffers();
  //  if(solving)
  //  {printf("222");
  //      glutTimerFunc(1000, upd, 0);
  //  }
    
    setfont(GLUT_BITMAP_TIMES_ROMAN_24);
    
    
    glColor3f(0,0,1);

    drawstring(1200.0,850.0,0.0,"JIGSAW PUZZLE");
    glColor3f(1,0,0);

    
    drawstring(1000.0,800.0,0.0,"UP = w ");
    
   drawstring(1000.0,750.0,0.0,"DOWN = s ");
    
    drawstring(1000.0,700.0,0.0,"LEFT = d ");
    
    drawstring(1000.0,650.0,0.0,"RIGHT = a ");
    
    drawstring(1000.0,600.0,0.0,"AUTO SOLVE = c ");
   // glColor3f(0,0,0);
    
    
    
    
    
    
    glFlush();
}
void movgrid()
{int i;
    movement=movement+5;
    if(movement>294)
    {movcomp=1;
        glutIdleFunc(NULL);
        //glutIdleFunc(movgrid);
        movement=0;
     if(movcord==1)
     {
         if(movedir==1)
         {
             a[freerow][freecol]=a[freerow-1][freecol];
             a[freerow-1][freecol]=0;
             movrow=freerow-1;
             movcol=movcol;

         }
         if(movedir==0)
         {
             a[freerow][freecol]=a[freerow+1][freecol];
             a[freerow+1][freecol]=0;
             movrow=freerow+1;
             movcol=movcol;

         }

     }
        if(movcord==0)
        {
            if(movedir==1)
            {
                a[freerow][freecol]=a[freerow][freecol-1];
                a[freerow][freecol-1]=0;
                movrow=freerow;
                movcol=movcol-1;

            }
            if(movedir==0)
            {
                a[freerow][freecol]=a[freerow][freecol+1];
                a[freerow][freecol+1]=0;
                movrow=freerow;
                movcol=movcol+1;

            }
            
        }
        
    }
    
    for(i=0;i<9;i++)
    {
        mov[i]=0;
    }
    mov[1-1]=movement;
    glutPostRedisplay();
   // glutSwapBuffers();
}
void printstack()
{int i;
    solved=1;
    top3=top;
// printf("%d\n",top);
      for( i=0;i<=top;i++)
          printf("%d,%d\n",st[i][0],st[i][1]);
  
   for( i=0;i<=top;i++)
    {

            st1[i][0]=st[i][0];
           st1[i][1]=st[i][1];
     //       solved=1;
        
    }
}

void solve(int n)
{
    int t=1,row,col,i,j;
    if(n==0)
    {
        for(i=1;i<=2;i++)
            for(j=1;j<=3;j++)
                if(a[i][j]!=(i-1)*3+j)
                    t=0;
        for(j=1;j<=2;j++)
            if(a[3][j]!=2*3+j)
                t=0;
        if(t)
            printstack();
    }
    else if(n>0)
    {
        for(i=1;i<=3;i++)
            for(j=1;j<=3;j++)
                if(a[i][j]==0)
                {
                    row=i;
                    col=j;
                }
        if((row-1)>0)
        {
            a[row][col]=a[row-1][col];
            a[row-1][col]=0;
            st[++top][0]=row-1;
            st[top][1]=col;
            solve(n-1);
            a[row-1][col]=a[row][col];
            a[row][col]=0;
            top--;
        }
        if((row+1)<4)
        {
            a[row][col]=a[row+1][col];
            a[row+1][col]=0;
            st[++top][0]=row+1;
            st[top][1]=col;
            solve(n-1);
            a[row+1][col]=a[row][col];
            a[row][col]=0;
            top--;
        }
        if((col-1)>0)
        {
            a[row][col]=a[row][col-1];
            a[row][col-1]=0;
            st[++top][0]=row;
            st[top][1]=col-1;	
            solve(n-1);
            a[row][col-1]=a[row][col];
            a[row][col]=0;
            top--;
        }
        if((col+1)<4)
        {
            a[row][col]=a[row][col+1];
            a[row][col+1]=0;
            st[++top][0]=row;
            st[top][1]=col+1;	
            solve(n-1);
            a[row][col+1]=a[row][col];
            a[row][col]=0;
            top--;
        }
    }
}
static void keyboard(unsigned char key,int x,int y)
{int i,j;
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
            if(a[i][j]==0)
            {
                freerow=i;
                freecol=j;
            }
    if (key=='d'&&!solving) {
    //if (key==GLUT_KEY_RIGHT) {
        
      if(freecol-1>0)
      {
          a[freerow][freecol]=a[freerow][freecol-1];
          a[freerow][freecol-1]=0;
          glutPostRedisplay();
      }
    }
        if (key=='a'&&!solving) {
            
            if(freecol+1<4)
            {
                a[freerow][freecol]=a[freerow][freecol+1];
                a[freerow][freecol+1]=0;
                glutPostRedisplay();
            }
        }
    if (key=='s'&&!solving) {
        
        if(freerow-1>0)
        {
            a[freerow][freecol]=a[freerow-1][freecol];
            a[freerow-1][freecol]=0;
            glutPostRedisplay();
        }
    }
    if (key=='w'&&!solving) {
        
        if(freerow+1<4)
        {
            a[freerow][freecol]=a[freerow+1][freecol];
            a[freerow+1][freecol]=0;
            for(i=1;i<=3;i++)
                for(j=1;j<=3;j++)
                    printf("%d",a[i][j]);
            glutPostRedisplay();
        }
    }
    if(key=='c')
    {int solrow,solcol,k;
        if(solving==1)
        { printf("%dnnn%d",st1[top2][0],st1[top2][1]);

            solrow=st1[top2][0];
            solcol=st1[top2++][1];
            for(i=1;i<=3;i++)
                for(j=1;j<=3;j++)
                    if(a[i][j]==0)
                    { freerow=i;
                        freecol=j;}
            a[freerow][freecol]=a[solrow][solcol];
            a[solrow][solcol]=0;
            for(i=1;i<=3;i++)
                for(j=1;j<=3;j++)
                    printf("%d",a[i][j]);

        }

        if(solving==0)
        {
    //    for(i=1;i<=3;i++)
         //   for(j=1;j<=3;j++)
             //   printf("%d",a[i][j]);
    //    printf("%d",top);

    //    for(i=1;i<=3;i++)
      //      for(j=1;j<=3;j++)
        //        b[i][j]=a[i][j];

        for(k=0;((k<18)&&(!solved));k++)
        {   printf("%d",k);
            movcount=k;
            solve(k);
            solving=1;
        }
       for( i=0;i<=top3;i++)
            printf("%d,kk%d",st1[i][0],st1[i][1]);
       for(i=1;i<=3;i++)
            for(j=1;j<=3;j++)
                printf("%d",a[i][j]);

          // for(i=1;i<=3;i++)
           //     for(j=1;j<=3;j++)
              //      a[i][j]=b[i][j];
            solrow=st1[0][0];
            solcol=st1[0][1];
            for(i=1;i<=3;i++)
                for(j=1;j<=3;j++)
                    if(a[i][j]==0)
                    { freerow=i;
            freecol=j;}
            a[freerow][freecol]=a[solrow][solcol];
            a[solrow][solcol]=0;
        for(i=1;i<=3;i++)
            for(j=1;j<=3;j++)
                printf("%d",a[i][j]);
            top2=1;}

            glutPostRedisplay();
            
            
        
    }

      //  movedir=1;
    //    movcord=1;
          movement=0;
        
     //   glutIdleFunc(movgrid);
        //glEnd();
        
          //glutIdleFunc(NULL);
         //glFlush();
      
    
    

}


int main(int argc,char **argv)
{int i,j;
    
    a[1][1]=1;
    a[1][2]=2;
    a[1][3]=3;
    a[2][1]=4;
    a[2][2]=5;
    a[2][3]=6;
    a[3][1]=7;
    a[3][2]=8;
    a[3][3]=0;
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
            printf("%d",a[i][j]);
    glutInit(&argc,argv);
    //glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (1200, 1000);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("simple");
  // glutIdleFunc(movgrid);
    glutTimerFunc(1000, upd, 0);
    glutKeyboardFunc(keyboard);
      //glutIdleFunc(NULL);
   glutDisplayFunc(display);
    //draw_circle();
    init();
    glClearColor(0.1,0.1,0.2,0.5);
    glutMainLoop();
   // glutSwapBuffers();
   // glFlush();
    return 0;
}
