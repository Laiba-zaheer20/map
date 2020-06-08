#pragma once

using namespace std; 

#define V 9
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

	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
     static array<String^>^ names = gcnew array<String^>(9);
       Form6(void)
		{
			InitializeComponent();
				    names[0]="Bun-B";
					names[1]="House 111";
					names[2]="Optp";
					names[3]="House 161";
					names[4]="KFC";
					names[5]="House 181";
					names[6]="Ginsoy";
					names[7]="Sams";
					names[8]="House 121";
       }

			
          
			
			// Does union of i and j. It returns 
			// false if i and j are already in same 
			// set. 
			
			// Finds MST using Kruskal's algorithm 
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 


	private: System::Windows::Forms::Button^  close;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form6::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(35, 12);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(540, 62);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Minimum Weighted Graph";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Teal;
			this->close->ForeColor = System::Drawing::Color::White;
			this->close->Location = System::Drawing::Point(447, 347);
			this->close->Margin = System::Windows::Forms::Padding(4);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(128, 47);
			this->close->TabIndex = 8;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Form6::close_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(12, 127);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(308, 276);
			this->listBox1->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Teal;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(447, 257);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 66);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Show Minimum Weighted Graph";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form6::button3_Click);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(619, 450);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form6";
			this->Text = L"Minimum Weighted Graph";
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

  public: System::Void kruskalMST1(int cost[][V]){
	
	int mincost = 0; // Cost of min MST. 
   int parent[V]; 

	// Initialize sets of disjoint sets. 
	for (int i = 0; i < V; i++) 
		parent[i] = i; 

	// Include minimum weight edges one by one 
	int edge_count = 0; 
	while (edge_count < V - 1) { 
	int min = 100, a = 0, b = 0;
	int i,j;
    for (i = 0; i < V; i++) { 
			for (j = 0; j < V; j++) { 
				
				int var1=i;
				int var2=j;
				
				while (parent[var1] != var1) 
					var1 = parent[var1]; 
					
				while (parent[var2] != var2) 
					var2 = parent[var2]; 
					
				if (var1 != var2 && cost[i][j] < min) { 
					min = cost[i][j]; 
					a = i; 
					b = j; 
				} 
			} 
		} 
                int var3=a;
				int var4=b;
				while (parent[var3] != var3) 
					var3 = parent[var3]; 
					
				while (parent[var4] != var4) 
					var4 = parent[var4];

	            parent[var3] = var4; 
	mincost += min; 
	this->listBox1->Items->Add("Edge"+ (edge_count) + " : ( "+ names[a] +" , "+names[b]+" )"+ " Cost: "+min);
	edge_count=edge_count+1;}

	this->listBox1->Items->Add("Minimum Cost : "+ mincost);		}


	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

								
 int cost[V][V] = {{100, 4, 100, 100, 100, 100, 100, 8, 100}, 
                       {4, 100, 8, 100, 100, 100, 100, 11, 100}, 
                        {100, 8, 100, 7, 100, 4, 100, 100, 2}, 
                        {100, 100, 7, 100, 9, 14, 100, 100, 100}, 
                        {100,100,100, 9,100, 10,100,100,100}, 
                        {100,100, 4,100, 10,100, 2,100,100}, 
                        {100,100,100, 14,100, 2,100, 1, 6}, 
                        {8, 11,100,100,100, 100, 1,100, 7}, 
                        {100,100, 2,100,100,100, 6, 7,100} 
                    };  

	// Print the solution 
	this->listBox1->Items->Clear();
	this->kruskalMST1(cost); 

}
private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->Close();
		 }
private: System::Void Form6_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 
								
 int cost[V][V] = {{100, 4, 100, 100, 100, 100, 100, 8, 100}, 
                       {4, 100, 8, 100, 100, 100, 100, 11, 100}, 
                        {100, 8, 100, 7, 100, 4, 100, 100, 2}, 
                        {100, 100, 7, 100, 9, 14, 100, 100, 100}, 
                        {100,100,100, 9,100, 10,100,100,100}, 
                        {100,100, 4,100, 10,100, 2,100,100}, 
                        {100,100,100, 14,100, 2,100, 1, 6}, 
                        {8, 11,100,100,100, 100, 1,100, 7}, 
                        {100,100, 2,100,100,100, 6, 7,100} 
                    };  

	// Print the solution 
	this->listBox1->Items->Clear();
	this->kruskalMST1(cost); 


		 }
};
}
