/* Mazhar Hussain    Registration number:20Mdele098
Email:    20Mdele098@uetmardan.edu.pk   */
/* finding area of circe, rectangle , circle */
#include<stdio.h>
#include<math.h>// Used for sqrt() //
int main()
{
	int choice,lenth,width;//declaring variable//
	float a,b,c,s,area,radius;//declaring variable//
	float pi=3.14;//declaring and initializing variable//
	printf("your choices are following:\n");
	printf("1.area of triangle:\n");
	printf("2.area of circle:\n");
	printf("3.area of rectangle:\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	//using choice to calculate required area //
	switch(choice)
	{
	case 1:
		printf("Enter lenths of all sides:\n");
		scanf("%f %f %f",&a,&b,&c);
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area of triangle is:%f\n",area);
		break;
		
	case 2:
		printf("Enter radius of circle:\n");
		scanf("%f",&radius);
		area=pi*radius*radius;
	    printf("area of circle is:%f\n",area);
		break;
		
	case 3:
		printf("Enter lenth and width of rectangle:\n");
		scanf("%d %d",&lenth,&width);
		area=lenth*width;
	    printf("area of rectangle is:%f\n",area);	
	    break;
	    
	default:
	    printf("enter the right choice\n");
	    break;
	}
	return 0;}
