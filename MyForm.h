#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>
namespace Vir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 487);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(626, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(48, 351);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выход:\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(49, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Слово 2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(49, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Слово 1:\r\n";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(54, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(256, 40);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(54, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(256, 40);
			this->textBox2->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(389, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 19);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Матрица похожести:\r\n";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox4->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(393, 53);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(223, 176);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(54, 390);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(256, 40);
			this->textBox3->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(389, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Матрица закрашенности:\r\n";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox5->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light Condensed", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(393, 277);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(223, 183);
			this->textBox5->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(646, 531);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	} 
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox4->Text = ""; 
	textBox5->Text = "";

	//заполнение матриц
	String^ word1;
	word1 = Convert::ToString(textBox1->Text);
	String^ word2;
	word2 = Convert::ToString(textBox2->Text);

	int** matrix1;
	int** matrix2;

	matrix1 = new int* [word1->Length];
	matrix2 = new int* [word1->Length];
	for (int i = 0; i < word1->Length; i++) 
	{
		matrix1[i] = new int[word2->Length];
		matrix2[i] = new int[word2->Length];
	}
	
	//матрица закрашенности
	for (int i = 0; i < word1->Length; i++)
	{
		for (int j = 0; j < word2->Length; j++)
		{
			if (word1[i] == word2[j])
			{
				matrix1[i][j] = 1;
			}
			else
			{
				matrix1[i][j] = 0;
			}
		}
	};
	
	//матрица похожести
	for (int i = 0; i < word1->Length; i++)
	{
		for (int j = 0; j < word2->Length; j++) 
		{
			if (matrix1[i][j])
			{
				if (i == 0 || j == 0)
				{
					matrix2[i][j] = 1;
 					for (int x = j; x < word2->Length; ++x)
					{
						matrix2[i][x] = 1;
					}
				}
				else
				{
					matrix2[i][j] = matrix2[i - 1][j - 1] + 1;
				}
			}
			else 
			{
				if (i == 0 || j == 0)
				{
					matrix2[i][j] = 0;
				}
				else 
				{
					matrix2[i][j] = max(matrix2[i - 1][j], matrix2[i][j - 1]);
				}
			}
		}
	}
	
	// вывод выхода
	String^ sub;
	for (int i = 1; i < word1->Length; i++)
	{
		for (int j = 1; j < word2->Length; j++)
		{
			if (matrix1[i][j])
			{
				sub += Convert::ToString(word2[j]);
				break;
			}
		}
	};
	textBox3->Text = sub;

	//вывод матрицы закрашенности
	for (int i = 0; i < word2->Length; i++)
	{
		for (int j = 0; j < word1->Length; j++)
		{
			textBox4->Text += matrix1[j][i];
			textBox4->Text += " ";
		}
		textBox4->Text += System::Environment::NewLine;
	}

	//вывод матрицы похожести
	for (int i = 0; i < word2->Length; i++)
	{
		for (int j = 0; j < word1->Length; j++)
		{
			textBox5->Text += matrix2[j][i];
			textBox5->Text += " ";
		}
		textBox5->Text += System::Environment::NewLine;
	}
}


};
}
