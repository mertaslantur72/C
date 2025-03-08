#include<stdio.h>
#include<math.h>

double f(double x);

falsePosition(double xL, double xU) {
	
int n=15;
double ea,es,xM,xMold;

es=0.5*pow(10, 2.0-n);
 
do{
	xM=((xL*f(xU))-(xU*f(xL)))/(f(xU)-f(xL));
	
	
	if(f(xL)*f(xM)>0) {
		
		xU=xU;
		xL=xM;	
	}
	
	else if(f(xL)*f(xM)<0) {
	
		xL=xL;
		xU=xM;
	}
		
	else if(f(xL)*f(xM)==0) {
		
		xM=xM;
	}
	
ea=fabs((xM-xMold)/xM)*100;	

xMold=xM;
	
}while(es<ea);
		
	return xM;
}
