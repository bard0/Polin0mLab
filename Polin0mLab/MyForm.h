
#pragma once
#include "List.h"

namespace Polin0mLab {

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
			A = new List;
			B = new List;
			C = new List;
			D = new List;
			E = new List;
			F = new List;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
			 int k, x, y, z, k1, x1, y1, z1, k3, k2;
			 List *A, *B, *C, *D, *E, *F;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  P;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->P = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(21, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(21, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(185, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(21, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 102);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(31, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(131, 102);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(21, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(158, 102);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(21, 20);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(185, 102);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(21, 20);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(341, 49);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(416, 20);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(341, 103);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(416, 20);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(66, 286);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(712, 20);
			this->textBox11->TabIndex = 10;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(229, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 29);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(102, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 27);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Сложить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(331, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(207, 27);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Вычесть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(569, 159);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 43);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Умножить полином 1 на число";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(99, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"K";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(138, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Y";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(192, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Z";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(99, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"K";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(138, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"X";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(165, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Y";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(192, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Z";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// P
			// 
			this->P->AutoSize = true;
			this->P->Location = System::Drawing::Point(66, 270);
			this->P->Name = L"P";
			this->P->Size = System::Drawing::Size(59, 13);
			this->P->TabIndex = 17;
			this->P->Text = L"Результат";
			this->P->Click += gcnew System::EventHandler(this, &MyForm::P_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(91, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Введите данные для мономов";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(268, 312);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(337, 29);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Ввести данные заново";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(569, 219);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(133, 42);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Умножить полином 2 на число";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(708, 171);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(29, 20);
			this->textBox12->TabIndex = 21;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(708, 231);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(29, 20);
			this->textBox13->TabIndex = 22;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox13_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 373);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->P);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void print(List *A1, System::Windows::Forms::TextBox^ txt)
		{
			txt->Text = "";
			if (A1->IsEmpty()) {
				txt->Text = "0";
			}
			else {
				for (int i = 0; i < A1->GetLen(); i++)
				{
					if (i != (A1->GetLen() - 1))
					{
						txt->Text += System::Convert::ToString(A1->GetCurrData(i));
						txt->Text += " x^";
						txt->Text += System::Convert::ToString(A1->GetCurrDegree(i) / 100);
						txt->Text += " y^";
						txt->Text += System::Convert::ToString(A1->GetCurrDegree(i) / 10 - int(A1->GetCurrDegree(i) / 100) * 10);
						txt->Text += " z^";
						txt->Text += System::Convert::ToString(A1->GetCurrDegree(i) % 10);
						txt->Text += " + ";
					}
					else
					{
						txt->Text += System::Convert::ToString(A1->GetCurrData(i));
						txt->Text += " x^";
						txt->Text += System::Convert::ToString(A1->GetCurrDegree(i) / 100);
						txt->Text += " y^";
						txt->Text += System::Convert::ToString(A1->GetCurrDegree(i) / 10 - int(A1->GetCurrDegree(i) / 100) * 10);
						txt->Text += " z^";
						txt->Text += System::Convert::ToString(A1->GetCurrDegree(i) % 10);
					}
				}
			}
		}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "") {
		k = System::Convert::ToInt32(textBox1->Text);
		x = System::Convert::ToInt32(textBox2->Text);
		y = System::Convert::ToInt32(textBox3->Text);
		z = System::Convert::ToInt32(textBox4->Text);
		A->insert(k, x * 100 + y * 10 + z);
		print(A, textBox9);
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox5->Text != "") {
		k1 = System::Convert::ToInt32(textBox5->Text);
		x1 = System::Convert::ToInt32(textBox6->Text);
		y1 = System::Convert::ToInt32(textBox7->Text);
		z1 = System::Convert::ToInt32(textBox8->Text);
		B->insert(k1, x1 * 100 + y1 * 10 + z1);
		print(B, textBox10);
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox5->Text = "";
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (C->IsEmpty()) {
		C = sum(A, B);
		print(C, textBox11);
	}
	else {
		C = sum(C,sum(A, B));
		print(C, textBox11);
	}
	
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void P_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	e->Handled = true;
}
private: System::Void textBox10_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	e->Handled = true;
}
private: System::Void textBox11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	e->Handled = true;
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox1->Text == "" && e->KeyChar == 48) {
		e->Handled = true;
	}
	if (e->KeyChar == 48 && textBox1->Text != "" && textBox1->SelectionStart == 0)
		e->Handled = true;

	if (e->KeyChar == 45)
		e->Handled = false;
}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox5->Text == "" && e->KeyChar == 48) {
		e->Handled = true;
	}
	if (e->KeyChar == 48 && textBox5->Text != "" && textBox5->SelectionStart == 0)
		e->Handled = true;

	if (e->KeyChar == 45)
		e->Handled = false;

}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox2->Text->Length > 0 && e->KeyChar != 8)
		e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox3->Text->Length > 0 && e->KeyChar != 8)
		e->Handled = true;
}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox4->Text->Length > 0 && e->KeyChar != 8)
		e->Handled = true;
}
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox6->Text->Length > 0 && e->KeyChar != 8)
		e->Handled = true;
}
private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox7->Text->Length > 0 && e->KeyChar != 8)
		e->Handled = true;
}
private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox8->Text->Length > 0 && e->KeyChar != 8)
		e->Handled = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (D->IsEmpty()) {
		D = raz(A, B);
		print(D, textBox11);
	}
	else {
		D = raz(D, raz(A, B));
		print(D, textBox11);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	if (textBox12->Text != "") {
		if (E->IsEmpty()) {
			k3 = System::Convert::ToInt32(textBox12->Text);
			E = pro(k3, A);
			print(E, textBox11);
		}
		else {
			E = pro(k3, pro(k3, A));
			print(E, textBox11);
		}
	}
	textBox12->Text = "";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!A->IsEmpty()) {
		A->DelAll();
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox9->Text = "";
	}
	if (!B->IsEmpty()) {
		B->DelAll();
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox5->Text = ""; 
		textBox10->Text = "";
	}
	if (!C->IsEmpty()) {
		C->DelAll();
		textBox11->Text = "";
	}
	if (!D->IsEmpty()) {
		D->DelAll();
		textBox11->Text = "";
	}
	if (!E->IsEmpty()) {
		E->DelAll();
		textBox11->Text = "";
	}
	if (!F->IsEmpty()) {
		F->DelAll();
		textBox11->Text = "";
	}
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox13->Text != "") {
		if (F->IsEmpty()) {
			k2 = System::Convert::ToInt32(textBox13->Text);
			F = pro(k2, B);
			print(F, textBox11);
		}
		else {
			F = pro(k2, pro(k2, B));
			print(F, textBox11);
		}
	}
	textBox13->Text = "";
}
private: System::Void textBox12_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox12->Text == "" && e->KeyChar == 48) {
		e->Handled = true;
	}
	if (e->KeyChar == 48 && textBox12->Text != "" && textBox12->SelectionStart == 0)
		e->Handled = true;

	if (e->KeyChar == 45)
		e->Handled = false;
	
}
private: System::Void textBox13_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (textBox13->Text == "" && e->KeyChar == 48) {
		e->Handled = true;
	}
	if (e->KeyChar == 48 && textBox13->Text != "" && textBox13->SelectionStart == 0)
		e->Handled = true;

	if (e->KeyChar == 45)
		e->Handled = false;
}
};
}
