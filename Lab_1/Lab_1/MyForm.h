#pragma once
#include "MetricMatrixRelation.h"
#include <string>

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Create1->SelectedIndex = 0;
			Create2->SelectedIndex = 0;
			Create3->SelectedIndex = 0;
			Operation->SelectedIndex = 0;
			firstRelation->SelectedIndex = 0;
			secondRelation->SelectedIndex = 1;
			Distance1->SelectedIndex = 0;
			Distance2->SelectedIndex = 1;
			comboBox1->SelectedIndex = 0;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCreate;
	protected:

	private: System::Windows::Forms::Label^ label1;

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ Create1;
	private: System::Windows::Forms::ComboBox^ Create2;
	private: System::Windows::Forms::ComboBox^ Create3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ SizeTXT;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::ComboBox^ Operation;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ firstRelation;
	private: System::Windows::Forms::ComboBox^ secondRelation;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ ChekedBtn;







	private: System::Windows::Forms::Label^ P1;
	private: System::Windows::Forms::Label^ P2;
	private: System::Windows::Forms::Label^ P3;
	private: System::Windows::Forms::Label^ P4;
	private: System::Windows::Forms::Label^ P5;
	private: System::Windows::Forms::Label^ P6;
	private: System::Windows::Forms::Label^ P7;
	private: System::Windows::Forms::Label^ P8;
	private: System::Windows::Forms::Label^ Q8;

	private: System::Windows::Forms::Label^ Q7;

	private: System::Windows::Forms::Label^ Q6;

	private: System::Windows::Forms::Label^ Q5;

	private: System::Windows::Forms::Label^ Q4;

	private: System::Windows::Forms::Label^ Q3;

	private: System::Windows::Forms::Label^ Q2;

	private: System::Windows::Forms::Label^ Q1;
	private: System::Windows::Forms::Label^ R8;


	private: System::Windows::Forms::Label^ R7;

	private: System::Windows::Forms::Label^ R6;

	private: System::Windows::Forms::Label^ R5;

	private: System::Windows::Forms::Label^ R4;

	private: System::Windows::Forms::Label^ R3;

	private: System::Windows::Forms::Label^ R2;

	private: System::Windows::Forms::Label^ R1;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ RelationP;
	private: System::Windows::Forms::Panel^ RelationQ;
	private: System::Windows::Forms::Panel^ RelationR;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ ResulRelation;

	private: System::Windows::Forms::Panel^ RelationPanel;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ RelationOperation;

	private: System::Windows::Forms::Button^ OperationBtn;
	private: System::Windows::Forms::CheckBox^ checkRelationR;
	private: System::Windows::Forms::CheckBox^ checkRelationQ;



	private: System::Windows::Forms::CheckBox^ checkRelationP;
	private: System::Windows::Forms::Label^ P17;

	private: System::Windows::Forms::Label^ P16;

	private: System::Windows::Forms::Label^ P15;

	private: System::Windows::Forms::Label^ P14;

	private: System::Windows::Forms::Label^ P13;

	private: System::Windows::Forms::Label^ P12;

	private: System::Windows::Forms::Label^ P11;
	private: System::Windows::Forms::Label^ Q17;

	private: System::Windows::Forms::Label^ Q16;

	private: System::Windows::Forms::Label^ Q15;

	private: System::Windows::Forms::Label^ Q14;

	private: System::Windows::Forms::Label^ Q13;

	private: System::Windows::Forms::Label^ Q12;

	private: System::Windows::Forms::Label^ Q11;
	private: System::Windows::Forms::Label^ R17;

	private: System::Windows::Forms::Label^ R16;

	private: System::Windows::Forms::Label^ R15;

	private: System::Windows::Forms::Label^ R14;

	private: System::Windows::Forms::Label^ R13;

	private: System::Windows::Forms::Label^ R12;

	private: System::Windows::Forms::Label^ R11;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ Distance2;

	private: System::Windows::Forms::ComboBox^ Distance1;

	private: System::Windows::Forms::Button^ Btn_Distance;



	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ ResultDist;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ add_btn;



	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ ClearMatrixforR_btn;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ListBox^ listBoxResult;





















































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Create1 = (gcnew System::Windows::Forms::ComboBox());
			this->Create2 = (gcnew System::Windows::Forms::ComboBox());
			this->Create3 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SizeTXT = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Operation = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->firstRelation = (gcnew System::Windows::Forms::ComboBox());
			this->secondRelation = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ChekedBtn = (gcnew System::Windows::Forms::Button());
			this->P1 = (gcnew System::Windows::Forms::Label());
			this->P2 = (gcnew System::Windows::Forms::Label());
			this->P3 = (gcnew System::Windows::Forms::Label());
			this->P4 = (gcnew System::Windows::Forms::Label());
			this->P5 = (gcnew System::Windows::Forms::Label());
			this->P6 = (gcnew System::Windows::Forms::Label());
			this->P7 = (gcnew System::Windows::Forms::Label());
			this->P8 = (gcnew System::Windows::Forms::Label());
			this->Q8 = (gcnew System::Windows::Forms::Label());
			this->Q7 = (gcnew System::Windows::Forms::Label());
			this->Q6 = (gcnew System::Windows::Forms::Label());
			this->Q5 = (gcnew System::Windows::Forms::Label());
			this->Q4 = (gcnew System::Windows::Forms::Label());
			this->Q3 = (gcnew System::Windows::Forms::Label());
			this->Q2 = (gcnew System::Windows::Forms::Label());
			this->Q1 = (gcnew System::Windows::Forms::Label());
			this->R8 = (gcnew System::Windows::Forms::Label());
			this->R7 = (gcnew System::Windows::Forms::Label());
			this->R6 = (gcnew System::Windows::Forms::Label());
			this->R5 = (gcnew System::Windows::Forms::Label());
			this->R4 = (gcnew System::Windows::Forms::Label());
			this->R3 = (gcnew System::Windows::Forms::Label());
			this->R2 = (gcnew System::Windows::Forms::Label());
			this->R1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->RelationP = (gcnew System::Windows::Forms::Panel());
			this->P17 = (gcnew System::Windows::Forms::Label());
			this->P16 = (gcnew System::Windows::Forms::Label());
			this->P15 = (gcnew System::Windows::Forms::Label());
			this->P14 = (gcnew System::Windows::Forms::Label());
			this->P13 = (gcnew System::Windows::Forms::Label());
			this->P12 = (gcnew System::Windows::Forms::Label());
			this->P11 = (gcnew System::Windows::Forms::Label());
			this->RelationQ = (gcnew System::Windows::Forms::Panel());
			this->Q17 = (gcnew System::Windows::Forms::Label());
			this->Q16 = (gcnew System::Windows::Forms::Label());
			this->Q15 = (gcnew System::Windows::Forms::Label());
			this->Q14 = (gcnew System::Windows::Forms::Label());
			this->Q13 = (gcnew System::Windows::Forms::Label());
			this->Q12 = (gcnew System::Windows::Forms::Label());
			this->Q11 = (gcnew System::Windows::Forms::Label());
			this->RelationR = (gcnew System::Windows::Forms::Panel());
			this->R17 = (gcnew System::Windows::Forms::Label());
			this->R16 = (gcnew System::Windows::Forms::Label());
			this->R15 = (gcnew System::Windows::Forms::Label());
			this->R14 = (gcnew System::Windows::Forms::Label());
			this->R13 = (gcnew System::Windows::Forms::Label());
			this->R12 = (gcnew System::Windows::Forms::Label());
			this->R11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ResulRelation = (gcnew System::Windows::Forms::Panel());
			this->RelationPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkRelationR = (gcnew System::Windows::Forms::CheckBox());
			this->checkRelationQ = (gcnew System::Windows::Forms::CheckBox());
			this->checkRelationP = (gcnew System::Windows::Forms::CheckBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->RelationOperation = (gcnew System::Windows::Forms::ComboBox());
			this->OperationBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ResultDist = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Distance2 = (gcnew System::Windows::Forms::ComboBox());
			this->Distance1 = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_Distance = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ClearMatrixforR_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBoxResult = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panel1->SuspendLayout();
			this->RelationP->SuspendLayout();
			this->RelationQ->SuspendLayout();
			this->RelationR->SuspendLayout();
			this->ResulRelation->SuspendLayout();
			this->RelationPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(52, 95);
			this->btnCreate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(70, 26);
			this->btnCreate->TabIndex = 0;
			this->btnCreate->Text = L"Створити";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &MyForm::btnCreate_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 11);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Відношення P";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(107, 11);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Відношення Q";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(197, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Відношення R ";
			// 
			// Create1
			// 
			this->Create1->FormattingEnabled = true;
			this->Create1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Повне", L"Діагональне", L"Пусте", L"Анти-діагональне" });
			this->Create1->Location = System::Drawing::Point(9, 26);
			this->Create1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Create1->Name = L"Create1";
			this->Create1->Size = System::Drawing::Size(87, 21);
			this->Create1->TabIndex = 4;
			this->Create1->Tag = L"1";
			// 
			// Create2
			// 
			this->Create2->FormattingEnabled = true;
			this->Create2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Повне", L"Діагональне", L"Пусте", L"Анти-діагональне" });
			this->Create2->Location = System::Drawing::Point(100, 26);
			this->Create2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Create2->Name = L"Create2";
			this->Create2->Size = System::Drawing::Size(87, 21);
			this->Create2->TabIndex = 5;
			// 
			// Create3
			// 
			this->Create3->FormattingEnabled = true;
			this->Create3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Повне", L"Діагональне", L"Пусте", L"Анти-діагональне" });
			this->Create3->Location = System::Drawing::Point(190, 26);
			this->Create3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Create3->Name = L"Create3";
			this->Create3->Size = System::Drawing::Size(87, 21);
			this->Create3->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(11, 38);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 20;
			this->dataGridView1->RowTemplate->Height = 20;
			this->dataGridView1->Size = System::Drawing::Size(171, 162);
			this->dataGridView1->TabIndex = 7;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(13, 38);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 20;
			this->dataGridView2->RowTemplate->Height = 20;
			this->dataGridView2->Size = System::Drawing::Size(171, 162);
			this->dataGridView2->TabIndex = 8;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(12, 38);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 20;
			this->dataGridView3->RowTemplate->Height = 20;
			this->dataGridView3->Size = System::Drawing::Size(172, 162);
			this->dataGridView3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 63);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Розмір";
			// 
			// SizeTXT
			// 
			this->SizeTXT->Location = System::Drawing::Point(61, 60);
			this->SizeTXT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SizeTXT->Name = L"SizeTXT";
			this->SizeTXT->Size = System::Drawing::Size(34, 20);
			this->SizeTXT->TabIndex = 11;
			this->SizeTXT->Text = L"3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 65);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 26);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Виконати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Location = System::Drawing::Point(2, 4);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 20;
			this->dataGridView4->RowTemplate->Height = 20;
			this->dataGridView4->Size = System::Drawing::Size(293, 197);
			this->dataGridView4->TabIndex = 14;
			// 
			// Operation
			// 
			this->Operation->FormattingEnabled = true;
			this->Operation->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Перетин", L"Об\'єднання", L"Різниця", L"Симетрична різниця",
					L"Доповнення", L"Інверсія", L"Композиція"
			});
			this->Operation->Location = System::Drawing::Point(90, 37);
			this->Operation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Operation->Name = L"Operation";
			this->Operation->Size = System::Drawing::Size(92, 21);
			this->Operation->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(100, 22);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Вибрати дію";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(73, -2);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 36);
			this->label6->TabIndex = 17;
			this->label6->Text = L"P";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(80, 0);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 36);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Q";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(72, 2);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 36);
			this->label8->TabIndex = 19;
			this->label8->Text = L"R";
			// 
			// firstRelation
			// 
			this->firstRelation->FormattingEnabled = true;
			this->firstRelation->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"P", L"Q", L"R" });
			this->firstRelation->Location = System::Drawing::Point(33, 37);
			this->firstRelation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->firstRelation->Name = L"firstRelation";
			this->firstRelation->Size = System::Drawing::Size(33, 21);
			this->firstRelation->TabIndex = 20;
			// 
			// secondRelation
			// 
			this->secondRelation->FormattingEnabled = true;
			this->secondRelation->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"P", L"Q", L"R" });
			this->secondRelation->Location = System::Drawing::Point(199, 37);
			this->secondRelation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->secondRelation->Name = L"secondRelation";
			this->secondRelation->Size = System::Drawing::Size(33, 21);
			this->secondRelation->TabIndex = 21;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 65);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 27);
			this->button2->TabIndex = 23;
			this->button2->Text = L"K = (P * Q) \\ Rd";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ChekedBtn
			// 
			this->ChekedBtn->Location = System::Drawing::Point(152, 95);
			this->ChekedBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ChekedBtn->Name = L"ChekedBtn";
			this->ChekedBtn->Size = System::Drawing::Size(70, 26);
			this->ChekedBtn->TabIndex = 24;
			this->ChekedBtn->Text = L"Перевірка";
			this->ChekedBtn->UseVisualStyleBackColor = true;
			this->ChekedBtn->Click += gcnew System::EventHandler(this, &MyForm::ChekedBtn_Click);
			// 
			// P1
			// 
			this->P1->AutoSize = true;
			this->P1->ForeColor = System::Drawing::Color::Black;
			this->P1->Location = System::Drawing::Point(8, 202);
			this->P1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P1->Name = L"P1";
			this->P1->Size = System::Drawing::Size(89, 13);
			this->P1->TabIndex = 32;
			this->P1->Text = L"Рефлексивність";
			// 
			// P2
			// 
			this->P2->AutoSize = true;
			this->P2->ForeColor = System::Drawing::Color::Black;
			this->P2->Location = System::Drawing::Point(8, 215);
			this->P2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P2->Name = L"P2";
			this->P2->Size = System::Drawing::Size(112, 13);
			this->P2->TabIndex = 33;
			this->P2->Text = L"Антирефлексивність";
			// 
			// P3
			// 
			this->P3->AutoSize = true;
			this->P3->ForeColor = System::Drawing::Color::Black;
			this->P3->Location = System::Drawing::Point(8, 228);
			this->P3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P3->Name = L"P3";
			this->P3->Size = System::Drawing::Size(81, 13);
			this->P3->TabIndex = 34;
			this->P3->Text = L"Симетричність";
			// 
			// P4
			// 
			this->P4->AutoSize = true;
			this->P4->ForeColor = System::Drawing::Color::Black;
			this->P4->Location = System::Drawing::Point(8, 241);
			this->P4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P4->Name = L"P4";
			this->P4->Size = System::Drawing::Size(87, 13);
			this->P4->TabIndex = 35;
			this->P4->Text = L"Асиметричність";
			// 
			// P5
			// 
			this->P5->AutoSize = true;
			this->P5->ForeColor = System::Drawing::Color::Black;
			this->P5->Location = System::Drawing::Point(8, 254);
			this->P5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P5->Name = L"P5";
			this->P5->Size = System::Drawing::Size(104, 13);
			this->P5->TabIndex = 36;
			this->P5->Text = L"Антисиметричність";
			// 
			// P6
			// 
			this->P6->AutoSize = true;
			this->P6->ForeColor = System::Drawing::Color::Black;
			this->P6->Location = System::Drawing::Point(8, 267);
			this->P6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P6->Name = L"P6";
			this->P6->Size = System::Drawing::Size(86, 13);
			this->P6->TabIndex = 37;
			this->P6->Text = L"Транзитивність";
			// 
			// P7
			// 
			this->P7->AutoSize = true;
			this->P7->ForeColor = System::Drawing::Color::Black;
			this->P7->Location = System::Drawing::Point(8, 280);
			this->P7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P7->Name = L"P7";
			this->P7->Size = System::Drawing::Size(70, 13);
			this->P7->TabIndex = 38;
			this->P7->Text = L"Ациклічність";
			// 
			// P8
			// 
			this->P8->AutoSize = true;
			this->P8->ForeColor = System::Drawing::Color::Black;
			this->P8->Location = System::Drawing::Point(8, 296);
			this->P8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P8->Name = L"P8";
			this->P8->Size = System::Drawing::Size(56, 13);
			this->P8->TabIndex = 39;
			this->P8->Text = L"Лінійність";
			// 
			// Q8
			// 
			this->Q8->AutoSize = true;
			this->Q8->ForeColor = System::Drawing::Color::Black;
			this->Q8->Location = System::Drawing::Point(13, 296);
			this->Q8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q8->Name = L"Q8";
			this->Q8->Size = System::Drawing::Size(56, 13);
			this->Q8->TabIndex = 47;
			this->Q8->Text = L"Лінійність";
			// 
			// Q7
			// 
			this->Q7->AutoSize = true;
			this->Q7->ForeColor = System::Drawing::Color::Black;
			this->Q7->Location = System::Drawing::Point(13, 280);
			this->Q7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q7->Name = L"Q7";
			this->Q7->Size = System::Drawing::Size(70, 13);
			this->Q7->TabIndex = 46;
			this->Q7->Text = L"Ациклічність";
			// 
			// Q6
			// 
			this->Q6->AutoSize = true;
			this->Q6->ForeColor = System::Drawing::Color::Black;
			this->Q6->Location = System::Drawing::Point(13, 267);
			this->Q6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q6->Name = L"Q6";
			this->Q6->Size = System::Drawing::Size(86, 13);
			this->Q6->TabIndex = 45;
			this->Q6->Text = L"Транзитивність";
			// 
			// Q5
			// 
			this->Q5->AutoSize = true;
			this->Q5->ForeColor = System::Drawing::Color::Black;
			this->Q5->Location = System::Drawing::Point(13, 254);
			this->Q5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q5->Name = L"Q5";
			this->Q5->Size = System::Drawing::Size(104, 13);
			this->Q5->TabIndex = 44;
			this->Q5->Text = L"Антисиметричність";
			// 
			// Q4
			// 
			this->Q4->AutoSize = true;
			this->Q4->ForeColor = System::Drawing::Color::Black;
			this->Q4->Location = System::Drawing::Point(13, 241);
			this->Q4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q4->Name = L"Q4";
			this->Q4->Size = System::Drawing::Size(87, 13);
			this->Q4->TabIndex = 43;
			this->Q4->Text = L"Асиметричність";
			// 
			// Q3
			// 
			this->Q3->AutoSize = true;
			this->Q3->ForeColor = System::Drawing::Color::Black;
			this->Q3->Location = System::Drawing::Point(13, 228);
			this->Q3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q3->Name = L"Q3";
			this->Q3->Size = System::Drawing::Size(81, 13);
			this->Q3->TabIndex = 42;
			this->Q3->Text = L"Симетричність";
			// 
			// Q2
			// 
			this->Q2->AutoSize = true;
			this->Q2->ForeColor = System::Drawing::Color::Black;
			this->Q2->Location = System::Drawing::Point(13, 215);
			this->Q2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q2->Name = L"Q2";
			this->Q2->Size = System::Drawing::Size(112, 13);
			this->Q2->TabIndex = 41;
			this->Q2->Text = L"Антирефлексивність";
			// 
			// Q1
			// 
			this->Q1->AutoSize = true;
			this->Q1->ForeColor = System::Drawing::Color::Black;
			this->Q1->Location = System::Drawing::Point(13, 202);
			this->Q1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q1->Name = L"Q1";
			this->Q1->Size = System::Drawing::Size(89, 13);
			this->Q1->TabIndex = 40;
			this->Q1->Text = L"Рефлексивність";
			// 
			// R8
			// 
			this->R8->AutoSize = true;
			this->R8->ForeColor = System::Drawing::Color::Black;
			this->R8->Location = System::Drawing::Point(9, 296);
			this->R8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R8->Name = L"R8";
			this->R8->Size = System::Drawing::Size(56, 13);
			this->R8->TabIndex = 55;
			this->R8->Text = L"Лінійність";
			// 
			// R7
			// 
			this->R7->AutoSize = true;
			this->R7->ForeColor = System::Drawing::Color::Black;
			this->R7->Location = System::Drawing::Point(9, 280);
			this->R7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R7->Name = L"R7";
			this->R7->Size = System::Drawing::Size(70, 13);
			this->R7->TabIndex = 54;
			this->R7->Text = L"Ациклічність";
			// 
			// R6
			// 
			this->R6->AutoSize = true;
			this->R6->ForeColor = System::Drawing::Color::Black;
			this->R6->Location = System::Drawing::Point(9, 267);
			this->R6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R6->Name = L"R6";
			this->R6->Size = System::Drawing::Size(86, 13);
			this->R6->TabIndex = 53;
			this->R6->Text = L"Транзитивність";
			// 
			// R5
			// 
			this->R5->AutoSize = true;
			this->R5->ForeColor = System::Drawing::Color::Black;
			this->R5->Location = System::Drawing::Point(9, 254);
			this->R5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R5->Name = L"R5";
			this->R5->Size = System::Drawing::Size(104, 13);
			this->R5->TabIndex = 52;
			this->R5->Text = L"Антисиметричність";
			// 
			// R4
			// 
			this->R4->AutoSize = true;
			this->R4->ForeColor = System::Drawing::Color::Black;
			this->R4->Location = System::Drawing::Point(9, 241);
			this->R4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R4->Name = L"R4";
			this->R4->Size = System::Drawing::Size(87, 13);
			this->R4->TabIndex = 51;
			this->R4->Text = L"Асиметричність";
			// 
			// R3
			// 
			this->R3->AutoSize = true;
			this->R3->ForeColor = System::Drawing::Color::Black;
			this->R3->Location = System::Drawing::Point(9, 228);
			this->R3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R3->Name = L"R3";
			this->R3->Size = System::Drawing::Size(81, 13);
			this->R3->TabIndex = 50;
			this->R3->Text = L"Симетричність";
			// 
			// R2
			// 
			this->R2->AutoSize = true;
			this->R2->ForeColor = System::Drawing::Color::Black;
			this->R2->Location = System::Drawing::Point(9, 215);
			this->R2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R2->Name = L"R2";
			this->R2->Size = System::Drawing::Size(112, 13);
			this->R2->TabIndex = 49;
			this->R2->Text = L"Антирефлексивність";
			// 
			// R1
			// 
			this->R1->AutoSize = true;
			this->R1->ForeColor = System::Drawing::Color::Black;
			this->R1->Location = System::Drawing::Point(9, 202);
			this->R1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(89, 13);
			this->R1->TabIndex = 48;
			this->R1->Text = L"Рефлексивність";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Create1);
			this->panel1->Controls->Add(this->Create2);
			this->panel1->Controls->Add(this->Create3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->SizeTXT);
			this->panel1->Controls->Add(this->btnCreate);
			this->panel1->Controls->Add(this->ChekedBtn);
			this->panel1->Location = System::Drawing::Point(10, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(298, 126);
			this->panel1->TabIndex = 57;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(172, 62);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(93, 17);
			this->radioButton2->TabIndex = 26;
			this->radioButton2->Text = L"Метризоване";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(108, 61);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(64, 17);
			this->radioButton1->TabIndex = 25;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Бінарне";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// RelationP
			// 
			this->RelationP->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RelationP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RelationP->Controls->Add(this->P17);
			this->RelationP->Controls->Add(this->P16);
			this->RelationP->Controls->Add(this->P15);
			this->RelationP->Controls->Add(this->P14);
			this->RelationP->Controls->Add(this->P13);
			this->RelationP->Controls->Add(this->P12);
			this->RelationP->Controls->Add(this->P11);
			this->RelationP->Controls->Add(this->dataGridView1);
			this->RelationP->Controls->Add(this->label6);
			this->RelationP->Controls->Add(this->P1);
			this->RelationP->Controls->Add(this->P2);
			this->RelationP->Controls->Add(this->P3);
			this->RelationP->Controls->Add(this->P4);
			this->RelationP->Controls->Add(this->P5);
			this->RelationP->Controls->Add(this->P6);
			this->RelationP->Controls->Add(this->P7);
			this->RelationP->Controls->Add(this->P8);
			this->RelationP->Location = System::Drawing::Point(11, 5);
			this->RelationP->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RelationP->Name = L"RelationP";
			this->RelationP->Size = System::Drawing::Size(197, 422);
			this->RelationP->TabIndex = 59;
			// 
			// P17
			// 
			this->P17->AutoSize = true;
			this->P17->ForeColor = System::Drawing::Color::Black;
			this->P17->Location = System::Drawing::Point(8, 396);
			this->P17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P17->Name = L"P17";
			this->P17->Size = System::Drawing::Size(113, 13);
			this->P17->TabIndex = 46;
			this->P17->Text = L"Строгий лін. порядок";
			// 
			// P16
			// 
			this->P16->AutoSize = true;
			this->P16->ForeColor = System::Drawing::Color::Black;
			this->P16->Location = System::Drawing::Point(8, 383);
			this->P16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P16->Name = L"P16";
			this->P16->Size = System::Drawing::Size(94, 13);
			this->P16->TabIndex = 45;
			this->P16->Text = L"Лінійний порядок";
			// 
			// P15
			// 
			this->P15->AutoSize = true;
			this->P15->ForeColor = System::Drawing::Color::Black;
			this->P15->Location = System::Drawing::Point(8, 370);
			this->P15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P15->Name = L"P15";
			this->P15->Size = System::Drawing::Size(93, 13);
			this->P15->TabIndex = 44;
			this->P15->Text = L"Строгий порядок";
			// 
			// P14
			// 
			this->P14->AutoSize = true;
			this->P14->ForeColor = System::Drawing::Color::Black;
			this->P14->Location = System::Drawing::Point(8, 357);
			this->P14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P14->Name = L"P14";
			this->P14->Size = System::Drawing::Size(51, 13);
			this->P14->TabIndex = 43;
			this->P14->Text = L"Порядок";
			// 
			// P13
			// 
			this->P13->AutoSize = true;
			this->P13->ForeColor = System::Drawing::Color::Black;
			this->P13->Location = System::Drawing::Point(8, 344);
			this->P13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P13->Name = L"P13";
			this->P13->Size = System::Drawing::Size(76, 13);
			this->P13->TabIndex = 42;
			this->P13->Text = L"Квазіпорядок";
			// 
			// P12
			// 
			this->P12->AutoSize = true;
			this->P12->ForeColor = System::Drawing::Color::Black;
			this->P12->Location = System::Drawing::Point(8, 331);
			this->P12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P12->Name = L"P12";
			this->P12->Size = System::Drawing::Size(88, 13);
			this->P12->TabIndex = 41;
			this->P12->Text = L"Еквівалентність";
			// 
			// P11
			// 
			this->P11->AutoSize = true;
			this->P11->ForeColor = System::Drawing::Color::Black;
			this->P11->Location = System::Drawing::Point(8, 318);
			this->P11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->P11->Name = L"P11";
			this->P11->Size = System::Drawing::Size(80, 13);
			this->P11->TabIndex = 40;
			this->P11->Text = L"Толерантність";
			// 
			// RelationQ
			// 
			this->RelationQ->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RelationQ->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RelationQ->Controls->Add(this->Q17);
			this->RelationQ->Controls->Add(this->Q16);
			this->RelationQ->Controls->Add(this->Q15);
			this->RelationQ->Controls->Add(this->Q14);
			this->RelationQ->Controls->Add(this->Q13);
			this->RelationQ->Controls->Add(this->Q12);
			this->RelationQ->Controls->Add(this->Q11);
			this->RelationQ->Controls->Add(this->dataGridView2);
			this->RelationQ->Controls->Add(this->label7);
			this->RelationQ->Controls->Add(this->Q1);
			this->RelationQ->Controls->Add(this->Q2);
			this->RelationQ->Controls->Add(this->Q3);
			this->RelationQ->Controls->Add(this->Q4);
			this->RelationQ->Controls->Add(this->Q5);
			this->RelationQ->Controls->Add(this->Q6);
			this->RelationQ->Controls->Add(this->Q7);
			this->RelationQ->Controls->Add(this->Q8);
			this->RelationQ->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->RelationQ->Location = System::Drawing::Point(212, 5);
			this->RelationQ->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RelationQ->Name = L"RelationQ";
			this->RelationQ->Size = System::Drawing::Size(201, 422);
			this->RelationQ->TabIndex = 60;
			// 
			// Q17
			// 
			this->Q17->AutoSize = true;
			this->Q17->ForeColor = System::Drawing::Color::Black;
			this->Q17->Location = System::Drawing::Point(10, 396);
			this->Q17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q17->Name = L"Q17";
			this->Q17->Size = System::Drawing::Size(113, 13);
			this->Q17->TabIndex = 54;
			this->Q17->Text = L"Строгий лін. порядок";
			// 
			// Q16
			// 
			this->Q16->AutoSize = true;
			this->Q16->ForeColor = System::Drawing::Color::Black;
			this->Q16->Location = System::Drawing::Point(10, 383);
			this->Q16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q16->Name = L"Q16";
			this->Q16->Size = System::Drawing::Size(94, 13);
			this->Q16->TabIndex = 53;
			this->Q16->Text = L"Лінійний порядок";
			// 
			// Q15
			// 
			this->Q15->AutoSize = true;
			this->Q15->ForeColor = System::Drawing::Color::Black;
			this->Q15->Location = System::Drawing::Point(10, 370);
			this->Q15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q15->Name = L"Q15";
			this->Q15->Size = System::Drawing::Size(93, 13);
			this->Q15->TabIndex = 52;
			this->Q15->Text = L"Строгий порядок";
			// 
			// Q14
			// 
			this->Q14->AutoSize = true;
			this->Q14->ForeColor = System::Drawing::Color::Black;
			this->Q14->Location = System::Drawing::Point(10, 357);
			this->Q14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q14->Name = L"Q14";
			this->Q14->Size = System::Drawing::Size(51, 13);
			this->Q14->TabIndex = 51;
			this->Q14->Text = L"Порядок";
			// 
			// Q13
			// 
			this->Q13->AutoSize = true;
			this->Q13->ForeColor = System::Drawing::Color::Black;
			this->Q13->Location = System::Drawing::Point(10, 344);
			this->Q13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q13->Name = L"Q13";
			this->Q13->Size = System::Drawing::Size(76, 13);
			this->Q13->TabIndex = 50;
			this->Q13->Text = L"Квазіпорядок";
			// 
			// Q12
			// 
			this->Q12->AutoSize = true;
			this->Q12->ForeColor = System::Drawing::Color::Black;
			this->Q12->Location = System::Drawing::Point(10, 331);
			this->Q12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q12->Name = L"Q12";
			this->Q12->Size = System::Drawing::Size(88, 13);
			this->Q12->TabIndex = 49;
			this->Q12->Text = L"Еквівалентність";
			// 
			// Q11
			// 
			this->Q11->AutoSize = true;
			this->Q11->ForeColor = System::Drawing::Color::Black;
			this->Q11->Location = System::Drawing::Point(10, 318);
			this->Q11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Q11->Name = L"Q11";
			this->Q11->Size = System::Drawing::Size(80, 13);
			this->Q11->TabIndex = 48;
			this->Q11->Text = L"Толерантність";
			// 
			// RelationR
			// 
			this->RelationR->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RelationR->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RelationR->Controls->Add(this->R17);
			this->RelationR->Controls->Add(this->R16);
			this->RelationR->Controls->Add(this->R15);
			this->RelationR->Controls->Add(this->R14);
			this->RelationR->Controls->Add(this->R13);
			this->RelationR->Controls->Add(this->R12);
			this->RelationR->Controls->Add(this->R11);
			this->RelationR->Controls->Add(this->dataGridView3);
			this->RelationR->Controls->Add(this->label8);
			this->RelationR->Controls->Add(this->R1);
			this->RelationR->Controls->Add(this->R2);
			this->RelationR->Controls->Add(this->R3);
			this->RelationR->Controls->Add(this->R4);
			this->RelationR->Controls->Add(this->R8);
			this->RelationR->Controls->Add(this->R5);
			this->RelationR->Controls->Add(this->R7);
			this->RelationR->Controls->Add(this->R6);
			this->RelationR->Location = System::Drawing::Point(417, 5);
			this->RelationR->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RelationR->Name = L"RelationR";
			this->RelationR->Size = System::Drawing::Size(199, 422);
			this->RelationR->TabIndex = 61;
			// 
			// R17
			// 
			this->R17->AutoSize = true;
			this->R17->ForeColor = System::Drawing::Color::Black;
			this->R17->Location = System::Drawing::Point(12, 396);
			this->R17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R17->Name = L"R17";
			this->R17->Size = System::Drawing::Size(113, 13);
			this->R17->TabIndex = 62;
			this->R17->Text = L"Строгий лін. порядок";
			// 
			// R16
			// 
			this->R16->AutoSize = true;
			this->R16->ForeColor = System::Drawing::Color::Black;
			this->R16->Location = System::Drawing::Point(12, 383);
			this->R16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R16->Name = L"R16";
			this->R16->Size = System::Drawing::Size(94, 13);
			this->R16->TabIndex = 61;
			this->R16->Text = L"Лінійний порядок";
			// 
			// R15
			// 
			this->R15->AutoSize = true;
			this->R15->ForeColor = System::Drawing::Color::Black;
			this->R15->Location = System::Drawing::Point(12, 370);
			this->R15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R15->Name = L"R15";
			this->R15->Size = System::Drawing::Size(93, 13);
			this->R15->TabIndex = 60;
			this->R15->Text = L"Строгий порядок";
			// 
			// R14
			// 
			this->R14->AutoSize = true;
			this->R14->ForeColor = System::Drawing::Color::Black;
			this->R14->Location = System::Drawing::Point(12, 357);
			this->R14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R14->Name = L"R14";
			this->R14->Size = System::Drawing::Size(51, 13);
			this->R14->TabIndex = 59;
			this->R14->Text = L"Порядок";
			// 
			// R13
			// 
			this->R13->AutoSize = true;
			this->R13->ForeColor = System::Drawing::Color::Black;
			this->R13->Location = System::Drawing::Point(12, 344);
			this->R13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R13->Name = L"R13";
			this->R13->Size = System::Drawing::Size(76, 13);
			this->R13->TabIndex = 58;
			this->R13->Text = L"Квазіпорядок";
			// 
			// R12
			// 
			this->R12->AutoSize = true;
			this->R12->ForeColor = System::Drawing::Color::Black;
			this->R12->Location = System::Drawing::Point(12, 331);
			this->R12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R12->Name = L"R12";
			this->R12->Size = System::Drawing::Size(88, 13);
			this->R12->TabIndex = 57;
			this->R12->Text = L"Еквівалентність";
			// 
			// R11
			// 
			this->R11->AutoSize = true;
			this->R11->ForeColor = System::Drawing::Color::Black;
			this->R11->Location = System::Drawing::Point(12, 318);
			this->R11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->R11->Name = L"R11";
			this->R11->Size = System::Drawing::Size(80, 13);
			this->R11->TabIndex = 56;
			this->R11->Text = L"Толерантність";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 22);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 13);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Відношення";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(185, 22);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 13);
			this->label13->TabIndex = 64;
			this->label13->Text = L"Відношення";
			// 
			// ResulRelation
			// 
			this->ResulRelation->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ResulRelation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ResulRelation->Controls->Add(this->dataGridView4);
			this->ResulRelation->Location = System::Drawing::Point(642, 140);
			this->ResulRelation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ResulRelation->Name = L"ResulRelation";
			this->ResulRelation->Size = System::Drawing::Size(301, 205);
			this->ResulRelation->TabIndex = 63;
			// 
			// RelationPanel
			// 
			this->RelationPanel->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->RelationPanel->Controls->Add(this->RelationP);
			this->RelationPanel->Controls->Add(this->RelationR);
			this->RelationPanel->Controls->Add(this->RelationQ);
			this->RelationPanel->Location = System::Drawing::Point(9, 140);
			this->RelationPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RelationPanel->Name = L"RelationPanel";
			this->RelationPanel->Size = System::Drawing::Size(627, 439);
			this->RelationPanel->TabIndex = 64;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->Operation);
			this->panel2->Controls->Add(this->firstRelation);
			this->panel2->Controls->Add(this->secondRelation);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(457, 10);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(277, 126);
			this->panel2->TabIndex = 62;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->checkRelationR);
			this->panel3->Controls->Add(this->checkRelationQ);
			this->panel3->Controls->Add(this->checkRelationP);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->RelationOperation);
			this->panel3->Controls->Add(this->OperationBtn);
			this->panel3->Location = System::Drawing::Point(311, 10);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(142, 126);
			this->panel3->TabIndex = 65;
			// 
			// checkRelationR
			// 
			this->checkRelationR->AutoSize = true;
			this->checkRelationR->Location = System::Drawing::Point(98, 60);
			this->checkRelationR->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkRelationR->Name = L"checkRelationR";
			this->checkRelationR->Size = System::Drawing::Size(34, 17);
			this->checkRelationR->TabIndex = 5;
			this->checkRelationR->Text = L"R";
			this->checkRelationR->UseVisualStyleBackColor = true;
			// 
			// checkRelationQ
			// 
			this->checkRelationQ->AutoSize = true;
			this->checkRelationQ->Location = System::Drawing::Point(57, 60);
			this->checkRelationQ->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkRelationQ->Name = L"checkRelationQ";
			this->checkRelationQ->Size = System::Drawing::Size(34, 17);
			this->checkRelationQ->TabIndex = 4;
			this->checkRelationQ->Text = L"Q";
			this->checkRelationQ->UseVisualStyleBackColor = true;
			// 
			// checkRelationP
			// 
			this->checkRelationP->AutoSize = true;
			this->checkRelationP->Location = System::Drawing::Point(17, 60);
			this->checkRelationP->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkRelationP->Name = L"checkRelationP";
			this->checkRelationP->Size = System::Drawing::Size(33, 17);
			this->checkRelationP->TabIndex = 3;
			this->checkRelationP->Text = L"P";
			this->checkRelationP->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 19);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(111, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Операції відношення";
			// 
			// RelationOperation
			// 
			this->RelationOperation->FormattingEnabled = true;
			this->RelationOperation->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Симетричної ", L"Асиметричної", L"Транзитивного",
					L"Досягальність", L"Взаємна досягальність"
			});
			this->RelationOperation->Location = System::Drawing::Point(6, 35);
			this->RelationOperation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RelationOperation->Name = L"RelationOperation";
			this->RelationOperation->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RelationOperation->Size = System::Drawing::Size(128, 21);
			this->RelationOperation->TabIndex = 1;
			this->RelationOperation->Text = L"Знаходження";
			// 
			// OperationBtn
			// 
			this->OperationBtn->Location = System::Drawing::Point(34, 77);
			this->OperationBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->OperationBtn->Name = L"OperationBtn";
			this->OperationBtn->Size = System::Drawing::Size(66, 27);
			this->OperationBtn->TabIndex = 0;
			this->OperationBtn->Text = L"Виконати";
			this->OperationBtn->UseVisualStyleBackColor = true;
			this->OperationBtn->Click += gcnew System::EventHandler(this, &MyForm::OperationBtn_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->ResultDist);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->Distance2);
			this->panel4->Controls->Add(this->Distance1);
			this->panel4->Controls->Add(this->Btn_Distance);
			this->panel4->Location = System::Drawing::Point(642, 349);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(301, 112);
			this->panel4->TabIndex = 66;
			// 
			// ResultDist
			// 
			this->ResultDist->AutoSize = true;
			this->ResultDist->Location = System::Drawing::Point(206, 89);
			this->ResultDist->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ResultDist->Name = L"ResultDist";
			this->ResultDist->Size = System::Drawing::Size(22, 13);
			this->ResultDist->TabIndex = 67;
			this->ResultDist->Text = L"0.0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(172, 73);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(91, 13);
			this->label18->TabIndex = 66;
			this->label18->Text = L"Міра близькості:";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(33, 13);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(66, 13);
			this->label17->TabIndex = 65;
			this->label17->Text = L"Відношення";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(186, 13);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 13);
			this->label16->TabIndex = 64;
			this->label16->Text = L"Відношення";
			// 
			// Distance2
			// 
			this->Distance2->FormattingEnabled = true;
			this->Distance2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"P", L"Q", L"R", L"R+" });
			this->Distance2->Location = System::Drawing::Point(163, 26);
			this->Distance2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Distance2->Name = L"Distance2";
			this->Distance2->Size = System::Drawing::Size(121, 21);
			this->Distance2->TabIndex = 3;
			// 
			// Distance1
			// 
			this->Distance1->FormattingEnabled = true;
			this->Distance1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"P", L"Q", L"R", L"R+" });
			this->Distance1->Location = System::Drawing::Point(11, 26);
			this->Distance1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Distance1->Name = L"Distance1";
			this->Distance1->Size = System::Drawing::Size(115, 21);
			this->Distance1->TabIndex = 2;
			// 
			// Btn_Distance
			// 
			this->Btn_Distance->Location = System::Drawing::Point(11, 71);
			this->Btn_Distance->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Distance->Name = L"Btn_Distance";
			this->Btn_Distance->Size = System::Drawing::Size(115, 33);
			this->Btn_Distance->TabIndex = 0;
			this->Btn_Distance->Text = L"Розрах.";
			this->Btn_Distance->UseVisualStyleBackColor = true;
			this->Btn_Distance->Click += gcnew System::EventHandler(this, &MyForm::Btn_Distance_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->ClearMatrixforR_btn);
			this->panel5->Controls->Add(this->add_btn);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->listBox1);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Location = System::Drawing::Point(642, 465);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(301, 114);
			this->panel5->TabIndex = 67;
			// 
			// ClearMatrixforR_btn
			// 
			this->ClearMatrixforR_btn->Location = System::Drawing::Point(221, 28);
			this->ClearMatrixforR_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ClearMatrixforR_btn->Name = L"ClearMatrixforR_btn";
			this->ClearMatrixforR_btn->Size = System::Drawing::Size(56, 19);
			this->ClearMatrixforR_btn->TabIndex = 6;
			this->ClearMatrixforR_btn->Text = L"Clear";
			this->ClearMatrixforR_btn->UseVisualStyleBackColor = true;
			this->ClearMatrixforR_btn->Click += gcnew System::EventHandler(this, &MyForm::ClearMatrixforR_btn_Click);
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(221, 4);
			this->add_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(56, 19);
			this->add_btn->TabIndex = 5;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MyForm::add_btn_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(11, 6);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 36);
			this->label20->TabIndex = 3;
			this->label20->Text = L"R+";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(98, 28);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(106, 69);
			this->listBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 4);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(107, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(14, 12);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(34, 16);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 68;
			this->button3->Text = L"Знайти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->comboBox1);
			this->panel6->Controls->Add(this->listBoxResult);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Location = System::Drawing::Point(742, 10);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(201, 126);
			this->panel6->TabIndex = 69;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"P", L"Q", L"R", L"R+" });
			this->comboBox1->Location = System::Drawing::Point(130, 14);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(33, 21);
			this->comboBox1->TabIndex = 70;
			// 
			// listBoxResult
			// 
			this->listBoxResult->FormattingEnabled = true;
			this->listBoxResult->Location = System::Drawing::Point(34, 39);
			this->listBoxResult->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBoxResult->Name = L"listBoxResult";
			this->listBoxResult->Size = System::Drawing::Size(129, 69);
			this->listBoxResult->TabIndex = 69;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(951, 589);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->RelationPanel);
			this->Controls->Add(this->ResulRelation);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Теорія прийняття рішень";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->RelationP->ResumeLayout(false);
			this->RelationP->PerformLayout();
			this->RelationQ->ResumeLayout(false);
			this->RelationQ->PerformLayout();
			this->RelationR->ResumeLayout(false);
			this->RelationR->PerformLayout();
			this->ResulRelation->ResumeLayout(false);
			this->RelationPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void DisplayMatrixRelation(Relation^ relation, System::Windows::Forms::DataGridView^ dataGridView, String^ relationName)
		{
			DataTable^ dataTable = gcnew DataTable(relationName);

			for (int i = 0; i < relation->getRow(); ++i)
			{
				DataColumn^ column = gcnew DataColumn();
				dataTable->Columns->Add(column);
			}

			for (int i = 0; i < relation->getRow(); ++i)
			{
				DataRow^ row = dataTable->NewRow();
				for (int j = 0; j < relation->getCol(); ++j)
				{
					row[j] = relation->getElement(i, j);
				}
				dataTable->Rows->Add(row);
			}

			dataGridView->DataSource = dataTable;
			dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
		}


		Relation^ GetRelationFromDataGridView(System::Windows::Forms::DataGridView^ dataGridView, bool type)
		{
			if (dataGridView->Rows->Count == 0)
			{
				throw gcnew System::Exception("DataGrid is empty.");
			}

			int rows = dataGridView->Rows->Count;
			int cols = dataGridView->Columns->Count;

			if (type)
			{
				MatrixRelation^ myMatrix = gcnew MatrixRelation(rows, cols);
				for (int i = 0; i < rows; ++i)
				{
					for (int j = 0; j < cols; ++j)
					{
						Object^ cellValue = dataGridView->Rows[i]->Cells[j]->Value;
						if (cellValue != nullptr)
						{
							myMatrix->setElement(i, j, Convert::ToInt32(cellValue));
						}
						else
						{
							myMatrix->setElement(i, j, 0);
						}
					}
				}
				return myMatrix;
			}
			else
			{
				MetricMatrixRelation^ myMetric = gcnew MetricMatrixRelation(rows, cols);
				for (int i = 0; i < rows; ++i)
				{
					for (int j = 0; j < cols; ++j)
					{
						Object^ cellValue = dataGridView->Rows[i]->Cells[j]->Value;
						if (cellValue != nullptr)
						{
							myMetric->setElement(i, j, Convert::ToDouble(cellValue));
						}
						else
						{
							myMetric->setElement(i, j, 0);
						}
					}
				}
				return myMetric;
			}
		}




	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = System::Convert::ToInt32(SizeTXT->Text);


		if (radioButton1->Checked == true)
		{
			MatrixRelation^ relation1;
			MatrixRelation^ relation2;
			MatrixRelation^ relation3;

			if (Create1->SelectedIndex == 0) {
				relation1 = MatrixRelation::createFullrelation(size, size);
			}
			else if (Create1->SelectedIndex == 1) {
				relation1 = MatrixRelation::createDiagonalRelation(size, size);
			}
			else if (Create1->SelectedIndex == 2) {
				relation1 = MatrixRelation::createEmptyRelation(size, size);
			}
			else
				relation1 = MatrixRelation::createAntiDiagonalRelation(size, size);

			if (Create2->SelectedIndex == 0) {
				relation2 = MatrixRelation::createFullrelation(size, size);
			}
			else if (Create2->SelectedIndex == 1) {
				relation2 = MatrixRelation::createDiagonalRelation(size, size);
			}
			else if (Create2->SelectedIndex == 2) {
				relation2 = MatrixRelation::createEmptyRelation(size, size);
			}
			else
				relation2 = MatrixRelation::createAntiDiagonalRelation(size, size);

			if (Create3->SelectedIndex == 0) {
				relation3 = MatrixRelation::createFullrelation(size, size);
			}
			else if (Create3->SelectedIndex == 1) {
				relation3 = MatrixRelation::createDiagonalRelation(size, size);
			}
			else if (Create3->SelectedIndex == 2) {
				relation3 = MatrixRelation::createEmptyRelation(size, size);
			}
			else
				relation3 = MatrixRelation::createAntiDiagonalRelation(size, size);

			DisplayMatrixRelation(relation1, dataGridView1, "Relation 1");
			DisplayMatrixRelation(relation2, dataGridView2, "Relation 2");
			DisplayMatrixRelation(relation3, dataGridView3, "Relation 3");
		}
		if (radioButton2->Checked == true)
		{
			MetricMatrixRelation^ relation1 = gcnew MetricMatrixRelation(size, size);
			MetricMatrixRelation^ relation2 = gcnew MetricMatrixRelation(size, size);
			MetricMatrixRelation^ relation3 = gcnew MetricMatrixRelation(size, size);
			DisplayMatrixRelation(relation1, dataGridView1, "Relation 1");
			DisplayMatrixRelation(relation2, dataGridView2, "Relation 2");
			DisplayMatrixRelation(relation3, dataGridView3, "Relation 3");
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixRelation^ resultRelation = nullptr;
		MatrixRelation^ first = nullptr;
		MatrixRelation^ second = nullptr;
		MatrixRelation^ MatrixP = nullptr;
		MatrixRelation^ MatrixQ = nullptr;
		MatrixRelation^ MatrixR = nullptr;

		try
		{
			if (radioButton2->Checked) {
				MatrixP = gcnew MetricMatrixRelation(MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 1));
				MatrixQ = gcnew MetricMatrixRelation(MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 1));
				MatrixR = gcnew MetricMatrixRelation(MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 1));
				resultRelation = gcnew MetricMatrixRelation();
				first = gcnew MetricMatrixRelation();
				second = gcnew MetricMatrixRelation();
			}
			else {
				MatrixP = MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 0);
				MatrixQ = MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0);
				MatrixR = MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 0);
				resultRelation = gcnew MatrixRelation();
				first = gcnew MatrixRelation();
				second = gcnew MatrixRelation();
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Matrices not created.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		first = MatrixP;
		second = MatrixQ;

		if (firstRelation->SelectedIndex == 0) { first = MatrixP; }
		else if (firstRelation->SelectedIndex == 1) { first = MatrixQ; }
		else { first = MatrixR; }

		if (secondRelation->SelectedIndex == 0) { second = MatrixP; }
		else if (secondRelation->SelectedIndex == 1) { second = MatrixQ; }
		else { second = MatrixR; }

		int operation = Operation->SelectedIndex;
		switch (operation)
		{
		case 0:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->intersection(second), radioButton2->Checked);
			break;
		case 1:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->unionOperation(second), radioButton2->Checked);
			break;
		case 2:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->difference(second), radioButton2->Checked);
			break;
		case 3:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->symmetricDifference(second), radioButton2->Checked);
			break;
		case 4:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->complement(), radioButton2->Checked);
			break;
		case 5:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->inverse(), radioButton2->Checked);
			break;
		case 6:
			resultRelation = resultRelation->ConvertToMatrixRelation(first->composition(second), radioButton2->Checked);
			break;
		default:
			break;
		}
		DisplayMatrixRelation(resultRelation, dataGridView4, "Result");
	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixRelation^ resultRelation;
		MatrixRelation^ MatrixP;
		MatrixRelation^ MatrixQ;
		MatrixRelation^ MatrixR;
		try
		{
			MatrixP = MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 0);
			MatrixQ = MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0);
			MatrixR = MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 0);
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Matrices not created.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		resultRelation = resultRelation->ConvertToMatrixRelation(MatrixP->calculateExpressionK(MatrixQ, MatrixR), radioButton2->Checked);
		DisplayMatrixRelation(resultRelation, dataGridView4, "Result");
		dataGridView4->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
	}


	private: System::Void ChekedBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixRelation^ MatrixP;
		MatrixRelation^ MatrixQ;
		MatrixRelation^ MatrixR;
		try
		{
			MatrixP = MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 0);
			MatrixQ = MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0);
			MatrixR = MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 0);
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Matrices not created.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		checkAndSetColors(MatrixP, gcnew array<Label^>{P1, P2, P3, P4, P5, P6, P7, P8});
		checkAndSetColors(MatrixQ, gcnew array<Label^>{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8});
		checkAndSetColors(MatrixR, gcnew array<Label^>{R1, R2, R3, R4, R5, R6, R7, R8});

		checkAndSetType(MatrixP, gcnew array<Label^>{P11, P12, P13, P14, P15, P16, P17});
		checkAndSetType(MatrixQ, gcnew array<Label^>{Q11, Q12, Q13, Q14, Q15, Q16, Q17});
		checkAndSetType(MatrixR, gcnew array<Label^>{R11, R12, R13, R14, R15, R16, R17});
	}
		   void checkAndSetColors(MatrixRelation^ matrix, array<Label^>^ labels)
		   {
			   labels[0]->ForeColor = matrix->isReflexive() ? Color::Green : Color::Red;
			   labels[1]->ForeColor = matrix->isAntiReflexive() ? Color::Green : Color::Red;
			   labels[2]->ForeColor = matrix->isSymmetric() ? Color::Green : Color::Red;
			   labels[3]->ForeColor = matrix->isAsymmetric() ? Color::Green : Color::Red;
			   labels[4]->ForeColor = matrix->isAntisymmetric() ? Color::Green : Color::Red;
			   labels[5]->ForeColor = matrix->isTransitive() ? Color::Green : Color::Red;
			   labels[6]->ForeColor = matrix->isAcyclic() ? Color::Green : Color::Red;
			   labels[7]->ForeColor = matrix->isLinear() ? Color::Green : Color::Red;
		   }

		   void checkAndSetType(MatrixRelation^ matrix, array<Label^>^ labels)
		   {
			   labels[0]->ForeColor = matrix->isTolerance() ? Color::Green : Color::Red;
			   labels[1]->ForeColor = matrix->isEquivalence() ? Color::Green : Color::Red;
			   labels[2]->ForeColor = matrix->isQuasiOrder() ? Color::Green : Color::Red;
			   labels[3]->ForeColor = matrix->isOrder() ? Color::Green : Color::Red;
			   labels[4]->ForeColor = matrix->isStrictOrder() ? Color::Green : Color::Red;
			   labels[5]->ForeColor = matrix->isLinearOrder() ? Color::Green : Color::Red;
			   labels[6]->ForeColor = matrix->isStrictLinearOrder() ? Color::Green : Color::Red;
		   }

	private: System::Void OperationBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MatrixRelation^ resultRelation = gcnew MatrixRelation();
		MatrixRelation^ MatrixP;
		MatrixRelation^ MatrixQ;
		MatrixRelation^ MatrixR;
		try
		{
			MatrixP = MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 0);
			MatrixQ = MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0);
			MatrixR = MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 0);
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Matrices not created.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		int operation = RelationOperation->SelectedIndex;
		switch (operation)
		{
		case 0:
			if (checkRelationP->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixP->findSymmetricComponent(), radioButton2->Checked), dataGridView1, "ResultP");
			if (checkRelationQ->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixQ->findSymmetricComponent(), radioButton2->Checked), dataGridView4, "ResultQ");
			if (checkRelationR->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixR->findSymmetricComponent(), radioButton2->Checked), dataGridView3, "ResultR");
			break;
		case 1:
			if (checkRelationP->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixP->findAsymmetricComponent(), radioButton2->Checked), dataGridView1, "ResultP");
			if (checkRelationQ->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixQ->findAsymmetricComponent(), radioButton2->Checked), dataGridView4, "ResultQ");
			if (checkRelationR->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixR->findAsymmetricComponent(), radioButton2->Checked), dataGridView3, "ResultR");
			break;
		case 2:
			if (checkRelationP->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixP->findTransitiveClosure(), radioButton2->Checked), dataGridView1, "ResultP");
			if (checkRelationQ->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixQ->findTransitiveClosure(), radioButton2->Checked), dataGridView4, "ResultQ");
			if (checkRelationR->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixR->findTransitiveClosure(), radioButton2->Checked), dataGridView3, "ResultR");
			break;
		case 3:
			if (checkRelationP->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixP->reach(), radioButton2->Checked), dataGridView1, "ResultP");
			if (checkRelationQ->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixQ->reach(), radioButton2->Checked), dataGridView2, "ResultQ");
			if (checkRelationR->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixR->reach(), radioButton2->Checked), dataGridView3, "ResultR");
			break;
		case 4:
			if (checkRelationP->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixP->mutualReach(), radioButton2->Checked), dataGridView1, "ResultP");
			if (checkRelationQ->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixQ->mutualReach(), radioButton2->Checked), dataGridView2, "ResultQ");
			if (checkRelationR->Checked) DisplayMatrixRelation(resultRelation->ConvertToMatrixRelation(MatrixR->mutualReach(), radioButton2->Checked), dataGridView3, "ResultR");
			break;
		default:
			break;
		}
	}

		   MatrixRelation^ ReadListBoxItemsAndAddToVector(ListBox^ listBox) {
			   List<String^>^ stringList = gcnew List<String^>();
			   stringList->Clear();

			   for each (String ^ item in listBox->Items) {
				   // Знайти індекс першого входження символу =
				   int index = item->IndexOf('=');

				   // Очистити стрічку до символу =
				   String^ cleanedString = (index != -1) ? item->Substring(index + 1) : item;
				   cleanedString = cleanedString->Replace("{", "")->Replace("}", "")->Replace("a", "");

				   stringList->Add(cleanedString->Trim());
			   }
			   int size = stringList->Count;
			   MatrixRelation^ temp = gcnew MatrixRelation(size, size);

			   for (int i = 0; i < size; i++) {
				   for (int j = 0; j < size; j++) {
					   temp->setElement(i, j, 0);
				   }
			   }
			   int i = 0;
			   for each (String ^ item in stringList) {
				   array<String^>^ parts = item->Split(',');

				   for each (String ^ part in parts) {
					   int index = Int32::Parse(part);
					   if (index >= 0 && index <= size) {

						   temp->setElement(i, index - 1, 1); // Встановити 1 на діагоналі для кожного індексу

					   }

				   }
				   i++;
			   }
			   return temp;
		   }
	private: System::Void Btn_Distance_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MatrixRelation^ first = nullptr;
		MatrixRelation^ second = nullptr;
		MatrixRelation^ MatrixP = nullptr;
		MatrixRelation^ MatrixQ = nullptr;
		MatrixRelation^ MatrixR = nullptr;
		MatrixRelation^ MatrixRi = gcnew MatrixRelation(ReadListBoxItemsAndAddToVector(listBox1));
		float resultDinst = 0.0;
		bool consistent = false;

		try
		{
			if (radioButton2->Checked) {
				MatrixP = gcnew MetricMatrixRelation(MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 1));
				MatrixQ = gcnew MetricMatrixRelation(MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 1));
				MatrixR = gcnew MetricMatrixRelation(MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 1));
				first = gcnew MetricMatrixRelation();
				second = gcnew MetricMatrixRelation();
			}
			else {
				MatrixP = MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 0);
				MatrixQ = MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0);
				MatrixR = MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView3, radioButton1->Checked), 0);
				first = gcnew MatrixRelation();
				second = gcnew MatrixRelation();
			}

		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Matrices not created.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (Distance1->SelectedIndex == 0) { first = MatrixP; }
		else if (Distance1->SelectedIndex == 1) { first = MatrixQ; }
		else if (Distance1->SelectedIndex == 2) { first = MatrixR; }
		else { first = MatrixRi; }

		if (Distance2->SelectedIndex == 0) { second = MatrixP; }
		else if (Distance2->SelectedIndex == 1) { second = MatrixQ; }
		else if (Distance2->SelectedIndex == 2) { first = MatrixR; }
		else { second = MatrixRi; }

		if (first->isConsistent() && second->isConsistent()) consistent = true;

		if (first->isEquivalence() && radioButton1->Checked) {
			resultDinst = first->EquivalenceCalculateDistance(second);
		}
		else {
			resultDinst = first->calculateDistance(second->ConvertToMatrixRelation(second, 0), consistent);
		}
		ResultDist->Text = resultDinst.ToString();
	}

	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input = textBox1->Text;
		listBox1->Items->Add(input);
	}
	private: System::Void ClearMatrixforR_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<int> result1, result2, result3, result4;
		std::string text1, text2, text3, text4;
		MatrixRelation^ Matrix;

		try
		{
			if (comboBox1->SelectedIndex == 0) {
				MatrixRelation^ MatrixP = gcnew MatrixRelation(MatrixP->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView1, radioButton1->Checked), 0));
				Matrix = MatrixP;
			}
			else if (comboBox1->SelectedIndex == 1) {
				MatrixRelation^ MatrixQ = gcnew MatrixRelation(MatrixQ->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0));
				Matrix = MatrixQ;
			}
			else if (comboBox1->SelectedIndex == 2) {
				MatrixRelation^ MatrixR = gcnew MatrixRelation(MatrixR->ConvertToMatrixRelation(GetRelationFromDataGridView(dataGridView2, radioButton1->Checked), 0));
				Matrix = MatrixR;
			}
			else {
				MatrixRelation^ MatrixRi = gcnew MatrixRelation(ReadListBoxItemsAndAddToVector(listBox1));
				Matrix = MatrixRi;
			}

		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Matrices not created.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		result1 = Matrix->findMaximums();
		result2 = Matrix->findMinimums();
		result3 = Matrix->findMinors();
		result4 = Matrix->findMajors();
		listBoxResult->Items->Clear();
		listBoxResult->Items->Add("Максимум = " + convertToSrting(result1));
		listBoxResult->Items->Add("Мінімум = " + convertToSrting(result2));
		listBoxResult->Items->Add("Мінорант = " + convertToSrting(result3));
		listBoxResult->Items->Add("Мажорант = " + convertToSrting(result4));
		return;
	}
		   String^ convertToSrting(std::vector<int> res)
		   {
			   String^ temp;
			   if (res.empty()) temp += "Немає";
			   else {
				   for (int i = 0; i < res.size(); ++i)
				   {
					   res[i] += 1;
					   if (i == res.size() - 1)
					   {
						   temp += res[i].ToString();
					   }
					   else
						   temp += res[i].ToString() + ", ";
				   }
			   }
			   return temp;
		   }
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
