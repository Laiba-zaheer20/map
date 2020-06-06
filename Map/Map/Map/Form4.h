#pragma once

#include "StdAfx.h"
#include "runit.h"
#include<String>

namespace Map {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  Distance;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Distance = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(226, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Distance";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSalmon;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(29, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(275, 291);
			this->panel1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(68, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Ginsoy", L"Optp", L"House 161", L"House 111", 
				L"House 181", L"House 121", L"Bun-B"});
			this->comboBox2->Location = System::Drawing::Point(122, 96);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(133, 24);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Ginsoy", L"Optp", L"House 161", L"House 111", 
				L"House 181", L"House 121", L"Bun-B"});
			this->comboBox1->Location = System::Drawing::Point(122, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(133, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Destination :";
			this->label2->Click += gcnew System::EventHandler(this, &Form4::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Location :";
			// 
			// Distance
			// 
			this->Distance->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Distance->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Distance->FormattingEnabled = true;
			this->Distance->ItemHeight = 21;
			this->Distance->Location = System::Drawing::Point(334, 132);
			this->Distance->Name = L"Distance";
			this->Distance->Size = System::Drawing::Size(359, 88);
			this->Distance->TabIndex = 4;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(721, 453);
			this->Controls->Add(this->Distance);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void two_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void one_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void ovalShape3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 runit^ f1= gcnew runit();
             int* p;
			 
			 int graph[9][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                     {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                     {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                     {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                     {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                     {0, 0, 4, 0, 10, 0, 2, 0, 0}, 
                     {0, 0, 0, 14, 0, 2, 0, 1, 6}, 
                     {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                     {0, 0, 2, 0, 0, 0, 6, 7, 0},
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
					
         String^ k=this->comboBox1->Text;
		 String^ m=this->comboBox2->Text;
		 int j;
		 int h;
		 for(int i=0;i<9;i++){
		 if(k==names[i])
		 {
		 j=i;
		 }
		 if(m==names[i]){
		 h=i;
		 }
		 }
	     
		 p=f1->dijkstra_for_distance(graph, j);
		this->Distance->Items->Clear();
		 this->Distance->Items->Add("The Shortest Distance You have to take ");
	     this->Distance->Items->Add("to reach "+ m +" from "+ k +" is of "+ *(p+h)+" km"); 

		 }
};
}
