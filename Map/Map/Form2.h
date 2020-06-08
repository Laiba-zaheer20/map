#pragma once
#include "StdAfx.h"
#include "runit.h"
namespace Map {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using  System::Int32;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
			public: 
		int current_location;
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::Label^  label1;


	public: 
		int destination;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	protected: 
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  e13;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  e34;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  e24;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  e12;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  two;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  three;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  four;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  one;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;



	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->e13 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->e34 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->e24 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->e12 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->two = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->three = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->four = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->one = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(8) {this->e13, this->e34, 
				this->e24, this->e12, this->two, this->three, this->four, this->one});
			this->shapeContainer1->Size = System::Drawing::Size(665, 375);
			this->shapeContainer1->TabIndex = 0;
			this->shapeContainer1->TabStop = false;
			// 
			// e13
			// 
			this->e13->Name = L"e13";
			this->e13->X1 = 172;
			this->e13->X2 = 252;
			this->e13->Y1 = 171;
			this->e13->Y2 = 232;
			// 
			// e34
			// 
			this->e34->Name = L"e34";
			this->e34->X1 = 288;
			this->e34->X2 = 360;
			this->e34->Y1 = 233;
			this->e34->Y2 = 192;
			// 
			// e24
			// 
			this->e24->Name = L"e24";
			this->e24->X1 = 290;
			this->e24->X2 = 360;
			this->e24->Y1 = 115;
			this->e24->Y2 = 173;
			// 
			// e12
			// 
			this->e12->Name = L"e12";
			this->e12->X1 = 173;
			this->e12->X2 = 257;
			this->e12->Y1 = 152;
			this->e12->Y2 = 114;
			// 
			// two
			// 
			this->two->Location = System::Drawing::Point(256, 85);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(39, 34);
			this->two->Click += gcnew System::EventHandler(this, &Form2::two_Click_1);
			// 
			// three
			// 
			this->three->Location = System::Drawing::Point(251, 223);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(39, 34);
			// 
			// four
			// 
			this->four->Location = System::Drawing::Point(358, 165);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(39, 34);
			// 
			// one
			// 
			this->one->Location = System::Drawing::Point(136, 143);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(39, 34);
			this->one->Click += gcnew System::EventHandler(this, &Form2::one_Click_1);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"current";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton1_CheckedChanged_1);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(116, 0);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(76, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"destination";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(503, 328);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(117, 35);
			this->exit->TabIndex = 4;
			this->exit->Text = L"exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &Form2::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(440, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(665, 375);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->shapeContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				
		//al necessary functions
			bool is_restaurant(int a,array <int^>^restaurant) {
		int size=2;
		int i;
		bool f;
		for(i=0;i<size;i++){
			if(restaurant[i]=a)
				f=true;
		}
		if(f)
			return true;
		else 
			return false;
	}
		bool is_school(int a,int school[]){
		int size=1;
		int i;
		for(i=0;i<size;i++){
			if(school[i]=a)
				return true;
		}
		return false;
	}
		bool is_current_location(int a,int current_location){
	
			if(current_location=a)
				return true;
		return false;
	}
		bool is_destination(int a,int destination){
	
			if(current_location=a)
				return true;
		return false;
	}
		//end
	
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		//variable declaration
			   array<int, 2>^ graph = gcnew array<int, 2>(4, 4);
			      array<int^>^ school = gcnew array<int^>(1);
				     array<int^>^ restaurant = gcnew array<int^>(2);
					 int p=restaurant->Length;
					 int current_location=-1;
					 //definition
					 	school[0]=1;
						restaurant[0]=2;
						restaurant[1]=3;
						graph[0,1]=10;
						graph[0,2]=20;
						graph[1,0]=20;
						graph[1,3]=24;
						graph[2,0]=10;
						graph[2,3]=30;
						graph[3,1]=24;
						graph[3,2]=30;
						//methods declaration
	
               int f=graph[0,1];
			   if(f==10)
				label1->Text="hi";
			   static bool k=is_restaurant(2,restaurant);
				if(k)
					label1->Text=k.ToString();
                
				//label1->Text=graph[0,0].ToString();
			}//end form2

			 				  private: System::Void one_Click_1(System::Object^  sender, System::EventArgs^  e) {
								   if(Form2::current_location<0)
									   Form2::destination=0;
			  else 
				  Form2::current_location=0;
				 one->BorderColor=System::Drawing::Color::Green;
				 if( two->BorderColor!=System::Drawing::Color::Red)
				 two->BorderColor=System::Drawing::Color::Blue;
				  if( three->BorderColor!=System::Drawing::Color::Red)
				 three->BorderColor=System::Drawing::Color::Blue;
				  if( four->BorderColor!=System::Drawing::Color::Red)
				  four->BorderColor=System::Drawing::Color::Blue;
		 }
			
private: System::Void two_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  if(Form2::current_location<0)
					Form2::destination=1;
			  else
			  Form2::current_location=1;
				 two->BorderColor=System::Drawing::Color::Green;
				  if( one->BorderColor!=System::Drawing::Color::Red)
				 one->BorderColor=System::Drawing::Color::Blue;
				  if( three->BorderColor!=System::Drawing::Color::Red)
				  three->BorderColor=System::Drawing::Color::Blue;
				  if( four->BorderColor!=System::Drawing::Color::Red)
				  four->BorderColor=System::Drawing::Color::Blue;
		 }
private: System::Void three_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  if(Form2::current_location<0)
					 Form2::destination=2; 
			  else
			 Form2::current_location=2;
				 three->BorderColor=System::Drawing::Color::Green;
				  if( two->BorderColor!=System::Drawing::Color::Red)
				 two->BorderColor=System::Drawing::Color::Blue;
				   if( one->BorderColor!=System::Drawing::Color::Red)
				 one->BorderColor=System::Drawing::Color::Blue;
				  if( four->BorderColor!=System::Drawing::Color::Red)
				   four->BorderColor=System::Drawing::Color::Blue;
		 }

private: System::Void four_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  if(Form2::current_location<0)
					Form2::destination=3;
			  else 
			 Form2::current_location=3;
				 four->BorderColor=System::Drawing::Color::Green;
				  if( two->BorderColor!=System::Drawing::Color::Red)
				 two->BorderColor=System::Drawing::Color::Blue;
				   if( three->BorderColor!=System::Drawing::Color::Red)
				 three->BorderColor=System::Drawing::Color::Blue;
				  if( one->BorderColor!=System::Drawing::Color::Red)
				   one->BorderColor=System::Drawing::Color::Blue;
				// Form2::label1->Text=Form2::current_location.ToString();
		 }
		 //fgfgfdh

				
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			  
if(Form2::radioButton1->Checked == false){
			//  if( two->BorderColor==System::Drawing::Color::Red)
				  if(Form2::current_location==0){
					  Form2::label1->Text=Form2::current_location.ToString();
						Form2::one->Enabled=false;
						Form2::one->BorderColor=System::Drawing::Color::Red;
				  }
				  else  if(Form2::current_location==1){
					  Form2::label1->Text=Form2::current_location.ToString();
						Form2::two->Enabled=false;
						Form2::two->BorderColor=System::Drawing::Color::Red;
				  }
				  else  if(Form2::current_location==2){
					  Form2::label1->Text=Form2::current_location.ToString();
						Form2::three->Enabled=false;
						Form2::three->BorderColor=System::Drawing::Color::Red;
				  }
				  else  if(Form2::current_location==3){
					  Form2::label1->Text=Form2::current_location.ToString();
						Form2::four->Enabled=false;
						Form2::four->BorderColor=System::Drawing::Color::Red;
				  }

}//if false
else {
		Form2::one->Enabled=true;
		Form2::two->Enabled=true;
		Form2::three->Enabled=true;
		Form2::four->Enabled=true;
}//else
}

private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
         	this->Hide();
			Application::Exit();

		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}
