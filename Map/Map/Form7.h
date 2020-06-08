#pragma once
#include "StdAfx.h"
#include<String>
namespace Map {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  Nearest_Location;
	private: System::Windows::Forms::Button^  close;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form7::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Nearest_Location = (gcnew System::Windows::Forms::ListBox());
			this->close = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18.2F));
			this->button1->Location = System::Drawing::Point(159, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 63);
			this->button1->TabIndex = 2;
			this->button1->Text = L"NEAREST RESTAURANT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSalmon;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(11, 103);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(210, 122);
			this->panel1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(62, 80);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form7::button2_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Ginsoy", L"Optp", L"House 161", L"House 111", 
				L"House 181", L"House 121", L"Bun-B"});
			this->comboBox3->Location = System::Drawing::Point(92, 40);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(101, 21);
			this->comboBox3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 31);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 37);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Current Location :";
			// 
			// Nearest_Location
			// 
			this->Nearest_Location->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Nearest_Location->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Nearest_Location->FormattingEnabled = true;
			this->Nearest_Location->ItemHeight = 18;
			this->Nearest_Location->Location = System::Drawing::Point(225, 106);
			this->Nearest_Location->Margin = System::Windows::Forms::Padding(2);
			this->Nearest_Location->Name = L"Nearest_Location";
			this->Nearest_Location->Size = System::Drawing::Size(356, 76);
			this->Nearest_Location->TabIndex = 6;
			this->Nearest_Location->SelectedIndexChanged += gcnew System::EventHandler(this, &Form7::Nearest_Location_SelectedIndexChanged);
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Teal;
			this->close->ForeColor = System::Drawing::Color::White;
			this->close->Location = System::Drawing::Point(506, 272);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(75, 29);
			this->close->TabIndex = 7;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Form7::close_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(612, 313);
			this->Controls->Add(this->close);
			this->Controls->Add(this->Nearest_Location);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"Form7";
			this->Text = L"Nearest Restaurant";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  	
			 int graph[9][9] = {
		/*bun b*/		     {0, 4, 0, 0, 0, 0, 0, 8, 0}, 
    /*house 111*/            {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
            /*optp*/         {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
            /*house 161*/    {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
    /*kfc*/                  {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
     /*house 181*/           {0, 0, 4, 0, 10, 0, 2, 0, 0}, 
   /*ginsoy*/                {0, 0, 0, 14, 0, 2, 0, 1, 6}, 
   /*sams*/                  {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
    /*house 121*/            {0, 0, 2, 0, 0, 0, 6, 7, 0},
                    };

			  array<String^>^ names = gcnew array<String^>(9);
				    names[0]="Bun-B";
					names[1]="House 111";
					names[2]="Optp";
					names[3]="House 161";
					names[4]="KFC";
					names[5]="House 181";
					names[6]="Ginsoy";
					names[7]="Sams";
					names[8]="House 121";
			 
         String^ n=this->comboBox3->Text;
		
		 int j;
		
		 int r;
		   String^ d;
		 for(int i=0;i<9;i++){
		 if(n==names[i])   //getting the index of current location
		 j=i;
		 }
		 int i;
		 for(  i=1;graph[j][i]==0;i++){
		 }
		 int min=graph[j][i];//to get first non zero value
		  for(i;i<9;i++){
   			    if(graph[j][i]<min){
				if(graph[j][i]!=0){
				 min=graph[j][i];
				r=i;//index of the shortest distance
				}//end if
				}//end if
		 }//end for
		
		d=names[r];
		   this->Nearest_Location->Items->Clear();
		 this->Nearest_Location->Items->Add("The Nearest Restaurant from your current location is : ");
	    this->Nearest_Location->Items->Add(d); 
		 this->Nearest_Location->Items->Add("It's distance from here is "+min+" km");
	
		 }//end function
		
private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Nearest_Location_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
