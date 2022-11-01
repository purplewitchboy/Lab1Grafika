#include "Render.h"
#include "Figure.h"
#include "SideQuads.h"
#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

void Render(double delta_time)
{   
	int height = 3;

//ѕостроить первое основание призмы

	glPushMatrix();
	glRotated(33.6, 0, 0, 2);
	glColor3d(0.2, 0.7, 0.7);
	Figure(1);
	glPopMatrix();

//ѕостроить второе основание призмы
	 
	glPushMatrix();
	glRotated(33.6, 0, 0, 2);
	glColor3d(0.2, 0.5, 0.5);
	glTranslated(0,0,height);
	Figure(2);
	glPopMatrix();
	
//ѕостроить призму из двух фигур и боковых граней
	 
	glPushMatrix();
	glRotated(33.6, 0, 0, 2);
	SideQuads(height);
	glPopMatrix();


}   

