
#include<stdio.h>          //libraries
	#include<stdlib.h>
#include<string.h>
	#include "head_foot.h"
#include<string.h>
      void page2(FILE *ptr);          //functions
      void MATH(FILE *ptr);
        void CHEM(FILE *ptr);
        void PHY(FILE *ptr);
          void Test(FILE *ptr){
             page2(ptr);
                            }

 int main()                  //main function
{ 

FILE *ptr;
  ptr=fopen("user.txt","a");
     if(ptr==0){                  //checking error in file creation
       printf("ERROR in opening user.txt file\n");
          }
system("clear");
  char name[40];
headerfooter();      //taking user data
  long int user_no;
  fprintf(ptr,"_______________________________________________________________________________\n");
  printf(" Enter user name:");
  fgets(name,50,stdin);
  fprintf(ptr," User name: %s\n",name);
  printf(" Enter Enroll no.or Mobile no.");
  scanf("%ld",&user_no);
  fprintf(ptr," Enroll no./Mobile no.  %ld\n\n",user_no);
  char TEST[5]="TEST",EXIT[5]="EXIT",ENTER[100];
          printf("\n");
          system("clear");
           headerfooter();
  printf(" Enter 'TEST' for testing your skils.(without single quotes)\n");
  printf(" Enter 'EXIT' for exiting programe.\n");
  printf(" *TEST and EXIT is case sensetive.\n");
  printf(" *Please do not enter anything other than TEST or EXIT otherwise you are ther where you started.\n"); 
  printf("\n");
   printf("=>");
  scanf("%s",ENTER);

if(strcmp(ENTER,TEST)==0)
    Test(ptr);
else if(strcmp(ENTER,EXIT)==0){
    printf("EXITING.........\n");
    thanx();
                            }
 else
    main();
}
void page2(FILE *ptr)                          //second functions
   {
   system("clear");
   printf("\n\n");
 headerfooter();
   int n;                                    //list of subjects
   printf(" Enter subject  number from given list:\n");
   printf(" 1.BASIC MATHMETICS(INTEGER TYPE)\n");
   printf(" 2.BASIC CHEMISTRY(INTEGER TYPE)\n");
   printf(" 3.BASIC PHYSICS(INTEGER TYPE)\n");
   printf(" 4.EXIT\n\n");
	 printf("=>");
 scanf("%d",&n);
	 switch(n){
 case 4:
 	printf(" EXITING.......\n");
 	thanx();
 	 break;
 case 1:
	 MATH(ptr);
	  break;
 case 2:
	 CHEM(ptr);
	  break;
 case 3:
	  PHY(ptr);
	  break; 
 default:
	 page2(ptr);
	         } 
}
void MATH(FILE *ptr){        //math subject functions
	system("clear");
	printf("\n\n");
	headerfooter();
int quen,i=0,marks=0,rate;
	int ansg[20];                        //answeres
	int ansm[20]={22,3,3,12,16,50,154,15,48,3,10,7,216,5,5,1,9,100,28,70};
printf("Enter number of quetion of MATHMETICS you want(maximun 20)\n");
	printf("=>");                         //questions
scanf("%d",&quen);
char question[20][100]={"What is value of 22+8/4*2-4 ?","What is value of |2-5| ?","what is greatest integer value of 3.79 ?","What is the area of triangle with B=4,H=6 ?","What is area of square of side 4 ?","What is area of rectangle with L=10,B=5 ?","What is area of circle with R=7(pie=22/7) ?","What is area of rhombus with diagonals 5 and 6 ?","What is the volume of cuboid L=8,B=2,H=3 ?","What is  value of (3/7)/(1/7) ?","What is coberoot of 1000 ?","What is the cube root of 343 ?","What is the the cube of 6 ?","The volume of cube is 125,then what is side of cube ?","What % is 5 of 100 ?"," what is value of 2/5+3/5 ?","What is the value of 45/3 ?","What is value of 48 /(0.48) ?", "What is value of 4 times 7 ?","What is 35% of 200 ?" };
if((quen<21) && (quen>0)){
for(i=0;i<quen;++i){
printf("%d . %s\n",i+1,question[i]);
 printf("Answere=>");
scanf("%d",&ansg[i]);              
}
i=0;
for(i=0;i<quen;++i){
   if(ansg[i]==ansm[i])
       marks++;
}
printf("\nYour score is %d out of %d\n\n",marks,quen);
	fprintf(ptr," User marks in MATHMATICS is %d out of %d\n\n",marks,quen);

printf("\nPLEASE RATE YOUR EXPERIENCE (1 to 5).\n");
	scanf("%d",&rate);
fprintf(ptr," User rate to programe is %d\n\n",rate); 
	char ya[4],yes[4]={"YES"};
printf(" Want to see answres of above questions\n");
printf(" Enter YES or NO\n=>");
scanf("%s",ya);
system("clear");
headerfooter();
printf(" -----------CORRECT ANSWERS------------\n");
if(strcmp(ya,yes)==0){
i=0;
for(i=0;i<quen;++i){
printf("%d. %s\n",i+1,question[i]);
printf("%d\n",ansm[i]);
}
}  
else 
    page2(ptr);
}
else{
page2(ptr);
}
char ex[5];
printf(" Want to exit from here Enter Exit\n=>");
scanf("%s",ex);
page2(ptr);
}
void CHEM(FILE *ptr){           //chemistery functions
	system("clear");
	printf("\n\n");
	headerfooter();
int quen,i=0,marks=0,rate;
	int ansg[10];                   //answeres
	int ansm[11]={19,40,3,3,3,11,1,18,44,2};
printf("Enter number of quetion of CHEMESTRY  you want(maximun 10)\n");
	printf("=>");               //questions
	scanf("%d",&quen);
char question[11][100]={"What is atomic number of potassium ?","What is mass number calcium ?","How many isotopes of of hydrogen are known ?","How many pie bond are in benzene ?","How many oxygen atom are present in ozone ?","What is atomic number of sodium ?","What is ratio of no.of atom of N to O in nitrogen monooxide ?","What is atomic weight of water ?","What is atomic weight carbon dioxide ?","How many O atom are in pyrolusite ?" };
if((quen<11) && (quen>0)){
for(i=0;i<quen;++i){
printf("%d . %s\n",i+1,question[i]);
	 printf("Answere=>");
	scanf("%d",&ansg[i]);              
}
i=0;
for(i=0;i<quen;++i){
   if(ansg[i]==ansm[i])
       marks++;
}
printf("\nYour score is %d out of %d\n\n",marks,quen);
fprintf(ptr," User marks in CHEMESTRY is %d out of %d\n\n",marks,quen);
	i=0;

printf("\nPLEASE RATE YOUR EXPERIENCE(1 to 5).\n");
	scanf("%d",&rate);
fprintf(ptr," User rate to programe is %d\n\n",rate); 
	char ya[4],yes[4]={"YES"};
printf(" Want to see answres of above questions\n");
printf(" Enter YES or NO\n=>");
scanf("%s",ya);
system("clear");
headerfooter();
printf(" -----------CORRECT ANSWERS------------\n");
if(strcmp(ya,yes)==0){
i=0;
for(i=0;i<quen;++i){
printf("%d. %s\n",i+1,question[i]);
printf("%d\n",ansm[i]);
}
}
else
page2(ptr);
}
else{
	page2(ptr);
}
char ex[5];
printf(" Want to exit from here Enter Exit\n=>");
scanf("%s",ex);
page2(ptr);
}

void PHY(FILE*ptr){          //physics functions
	system("clear");
	printf("\n\n");
	headerfooter();
int quen,i=0,marks=0,rate;
	int ansg[10];               //answeres
	int ansm[11]={5,10,3,2,32,100,6,8,20,10,1};
printf("Enter number of quetion of PHYSICS you want(maximun 10)\n");
	printf("=>");
	scanf("%d",&quen);                //questions
char question[11][100]={"What is value of speed if distance is 10 and time taken is 2 sec. ?","What is the value of gravitational acceleration(round off it) ?","Speed of light is X x 100000000,then what is value of X ?","What is the ratio of radius of curvature to focal length ?","What is the value of 0 degree in fahrenheit ?","At what temp. water boils(in degree C) ?","What is the power of 10 in mega hertz ?","In hou many minutes sunlight from sun reach to earth  ?","if u=0,a=5,t=4,then what is v ?","What is size of image in plane mirror if object size if 10 ?","If frequency of sound wave if 1Hz then time period is ?" };
if((quen<11) && (quen>0)){
	for(i=0;i<quen;++i){
printf("%d . %s\n",i+1,question[i]);
	 printf("Answere=>");
	scanf("%d",&ansg[i]);              
}
i=0;
for(i=0;i<quen;++i){
   if(ansg[i]==ansm[i])
       marks++;
}
printf("\nYour score is %d out of %d\n\n",marks,quen);
	fprintf(ptr," User marks in PHYSICS is %d out of %d\n\n",marks,quen);
	i=0;

printf("\nPLEASE RATE YOUR EXPERIENCE (1 to 5).\n");
	scanf("%d",&rate);
	fprintf(ptr," User rate to programe is %d\n\n",rate); 
     char ya[4],yes[4]={"YES"};
printf(" Want to see answres of above questions\n");
printf(" Enter YES or NO\n=>");
scanf("%s",ya);
system("clear");
headerfooter();
printf(" -----------CORRECT ANSWERS------------\n");
if(strcmp(ya,yes)==0){
i=0;
for(i=0;i<quen;++i){
printf("%d. %s\n",i+1,question[i]);
printf("%d\n",ansm[i]);
}
}
else
page2(ptr);
}


else{
	page2(ptr);
}
char ex[5];
printf(" Want to exit from here Enter Exit\n=>");
scanf("%s",ex);
page2(ptr);
}
