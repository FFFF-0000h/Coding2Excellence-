/* Knowing the 3 marks obtained by a student in the computer science subject throughout a semester and the grade from the final exam, write a program to display their average. The 4 values are read from the keyboard. */

#include <iostream>

using namespace std;

int main()
{
	int m1,m2,m3,fin;
	float marks_avg,final_avg;
	///Reading data from keyboard
	cout<<"Input first Score=";
	cin>>m1;
	cout<<"Input second Score=";
	cin>>m2;
	cout<<"Input third Score=";
	cin>>m3;
	cout<<"Input exam Score=";
	cin>>fin;
	///Calculating the average of the semester alone
	marks_avg = (m1+m2+m3) / 3;
	///Calculating the final average including the exam
	///Assuming all components are not weighted equally
	///That means the semester scores are 75% or 3 times the exam (25%)
	final_avg = (3 * marks_avg + 1 * fin) / 4;
	cout<<"Total average = "<<final_avg;
}
