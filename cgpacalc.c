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
static GtkWidget *choice;
static GtkWidget *choicef;
static GtkWidget *gpresult;
static GtkWidget *cgparesult;
static GtkWidget *gradeabc;

static void grade_point(GtkWidget *gradepoint, gpointer data){
	int unitp;
	int grad = atoi((char *)gtk_entry_get_text(GTK_ENTRY(unit)));
	int scor  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score)));

	if (scor >= 80 && scor <= 100){
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

static void a_num(GtkWidget *aornum, gpointer data){
	int pick  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(choice)));
	int scor  = atoi((char *)gtk_entry_get_text(GTK_ENTRY(score))); 
	switch (pick) {
		case 1:
			if (scor >= 80 && scor <= 100){
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
			if (scor >= 80 && scor <= 100){
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

static void activate (GtkApplication *app, gpointer user_data) {
GtkWidget *window, *grid, *gradepoint, *aornum;

window = gtk_application_window_new(app);
gtk_window_set_title(GTK_WINDOW (window), "CGPA CALCULATION APP");
gtk_window_set_default_size(GTK_WINDOW (window), 700, 500);
gtk_window_set_position(GTK_WINDOW (window), GTK_WIN_POS_CENTER);

 //define what a grid looks like
        grid = gtk_grid_new();
        gtk_container_add(GTK_CONTAINER(window), grid);

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
