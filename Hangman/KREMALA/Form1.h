#pragma once

namespace KREMALA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		static int x=0;
		     
		     array <Label^> ^ labels;
			 array <Button^> ^ buttons;
			 array <Label^>^ labels2;
			 String ^a;
			 String ^a2;
			 String ^a3;

	public: 

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label24;


	public: 

		String ^G;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			buttons= gcnew array <Button^> {button1,button2,button3,button4,button5,button6,button7,button8,button9,button10,button11,button12,button13,button14,button15,button16,button17,button18,button19,button20,button21,button22,button23,button24};
		    labels=gcnew array <Label^> {label1,label2,label3,label4,label5,label6,label7,label8,label9,label10};
			labels2=gcnew array <Label^> {label11,label12,label13,label14,label15,label16,label17,label18,label19,label20};
			 
		}
		
	private: System::Windows::Forms::Button^  button1;
	public: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Panel^  panel1;
			 String ^b;

	public: 
		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button25;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->textBox1->Location = System::Drawing::Point(340, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 24);
			this->textBox1->TabIndex = 34;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(190, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(23, 17);
			this->textBox2->TabIndex = 37;
			this->textBox2->Visible = false;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(521, 39);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(97, 30);
			this->button25->TabIndex = 38;
			this->button25->Text = L"ΠΑΙΞΕ";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(29, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Α";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(95, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Β";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(154, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Γ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(216, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Δ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(280, 11);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Ε";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(339, 11);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Ζ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(29, 40);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Η";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(95, 40);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Θ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(154, 40);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(51, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Ι";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(216, 40);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(51, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Κ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(280, 40);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(51, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Λ";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(339, 40);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(51, 23);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Μ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(29, 69);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(51, 23);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Ν";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(95, 69);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(51, 23);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Ξ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(154, 69);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(51, 23);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Ο";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(216, 69);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(51, 23);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Π";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(280, 69);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(51, 23);
			this->button17->TabIndex = 16;
			this->button17->Text = L"Ρ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(339, 69);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(51, 23);
			this->button18->TabIndex = 17;
			this->button18->Text = L"Σ";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(29, 98);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(51, 23);
			this->button19->TabIndex = 18;
			this->button19->Text = L"Τ";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(95, 98);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(51, 23);
			this->button20->TabIndex = 19;
			this->button20->Text = L"Υ";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(154, 98);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(51, 23);
			this->button21->TabIndex = 20;
			this->button21->Text = L"Φ";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(216, 98);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(51, 23);
			this->button22->TabIndex = 21;
			this->button22->Text = L"Χ";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(280, 98);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(51, 23);
			this->button23->TabIndex = 22;
			this->button23->Text = L"Ψ";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(339, 98);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(51, 23);
			this->button24->TabIndex = 23;
			this->button24->Text = L"Ω";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(103, 224);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(407, 141);
			this->panel1->TabIndex = 39;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label11->Location = System::Drawing::Point(142, 154);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 39);
			this->label11->TabIndex = 50;
			this->label11->Text = L"_";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label12->Location = System::Drawing::Point(183, 154);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 39);
			this->label12->TabIndex = 51;
			this->label12->Text = L"_";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label13->Location = System::Drawing::Point(224, 154);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 39);
			this->label13->TabIndex = 52;
			this->label13->Text = L"_";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label14->Location = System::Drawing::Point(261, 154);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 39);
			this->label14->TabIndex = 53;
			this->label14->Text = L"_";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label15->Location = System::Drawing::Point(302, 154);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 39);
			this->label15->TabIndex = 54;
			this->label15->Text = L"_";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label16->Location = System::Drawing::Point(343, 154);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 39);
			this->label16->TabIndex = 55;
			this->label16->Text = L"_";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label17->Location = System::Drawing::Point(387, 154);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 39);
			this->label17->TabIndex = 56;
			this->label17->Text = L"_";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label18->Location = System::Drawing::Point(428, 154);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 39);
			this->label18->TabIndex = 57;
			this->label18->Text = L"_";
			this->label18->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label19->Location = System::Drawing::Point(468, 154);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 39);
			this->label19->TabIndex = 58;
			this->label19->Text = L"_";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label20->Location = System::Drawing::Point(501, 154);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 39);
			this->label20->TabIndex = 59;
			this->label20->Text = L"_";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label21->Location = System::Drawing::Point(12, 48);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(322, 16);
			this->label21->TabIndex = 60;
			this->label21->Text = L"Δώστε μια λέξη(Ελληνικά-μέχρι 10 γράμματα):";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label22->Location = System::Drawing::Point(129, 75);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(57, 18);
			this->label22->TabIndex = 61;
			this->label22->Text = L"Λάθοι:";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label23->Location = System::Drawing::Point(205, 75);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(27, 18);
			this->label23->TabIndex = 62;
			this->label23->Text = L"/ 5";
			this->label23->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(144, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 29);
			this->label1->TabIndex = 40;
			this->label1->Text = L"1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(185, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 41;
			this->label2->Text = L"1";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label3->Location = System::Drawing::Point(226, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 29);
			this->label3->TabIndex = 42;
			this->label3->Text = L"1";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label4->Location = System::Drawing::Point(263, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 29);
			this->label4->TabIndex = 43;
			this->label4->Text = L"1";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label5->Location = System::Drawing::Point(304, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 29);
			this->label5->TabIndex = 44;
			this->label5->Text = L"1";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label6->Location = System::Drawing::Point(345, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 29);
			this->label6->TabIndex = 45;
			this->label6->Text = L"1";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label7->Location = System::Drawing::Point(389, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 29);
			this->label7->TabIndex = 46;
			this->label7->Text = L"1";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label8->Location = System::Drawing::Point(430, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 29);
			this->label8->TabIndex = 47;
			this->label8->Text = L"1";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label9->Location = System::Drawing::Point(468, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 29);
			this->label9->TabIndex = 48;
			this->label9->Text = L"1";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(161)));
			this->label10->Location = System::Drawing::Point(501, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 29);
			this->label10->TabIndex = 49;
			this->label10->Text = L"1";
			this->label10->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(161)));
			this->label24->Location = System::Drawing::Point(484, 384);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(153, 18);
			this->label24->TabIndex = 63;
			this->label24->Text = L"Made by George K.";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(649, 411);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"ΚΡΕΜΑΛΑ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text->Length>10) MessageBox::Show("Η λέξη θα πρέπει να είναι το πολύ 10 γράμματα");
				 else if (textBox1->Text->Length==0) MessageBox::Show("Παρακαλώ γράψτε μια λέξη");
				 else 
				 {
				 textBox2->Text=Convert::ToString(x);
				 textBox1->Hide();
				 label21->Hide();
				 button25->Hide();
				 label22->Show();
				 label23->Show();
				 textBox2->Show();
				 panel1->Show();  
				 int i;
				 a=textBox1->Text;
				 for (i=0; i<a->Length; i++) 
			        {
				      labels2[i]->Show();
			        }
				 }

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {	 
			 textBox1->Text=textBox1->Text->ToUpper();
			 int k=0;
			 static int win=0;
			 a=textBox1->Text;
			 a2=textBox1->Text;
			 bool shown=false;
			 int index;
			 String ^ ex=L"1";
		
			 do
			 {
				if (sender==buttons[k]) 
				{
					b=buttons[k]->Text;

							if (a->IndexOf(b)==-1)
								{ 
									x++;
									textBox2->Text=Convert::ToString(x); 
									shown=true;		
								}			 
							else 
								{
									
									shown=true;
									if ( labels[a->IndexOf(b)]->Text->Contains(L"1")==true){
									labels[a->IndexOf(b)]->Text=b;
									labels[a->IndexOf(b)]->Show(); 
									win++;
									shown=true;
									
									index=a->IndexOf(b);
											a2=a->Remove(index,1);
											a2=a2->Insert(index," ");
											if (a2->IndexOf(b) != -1) 
											{
												labels[a2->IndexOf(b)]->Text=b;
												labels[a2->IndexOf(b)]->Show(); 
												win++;
												index=a2->IndexOf(b);
												a2=a2->Remove(index,1);
												a2=a2->Insert(index," ");
												if (a2->IndexOf(b) != -1)
												{
													labels[a2->IndexOf(b)]->Text=b;
													labels[a2->IndexOf(b)]->Show();
													win++;
												}
											}																																						 																		  
									}
								} 

							if (win==a->Length)
								{
									MessageBox::Show("Μπράβο βρήκες την λέξη!");
									this->Close();
								}
							if (x==5)
							{
								MessageBox::Show("Έχασες!");
								this->Close();
							}
				 }
				k++;
			 }while(shown==false);     
			 
		  }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Hide();
			 
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}

