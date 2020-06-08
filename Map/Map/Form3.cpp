#include "StdAfx.h"
#include "Form3.h"
#include "Form4.h"
namespace Map{
void Form3::button7_Click(System::Object^  sender, System::EventArgs^  e) {
			
//this->Hide();
Form4^ f1= gcnew Form4();
f1->ShowDialog();			 
			 // matrixs^ f1= gcnew matrixs();
             //f1->matrixsall();
}
}