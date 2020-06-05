#pragma once
#include "matrixs.h"
#include "Form4.h"
namespace Map {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;








	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;














	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape8;



	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;



	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;



	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape6;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape5;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape4;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape12;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape10;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape9;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape8;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape9 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape10 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape12 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(200, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(326, 77);
			this->button1->TabIndex = 1;
			this->button1->Text = L"MAP";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(12) {this->lineShape12, 
				this->lineShape10, this->lineShape9, this->lineShape8, this->lineShape7, this->lineShape6, this->lineShape5, this->lineShape4, 
				this->lineShape3, this->lineShape2, this->lineShape1, this->ovalShape8});
			this->shapeContainer1->Size = System::Drawing::Size(763, 485);
			this->shapeContainer1->TabIndex = 2;
			this->shapeContainer1->TabStop = false;
			// 
			// ovalShape8
			// 
			this->ovalShape8->Location = System::Drawing::Point(-47, 259);
			this->ovalShape8->Name = L"ovalShape8";
			this->ovalShape8->Size = System::Drawing::Size(39, 34);
			this->ovalShape8->Click += gcnew System::EventHandler(this, &Form3::one_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->shapeContainer2);
			this->panel1->Location = System::Drawing::Point(12, 98);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(183, 337);
			this->panel1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(18, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 46);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Adjancency List";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(18, 94);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(142, 82);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Shortest Distance Between Location";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(18, 182);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 46);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Nearest Location";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(18, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 46);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Nearest Location";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->ovalShape1});
			this->shapeContainer2->Size = System::Drawing::Size(183, 337);
			this->shapeContainer2->TabIndex = 21;
			this->shapeContainer2->TabStop = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->Location = System::Drawing::Point(126, 136);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(109, 49);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(24, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sams";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Location = System::Drawing::Point(16, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ginsoy";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Click += gcnew System::EventHandler(this, &Form3::label2_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Location = System::Drawing::Point(16, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"House 111";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Click += gcnew System::EventHandler(this, &Form3::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Location = System::Drawing::Point(27, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Bun-B";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 32);
			this->label5->TabIndex = 9;
			this->label5->Text = L"House 161";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label6.Image")));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label6->Location = System::Drawing::Point(26, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 32);
			this->label6->TabIndex = 10;
			this->label6->Text = L"KFC";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Click += gcnew System::EventHandler(this, &Form3::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label7.Image")));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Location = System::Drawing::Point(3, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 35);
			this->label7->TabIndex = 11;
			this->label7->Text = L"House 121";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Click += gcnew System::EventHandler(this, &Form3::label7_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label8.Image")));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label8->Location = System::Drawing::Point(3, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 32);
			this->label8->TabIndex = 12;
			this->label8->Text = L"House 181";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Click += gcnew System::EventHandler(this, &Form3::label8_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label9.Image")));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label9->Location = System::Drawing::Point(21, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 32);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Optp";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(247, 277);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(112, 41);
			this->panel2->TabIndex = 14;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(401, 103);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(114, 37);
			this->panel3->TabIndex = 15;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(475, 394);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(108, 38);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form3::panel4_Paint);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label8);
			this->panel5->Location = System::Drawing::Point(266, 392);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(122, 43);
			this->panel5->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(247, 158);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(112, 38);
			this->panel6->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label7);
			this->panel7->Location = System::Drawing::Point(358, 237);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(116, 35);
			this->panel7->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label9);
			this->panel8->Location = System::Drawing::Point(592, 234);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(124, 38);
			this->panel8->TabIndex = 16;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label5);
			this->panel9->Location = System::Drawing::Point(560, 329);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(121, 39);
			this->panel9->TabIndex = 0;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label3);
			this->panel10->Location = System::Drawing::Point(585, 158);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(140, 38);
			this->panel10->TabIndex = 0;
			// 
			// lineShape1
			// 
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 454;
			this->lineShape1->X2 = 407;
			this->lineShape1->Y1 = 152;
			this->lineShape1->Y2 = 227;
			this->lineShape1->Click += gcnew System::EventHandler(this, &Form3::lineShape1_Click);
			// 
			// lineShape2
			// 
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 422;
			this->lineShape2->X2 = 473;
			this->lineShape2->Y1 = 281;
			this->lineShape2->Y2 = 392;
			// 
			// lineShape3
			// 
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = 519;
			this->lineShape3->X2 = 605;
			this->lineShape3->Y1 = 123;
			this->lineShape3->Y2 = 146;
			// 
			// lineShape4
			// 
			this->lineShape4->Name = L"lineShape4";
			this->lineShape4->X1 = 305;
			this->lineShape4->X2 = 324;
			this->lineShape4->Y1 = 326;
			this->lineShape4->Y2 = 384;
			this->lineShape4->Click += gcnew System::EventHandler(this, &Form3::lineShape4_Click);
			// 
			// lineShape5
			// 
			this->lineShape5->Name = L"lineShape5";
			this->lineShape5->X1 = 295;
			this->lineShape5->X2 = 293;
			this->lineShape5->Y1 = 202;
			this->lineShape5->Y2 = 272;
			// 
			// lineShape6
			// 
			this->lineShape6->Name = L"lineShape6";
			this->lineShape6->X1 = 306;
			this->lineShape6->X2 = 399;
			this->lineShape6->Y1 = 155;
			this->lineShape6->Y2 = 113;
			// 
			// lineShape7
			// 
			this->lineShape7->Name = L"lineShape7";
			this->lineShape7->X1 = 638;
			this->lineShape7->X2 = 608;
			this->lineShape7->Y1 = 276;
			this->lineShape7->Y2 = 320;
			// 
			// lineShape8
			// 
			this->lineShape8->Name = L"lineShape8";
			this->lineShape8->X1 = 641;
			this->lineShape8->X2 = 641;
			this->lineShape8->Y1 = 199;
			this->lineShape8->Y2 = 224;
			// 
			// lineShape9
			// 
			this->lineShape9->Name = L"lineShape9";
			this->lineShape9->X1 = 396;
			this->lineShape9->X2 = 452;
			this->lineShape9->Y1 = 416;
			this->lineShape9->Y2 = 415;
			// 
			// lineShape10
			// 
			this->lineShape10->Name = L"lineShape10";
			this->lineShape10->X1 = 506;
			this->lineShape10->X2 = 568;
			this->lineShape10->Y1 = 146;
			this->lineShape10->Y2 = 322;
			// 
			// lineShape12
			// 
			this->lineShape12->Name = L"lineShape12";
			this->lineShape12->X1 = 638;
			this->lineShape12->X2 = 592;
			this->lineShape12->Y1 = 378;
			this->lineShape12->Y2 = 410;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(763, 485);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->shapeContainer1);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void two_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void one_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ovalShape3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			
this->Hide();
Form4^ f1= gcnew Form4();
f1->ShowDialog();			 
			 // matrixs^ f1= gcnew matrixs();
             //f1->matrixsall();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ovalShape3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ovalShape2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lineShape4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lineShape1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
