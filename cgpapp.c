#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static GtkWidget *coursecode;
static GtkWidget *coursecodef; 
static GtkWidget *score;
static GtkWidget *scoref;
static GtkWidget *unit;
static GtkWidget *unitf;
static GtkWidget *ndsemf;
static GtkWidget *choice;
static GtkWidget *choicef;
static GtkWidget *gpresult;
static GtkWidget *cgparesult;
static GtkWidget *gradeabc;
static GtkWidget *gpares;
static GtkWidget *gpares2;
static GtkWidget *cgpares;
//course 2
static GtkWidget *coursecode1;
static GtkWidget *score1;
static GtkWidget *unit1;
static GtkWidget *choice1;
static GtkWidget *gpresult1;
static GtkWidget *gradeabc1;
//course 3
static GtkWidget *coursecode2;
static GtkWidget *score2;
static GtkWidget *unit2;
static GtkWidget *choice2;
static GtkWidget *gpresult2;
static GtkWidget *gradeabc2; 
//course 4
static GtkWidget *coursecode3;
static GtkWidget *score3;
static GtkWidget *unit3;
static GtkWidget *choice3;
static GtkWidget *gpresult3;
static GtkWidget *gradeabc3;
//course 5
static GtkWidget *coursecode4;
static GtkWidget *score4;
static GtkWidget *unit4;
static GtkWidget *choice4;
static GtkWidget *gpresult4;
static GtkWidget *gradeabc4;
//course 6
static GtkWidget *coursecode5;
static GtkWidget *score5;
static GtkWidget *unit5;
static GtkWidget *choice5;
static GtkWidget *gpresult5;
static GtkWidget *gradeabc5;
//course 7
static GtkWidget *coursecode6;
static GtkWidget *score6;
static GtkWidget *unit6;
static GtkWidget *choice6;
static GtkWidget *gpresult6;
static GtkWidget *gradeabc6;

//course no grade point calculation
static void grade_point(GtkWidget *gradepoint, gpointer data){
	int unitp;
	int grad = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit)));
	int scor  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score)));

	if (scor >= 70 && scor <= 100){
		unitp = 5;}
	else if (scor >= 60 && scor < 70){
		unitp = 4;}
	else if (scor >= 50 && scor < 60){
		unitp = 3;}
	else if (scor >= 45 && scor < 50){
		unitp = 2;}
	else if (scor >= 40 && scor < 45){
		unitp = 1;}
	else if (scor < 40){
		unitp = 0;}

	char buffer[32];
	snprintf(buffer, sizeof(buffer), "%d", unitp * grad);
	gtk_label_set_text(GTK_LABEL(gpresult), buffer);
}

//course 2 grade calculation
static void grade_point1(GtkWidget *gradepoint1, gpointer data){                      int unitp1;
	int grad1 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit1)));
	int scor1  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score1)));
	
	if (scor1 >= 70 && scor1 <= 100){                                                     unitp1 = 5;}                                                         else if (scor1 >= 60 && scor1 < 70){                                                  unitp1 = 4;}                                                         else if (scor1 >= 50 && scor1 < 60){                                                  unitp1 = 3;}                                                         else if (scor1 >= 45 && scor1 < 50){                                                  unitp1 = 2;}                                                         else if (scor1 >= 40 && scor1 < 45){                                                  unitp1 = 1;}                                                         else if (scor1 < 40){                                                                unitp1 = 0;}                                                                                                                                     char buffer1[32];                                                            snprintf(buffer1, sizeof(buffer1), "%d", unitp1 * grad1);
	gtk_label_set_text(GTK_LABEL(gpresult1), buffer1);
}

//course 3 grade calculation
static void grade_point2(GtkWidget *gradepoint2, gpointer data){                    int unitp2;                                                                int grad2 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit2)));             int scor2  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score2)));

	if (scor2 >= 70 && scor2 <= 100){                                                   unitp2 = 5;}                                                       else if (scor2 >= 60 && scor2 < 70){                                                unitp2 = 4;}                                                       else if (scor2 >= 50 && scor2 < 60){                                                unitp2 = 3;}                                                       else if (scor2 >= 45 && scor2 < 50){                                                unitp2 = 2;}                                                       else if (scor2 >= 40 && scor2 < 45){                                                unitp2 = 1;}                                                       else if (scor2 < 40){                                                              unitp2 = 0;}
	char buffer2[32];                                                          snprintf(buffer2, sizeof(buffer2), "%d", unitp2 * grad2);                     gtk_label_set_text(GTK_LABEL(gpresult2), buffer2);
}
//course four grade point calculation
static void grade_point3(GtkWidget *gradepoint3, gpointer data){                    int unitp3;                                                                int grad3 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit3)));             int scor3  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score3)));

	if (scor3 >= 70 && scor3 <= 100){
		unitp3 = 5;}
	else if (scor3 >= 60 && scor3 < 70){
		unitp3 = 4;}
	else if (scor3 >= 50 && scor3 < 60){
		unitp3 = 3;}
	else if (scor3 >= 45 && scor3 < 50){
		unitp3 = 2;}
	else if (scor3 >= 40 && scor3 < 45){
		unitp3 = 1;}
	else if (scor3 < 40){
		unitp3 = 0;}

	char buffer3[32];
	snprintf(buffer3, sizeof(buffer3), "%d", unitp3 * grad3);
	gtk_label_set_text(GTK_LABEL(gpresult3), buffer3);
}
//course four grade point calculation
static void grade_point4(GtkWidget *gradepoint4, gpointer data){                    int unitp4;                                                                int grad4 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit4)));             int scor4  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score4)));
	 if (scor4 >= 70 && scor4 <= 100){
		 unitp4 = 5;}
	  else if (scor4 >= 60 && scor4 < 70){
		  unitp4 = 4;}
	   else if (scor4 >= 50 && scor4 < 60){
		   unitp4 = 3;}
	 else if (scor4 >= 45 && scor4 < 50){
		 unitp4 = 2;}
	 else if (scor4 >= 40 && scor4 < 45){
		 unitp4 = 1;}
	  else if (scor4 < 40){
		  unitp4 = 0;}

	  char buffer4[32];
	  snprintf(buffer4, sizeof(buffer4), "%d", unitp4 * grad4);
	  gtk_label_set_text(GTK_LABEL(gpresult4), buffer4);
}

//course no grade point calculation
static void grade_point5(GtkWidget *gradepoint5, gpointer data){                          int unitp5;                                                                      int grad5 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit5)));                   int scor5  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score5)));
	
	if (scor5 >= 70 && scor5 <= 100){                                                         unitp5 = 5;}
	else if (scor5 >= 60 && scor5 < 70){                                                      unitp5 = 4;}
	else if (scor5 >= 50 && scor5 < 60){                                                      unitp5 = 3;}
	else if (scor5 >= 45 && scor5 < 50){                                                      unitp5 = 2;}
	else if (scor5 >= 40 && scor5 < 45){                                                      unitp5 = 1;}
	else if (scor5 < 40){                                                                    unitp5 = 0;}
	
	char buffer5[32];                                                                snprintf(buffer5, sizeof(buffer5), "%d", unitp5 * grad5);
	gtk_label_set_text(GTK_LABEL(gpresult5), buffer5);                        }
// g p for course 7
static void grade_point6(GtkWidget *gradepoint6, gpointer data){                          int unitp6;                                                                      int grad6 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit6)));                   int scor6  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score6)));                                                                                          if (scor6 >= 70 && scor6 <= 100){                                                         unitp6 = 5;}                                                          else if (scor6 >= 60 && scor6 < 70){                                                      unitp6 = 4;}                                                          else if (scor6 >= 50 && scor6 < 60){                                                      unitp6 = 3;}                                                          else if (scor6 >= 45 && scor6 < 50){                                                      unitp6 = 2;}                                                          else if (scor6 >= 40 && scor6 < 45){                                                      unitp6 = 1;}                                                          else if (scor6 < 40){                                                                    unitp6 = 0;}                                                                                                                                           char buffer6[32];                                                                snprintf(buffer6, sizeof(buffer6), "%d", unitp6 * grad6);                      gtk_label_set_text(GTK_LABEL(gpresult6), buffer6);                        }

//1st semester gpa calculation
static void stgpa(GtkWidget *stsemgpa, gpointer data){
	int uni = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit)));
	int uni1 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit1)));
	int uni2 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit2)));
	int uni3 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit3)));

	float uni_sum = uni + uni1 + uni2 + uni3;
	
	//grade point
	int gp = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult)));
	int gp1 = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult1)));
	int gp2 = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult2)));
	int gp3 = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult3)));

	int gpsum = gp + gp1 + gp2 + gp3;

	float gpa1 = gpsum / uni_sum;
	
	char buff[32];
	snprintf(buff, sizeof(buff), "%.2f", gpa1);
	gtk_label_set_text(GTK_LABEL(gpares), buff);

}
//2nd semester gpa calculation
static void ndgpa(GtkWidget *ndsemgpa, gpointer data){
	int uni4 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit4)));
	int uni5 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit5)));
	int uni6 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit6)));

	float uni_sum2 = uni4 + uni5 + uni6;

	//grade point
	int gp4 = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult4)));
	int gp5 = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult5)));
	int gp6 = atoi((char *)gtk_label_get_label(GTK_LABEL(gpresult6)));

	int gpsum2 = gp4 + gp5 + gp6;

	float gpa2 = gpsum2 / uni_sum2;

	char buff2[32];
	snprintf(buff2, sizeof(buff2), "%.2f", gpa2);
	gtk_label_set_text(GTK_LABEL(gpares2), buff2);
}
//cgpa
static void cgpaf(GtkWidget *cgpab, gpointer data){
	float gpst = atoi((char *)gtk_label_get_label(GTK_LABEL(gpares)));
	float gpand = atoi((char *)gtk_label_get_label(GTK_LABEL(gpares2)));

	float cgpa = gpst + gpand;
	float cgpafin = cgpa / 2;

	char buffc[32];
       snprintf(buffc, sizeof(buffc), "%.2f", cgpafin);
	gtk_label_set_text(GTK_LABEL(cgpares), buffc);
}	

//switch statements
//course one switch
static void a_num(GtkWidget *aornum, gpointer data){
	int pick  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice)));
	int scor  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score))); 
	switch (pick) {
		case 1:
			if (scor >= 70 && scor <= 100){
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "A");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor >= 60 && scor < 70){
				char abcdef[32]; 
				snprintf(abcdef, sizeof(abcdef), "B");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor >= 50 && scor < 60){
				char abcdef[32]; 
				snprintf(abcdef, sizeof(abcdef), "C");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor >= 45 && scor < 50){
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "D");                                                                gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor >= 40 && scor < 45) {
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "E");                                                                gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor < 40){
				char abcdef[32];	
				snprintf(abcdef, sizeof(abcdef), "F");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			break;
		case 2:
			if (scor >= 70 && scor <= 100){
				char abcdef[32];                                                                                      snprintf(abcdef, sizeof(abcdef), "5");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}                                              else if (scor >= 60 && scor < 70){
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "4");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor >= 50 && scor < 60){
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "3");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor >= 45 && scor < 50)
				{char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "2");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}                                             else if (scor >= 40 && scor < 44){
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "1");                                                                gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			else if (scor < 40) {
				char abcdef[32];
				snprintf(abcdef, sizeof(abcdef), "0");
				gtk_label_set_text(GTK_LABEL(gradeabc), abcdef);}
			break;
	}	
}

//course 2 switch
static void a_num1(GtkWidget *aornum1, gpointer data){
	int pick1  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice1)));
	int scor1  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score1)));
	switch (pick1) {
		case 1:
			if (scor1 >= 70 && scor1 <= 100){                                                     char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "A");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 60 && scor1 < 70){                                                  char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "B");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 50 && scor1 < 60){                                                  char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "C");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 45 && scor1 < 50){                                                  char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "D");                                                                gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 40 && scor1 < 45) {                                                 char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "E");
				gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 < 40){                                                                char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "F");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}                                                                                               break;
		case 2:                                                                             if (scor1 >= 70 && scor1 <= 100){                                                     char abcdef1[32];                                                                                      snprintf(abcdef1, sizeof(abcdef1), "5");                                                                                        gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 60 && scor1 < 70){
				char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "4");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 50 && scor1 < 60){                                                  char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "3");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 45 && scor1 < 50)                                                   {char abcdef1[32];                                                           snprintf(abcdef1, sizeof(abcdef1), "2");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 >= 40 && scor1 < 44){
				char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "1");                                                                gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			else if (scor1 < 40) {                                                               char abcdef1[32];                                                            snprintf(abcdef1, sizeof(abcdef1), "0");                                      gtk_label_set_text(GTK_LABEL(gradeabc1), abcdef1);}
			break;                                                      }                                                                   }

//course 3 switch
static void a_num2(GtkWidget *aornum2, gpointer data){                              int pick2  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice2)));
	int scor2  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score2)));
	switch (pick2) {                                                                   case 1:
		if (scor2 >= 70 && scor2 <= 100){                                                   char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "A");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 >= 60 && scor2 < 70){                                                char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "B");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 >= 50 && scor2 < 60){                                                char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "C");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 >= 45 && scor2 < 50){                                                char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "D");                                                                gtk_label_set_text(GTK_LABEL(gradeabc), abcdef2);}
		else if (scor2 >= 40 && scor2 < 45) {                                               char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "E");
			gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 < 40){                                                              char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "F");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}                                                                                           break;
		case 2:                                                                           if (scor2 >= 70 && scor2 <= 100){                                                   char abcdef2[32];
													  snprintf(abcdef2, sizeof(abcdef2), "5");
													  gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
			else if (scor2 >= 60 && scor2 < 70){
				char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "4");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 >= 50 && scor2 < 60){                                                char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "3");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 >= 45 && scor2 < 50)                                                 {char abcdef2[32];                                                         snprintf(abcdef2, sizeof(abcdef2), "2");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 >= 40 && scor2 < 44){
			char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "1");                                                                gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		else if (scor2 < 40) {                                                             char abcdef2[32];                                                          snprintf(abcdef2, sizeof(abcdef2), "0");                                    gtk_label_set_text(GTK_LABEL(gradeabc2), abcdef2);}
		break;
	}                                                                 }
//course 4 switch statement
static void a_num3(GtkWidget *aornum3, gpointer data){
	int pick3  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice3)));
	int scor3  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score3)));
	switch (pick3) {
		case 1:
			if (scor3 >= 70 && scor3 <= 100){                                                   char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "A");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 60 && scor3 < 70){                                                char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "B");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 50 && scor3 < 60){                                                char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "C");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 45 && scor3 < 50){                                                char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "D");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 40 && scor3 < 45) {                                               char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "E");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 < 40){                                                              char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "F");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}                                                                                           break;
		case 2:
			if (scor3 >= 70 && scor3 <= 100){                                                   char abcdef3[32];
				snprintf(abcdef3, sizeof(abcdef3), "5");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 60 && scor3 < 70){                                              char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "4");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 50 && scor3 < 60){                                                char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "3");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 45 && scor3 < 50)                                                 {char abcdef3[32];                                                         snprintf(abcdef3, sizeof(abcdef3), "2");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 >= 40 && scor3 < 44){                                             char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "1");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			else if (scor3 < 40) {                                                             char abcdef3[32];                                                          snprintf(abcdef3, sizeof(abcdef3), "0");
				gtk_label_set_text(GTK_LABEL(gradeabc3), abcdef3);}
			break;                                                    } 
}
//course 5 switch
static void a_num4(GtkWidget *aornum4, gpointer data){                              int pick4  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice4)));          int scor4  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score4)));
	switch (pick4) {                                                                   case 1:
		if (scor4 >= 70 && scor4 <= 100){                                                   char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "A");                                    gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 60 && scor4 < 70){                                                char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "B");                                    gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 50 && scor4 < 60){
			char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "C");                                    gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 45 && scor4 < 50){                                                char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "D");                                                                gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 40 && scor4 < 45) {                                               char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "E");                                                                gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 < 40){                                                              char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "F");
				gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}                                                                                           break;
		case 2:
		if (scor4 >= 70 && scor4 <= 100){                                                   char abcdef4[32];                                                       snprintf(abcdef4, sizeof(abcdef4), "5");                                  gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 60 && scor4 < 70){                                              char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "4");                                 gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 50 && scor4 < 60){                                                char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "3");                                                                                                         gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 45 && scor4 < 50)                                                 {char abcdef4[32];                                                         snprintf(abcdef4, sizeof(abcdef4), "2");                                                                                                         gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}
		else if (scor4 >= 40 && scor4 < 44){                                             char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "1");                                  gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}                                                                                         else if (scor4 < 40) {                                                             char abcdef4[32];                                                          snprintf(abcdef4, sizeof(abcdef4), "0");                                gtk_label_set_text(GTK_LABEL(gradeabc4), abcdef4);}                                                                                         break;                                                    }                                                                 }

// 2nd semester here
// switch course 6
static void a_num5(GtkWidget *aornum5, gpointer data){
	int pick5  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice5)));
	int scor5  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score5)));
	switch (pick5) {
	 case 1:                                                                                  if (scor5 >= 70 && scor5 <= 100){                                                          char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "A");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 60 && scor5 < 70){                                                       char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "B");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 50 && scor5 < 60){                                                       char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "C");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 45 && scor5 < 50){                                                       char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "D");                                                                gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 40 && scor5 < 45) {                                                      char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "E");                                                                gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 < 40){                                                                     char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "F");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												break;
	 case 2:                                                                                  if (scor5 >= 70 && scor5 <= 100){                                                          char abcdef5[32];                                                                                      snprintf(abcdef5, sizeof(abcdef5), "5");                                                                                                       gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 60 && scor5 < 70){
													char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "4");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 50 && scor5 < 60){                                                       char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "3");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 45 && scor5 < 50)                                                        {char abcdef5[32];                                                                snprintf(abcdef5, sizeof(abcdef5), "2");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 >= 40 && scor5 < 44){
													char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "1");                                                                gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												else if (scor5 < 40) {                                                                    char abcdef5[32];                                                                 snprintf(abcdef5, sizeof(abcdef5), "0");                                           gtk_label_set_text(GTK_LABEL(gradeabc5), abcdef5);}
												break;
	}
}
//switch for course 7
static void a_num6(GtkWidget *aornum6, gpointer data){                              int pick6  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice6)));
	int scor6  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score6)));                       switch (pick6) {
	case 1:                                                                              if (scor6 >= 70 && scor6 <= 100){                                                   char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "A");                                    gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												else if (scor6 >= 60 && scor6 < 70){                                                char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "B");                                    gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												else if (scor6 >= 50 && scor6 < 60){                                                    char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "C");                                    gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												else if (scor6 >= 45 && scor6 < 50){                                                char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "D");                                                                gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												else if (scor6 >= 40 && scor6 < 45) {                                               char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "E");                                                                gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												else if (scor6 < 40){                                                              char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "F");                                                          gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												break;
	case 2:
		if (scor6 >= 70 && scor6 <= 100){                                                   char abcdef6[32];                                                       snprintf(abcdef6, sizeof(abcdef6), "5");                                  gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}                                       else if (scor6 >= 60 && scor6 < 70){                                              char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "4");                                 gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}                                       else if (scor6 >= 50 && scor6 < 60){                                                char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "3");                                                                                                         gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}                                             else if (scor6 >= 45 && scor6 < 50)                                                 {char abcdef6[32];                                                         snprintf(abcdef6, sizeof(abcdef6), "2");                                                                                                         gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}                                             else if (scor6 >= 40 && scor6 < 44){                                             char abcdef6[32];                                                          snprintf(abcdef6, sizeof(abcdef6), "1");                                  gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
		else if (scor6 < 40) {                                                             char abcdef6[32];                                                          	snprintf(abcdef6, sizeof(abcdef6), "0");                                           gtk_label_set_text(GTK_LABEL(gradeabc6), abcdef6);}
												break;
	}
}




static void activate (GtkApplication *app, gpointer user_data) {
GtkWidget *window, *grid, *stsemgpa, *ndsemgpa, *cgpab, *gradepoint, *aornum, *aornum1, *gradepoint1, *aornum2, *gradepoint2, *gradepoint3, *aornum3, *gradepoint4, *aornum4, *gradepoint5, *aornum5, *gradepoint6, *aornum6;

window = gtk_application_window_new(app);
gtk_window_set_title(GTK_WINDOW (window), "CGPA CALCULATION APP");
gtk_window_set_default_size(GTK_WINDOW (window), 700, 500);
gtk_window_set_position(GTK_WINDOW (window), GTK_WIN_POS_CENTER);

 //define what a grid looks like
        grid = gtk_grid_new();
        gtk_container_add(GTK_CONTAINER(window), grid);

	ndsemf = gtk_label_new("FIRST SEMESTER");                                     gtk_grid_attach(GTK_GRID(grid), ndsemf, 0, -1, 1, 1);

	coursecodef = gtk_label_new("Course Code");
	gtk_grid_attach(GTK_GRID(grid), coursecodef, 0, 0, 1, 1);

	scoref = gtk_label_new("Your Score");
	gtk_grid_attach(GTK_GRID(grid), scoref, 1, 0, 1, 1);

	unitf = gtk_label_new("Course Unit");
       	gtk_grid_attach(GTK_GRID(grid), unitf, 2, 0, 1, 1);	
	
	choicef = gtk_label_new("choose 1 or 2");
	gtk_grid_attach(GTK_GRID(grid), choicef, 3, 0, 1, 1);
	
	coursecode = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), coursecode, 0, 1, 1, 1);

	score = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), score, 1, 1, 1, 1);

	unit = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), unit, 2, 1, 1, 1);
	
	choice = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), choice, 3, 1, 1, 1);
	
	aornum = gtk_button_new_with_label("Grade/Point");
	g_signal_connect(aornum, "clicked", G_CALLBACK(a_num), NULL);
	gtk_grid_attach(GTK_GRID(grid), aornum, 4, 1, 1, 1);

	gradeabc = gtk_label_new("is:");
	gtk_grid_attach(GTK_GRID(grid), gradeabc, 5, 1, 1, 1);

	gradepoint = gtk_button_new_with_label("Grade Point");
	g_signal_connect(gradepoint, "clicked", G_CALLBACK(grade_point), NULL);
	gtk_grid_attach(GTK_GRID(grid), gradepoint, 6, 1, 1, 1);

	gpresult = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gpresult, 7, 1, 1, 1);

// grid shown for course 2
	 coursecode1 = gtk_entry_new();                                               gtk_grid_attach(GTK_GRID(grid), coursecode1, 0, 2, 1, 1);

	 score1 = gtk_entry_new();                                                    gtk_grid_attach(GTK_GRID(grid), score1, 1, 2, 1, 1);

	 unit1 = gtk_entry_new();                                                     gtk_grid_attach(GTK_GRID(grid), unit1, 2, 2, 1, 1);

	  choice1 = gtk_entry_new();                                                   gtk_grid_attach(GTK_GRID(grid), choice1, 3, 2, 1, 1);

	aornum1 = gtk_button_new_with_label("Grade/Point");                          g_signal_connect(aornum1, "clicked", G_CALLBACK(a_num1), NULL);               gtk_grid_attach(GTK_GRID(grid), aornum1, 4, 2, 1, 1);
	
	gradeabc1 = gtk_label_new(":");                                            gtk_grid_attach(GTK_GRID(grid), gradeabc1, 5, 2, 1, 1);

	gradepoint1 = gtk_button_new_with_label("Grade Point");                      g_signal_connect(gradepoint1, "clicked", G_CALLBACK(grade_point1), NULL);
	gtk_grid_attach(GTK_GRID(grid), gradepoint1, 6, 2, 1, 1);

	gpresult1 = gtk_label_new(":");                                              gtk_grid_attach(GTK_GRID(grid), gpresult1, 7, 2, 1, 1);
//shown for course 3
	coursecode2 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), coursecode2, 0, 3, 1, 1);

	score2 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), score2, 1, 3, 1, 1);

	unit2 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), unit2, 2, 3, 1, 1);

	 choice2 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), choice2, 3, 3, 1, 1);

	aornum2 = gtk_button_new_with_label("Grade/Point");
	g_signal_connect(aornum2, "clicked", G_CALLBACK(a_num2), NULL);
	gtk_grid_attach(GTK_GRID(grid), aornum2, 4, 3, 1, 1);

	gradeabc2 = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gradeabc2, 5, 3, 1, 1);

	gradepoint2 = gtk_button_new_with_label("Grade Point");
	g_signal_connect(gradepoint2, "clicked", G_CALLBACK(grade_point2), NULL);
	gtk_grid_attach(GTK_GRID(grid), gradepoint2, 6, 3, 1, 1);

	gpresult2 = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gpresult2, 7, 3, 1, 1);

//grid shown for course 4
	coursecode3 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), coursecode3, 0, 4, 1, 1);

	score3 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), score3, 1, 4, 1, 1);

	unit3 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), unit3, 2, 4, 1, 1);

	choice3 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), choice3, 3, 4, 1, 1);

	aornum3 = gtk_button_new_with_label("Grade/Point");
	g_signal_connect(aornum3, "clicked", G_CALLBACK(a_num3), NULL);
	gtk_grid_attach(GTK_GRID(grid), aornum3, 4, 4, 1, 1);

	gradeabc3 = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gradeabc3, 5, 4, 1, 1);

	gradepoint3 = gtk_button_new_with_label("Grade Point");
	g_signal_connect(gradepoint3, "clicked", G_CALLBACK(grade_point3), NULL);
	gtk_grid_attach(GTK_GRID(grid), gradepoint3, 6, 4, 1, 1);

	 gpresult3 = gtk_label_new(":");
 	gtk_grid_attach(GTK_GRID(grid), gpresult3, 7, 4, 1, 1);	 

//grid for course 5
	coursecode4 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), coursecode4, 0, 14, 1, 1);

	score4 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), score4, 1, 14, 1, 1);

	unit4 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), unit4, 2, 14, 1, 1);

	choice4 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), choice4, 3, 14, 1, 1);

	aornum4 = gtk_button_new_with_label("Grade/Point");
	 g_signal_connect(aornum4, "clicked", G_CALLBACK(a_num4), NULL);
	gtk_grid_attach(GTK_GRID(grid), aornum4, 4, 14, 1, 1);

	gradeabc4 = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gradeabc4, 5, 14, 1, 1);

	gradepoint4 = gtk_button_new_with_label("Grade Point");
	g_signal_connect(gradepoint4, "clicked", G_CALLBACK(grade_point4), NULL);
	gtk_grid_attach(GTK_GRID(grid), gradepoint4, 6, 14, 1, 1);

	gpresult4 = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gpresult4, 7, 14, 1, 1);
//1st gpa

	stsemgpa = gtk_button_new_with_label("Click for GPA");
	g_signal_connect(stsemgpa, "clicked", G_CALLBACK(stgpa), NULL);
	gtk_grid_attach(GTK_GRID(grid), stsemgpa, 3, 8, 1, 1);

	gpares = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gpares, 4, 8, 1, 1);

//2nd semester
	ndsemf = gtk_label_new("SECOND SEMESTER");
	gtk_grid_attach(GTK_GRID(grid), ndsemf, 0, 10, 1, 1);

	coursecodef = gtk_label_new("Course Code");                                      gtk_grid_attach(GTK_GRID(grid), coursecodef, 0, 11, 1, 1);                                                                                                         scoref = gtk_label_new("Your Score");                                            gtk_grid_attach(GTK_GRID(grid), scoref, 1, 11, 1, 1);                                                                                                              unitf = gtk_label_new("Course Unit");                                            gtk_grid_attach(GTK_GRID(grid), unitf, 2, 11, 1, 1);                                                                                                               choicef = gtk_label_new("choose 1 or 2");                                        gtk_grid_attach(GTK_GRID(grid), choicef, 3, 11, 1, 1);
//grid for course 5
	coursecode5 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), coursecode5, 0, 12, 1, 1);
	
	score5 = gtk_entry_new();                                           gtk_grid_attach(GTK_GRID(grid), score5, 1, 12, 1, 1);
	
	unit5 = gtk_entry_new();                                            gtk_grid_attach(GTK_GRID(grid), unit5, 2, 12, 1, 1);
	
	choice5 = gtk_entry_new();                                          gtk_grid_attach(GTK_GRID(grid), choice5, 3, 12, 1, 1);
	
	aornum5 = gtk_button_new_with_label("Grade/Point");                  g_signal_connect(aornum5, "clicked", G_CALLBACK(a_num5), NULL);                                                                        gtk_grid_attach(GTK_GRID(grid), aornum5, 4, 12, 1, 1);
	
	gradeabc5 = gtk_label_new(":");                                     gtk_grid_attach(GTK_GRID(grid), gradeabc5, 5, 12, 1, 1);
	
	gradepoint5 = gtk_button_new_with_label("Grade Point");             g_signal_connect(gradepoint5, "clicked", G_CALLBACK(grade_point5), NULL);                                                               gtk_grid_attach(GTK_GRID(grid), gradepoint5, 6, 12, 1, 1);                                                                               gpresult5 = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), gpresult5, 7, 12, 1, 1);
// course 7
	coursecode6 = gtk_entry_new();                                                   gtk_grid_attach(GTK_GRID(grid), coursecode6, 0, 13, 1, 1);                                                                                                         score6 = gtk_entry_new();                                                        gtk_grid_attach(GTK_GRID(grid), score6, 1, 13, 1, 1);                                                                                                              unit6 = gtk_entry_new();                                                         gtk_grid_attach(GTK_GRID(grid), unit6, 2, 13, 1, 1);                                                                                                               choice6 = gtk_entry_new();                                                       gtk_grid_attach(GTK_GRID(grid), choice6, 3, 13, 1, 1);                                                                                                             aornum6 = gtk_button_new_with_label("Grade/Point");                               g_signal_connect(aornum6, "clicked", G_CALLBACK(a_num6), NULL);                 gtk_grid_attach(GTK_GRID(grid), aornum6, 4, 13, 1, 1);                                                                                                             gradeabc6 = gtk_label_new(":");                                                  gtk_grid_attach(GTK_GRID(grid), gradeabc6, 5, 13, 1, 1);                                                                                                           gradepoint6 = gtk_button_new_with_label("Grade Point");                          g_signal_connect(gradepoint6, "clicked", G_CALLBACK(grade_point6), NULL);        gtk_grid_attach(GTK_GRID(grid), gradepoint6, 6, 13, 1, 1);
	gpresult6 = gtk_label_new(":");                                                  gtk_grid_attach(GTK_GRID(grid), gpresult6, 7, 13, 1, 1);

//2nd sem gpa
	ndsemgpa = gtk_button_new_with_label("Click for GPA 2");                         g_signal_connect(ndsemgpa, "clicked", G_CALLBACK(ndgpa), NULL);                gtk_grid_attach(GTK_GRID(grid), ndsemgpa, 3, 15, 1, 1);                                                                                                        gpares2 = gtk_label_new(":");                                                   gtk_grid_attach(GTK_GRID(grid), gpares2, 4, 15, 1, 1);

//cgpa calc
	cgpab = gtk_button_new_with_label("Click for CGPA");
	g_signal_connect(cgpab, "clicked", G_CALLBACK(cgpaf), NULL);
	gtk_grid_attach(GTK_GRID(grid), cgpab, 2, 16, 1, 1);

	cgpares = gtk_label_new(":");
	gtk_grid_attach(GTK_GRID(grid), cgpares, 3, 16, 1, 1);

gtk_widget_show_all(window);
}

int main (int argc, char **argv){
GtkApplication *app;
gtk_init(&argc, &argv);

int ret;

app = gtk_application_new ("in.cgpaapp", G_APPLICATION_FLAGS_NONE);

g_signal_connect (app, "activate", G_CALLBACK(activate), NULL);
ret = g_application_run (G_APPLICATION(app), argc, argv);
g_object_unref (app);

return ret;
}
