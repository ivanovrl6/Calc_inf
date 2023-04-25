#pragma once
#include "Header.h"
#include <Windows.h>

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			i = 0;
			a = 0;
			b = 0;
			ms = 0;
			st = State::FirstDigit;
			ok_ans = true, DecPushed = false, saved = false, JustPushed = false, message = false, calc = false;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Label^ lbl_input;
	private: System::Windows::Forms::Button^ btn_neg;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_dec;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_CE;
	private: System::Windows::Forms::Button^ btn_C;
	private: System::Windows::Forms::Button^ btn_MC;
	private: System::Windows::Forms::Button^ btn_ans;
	private: System::Windows::Forms::Button^ btn_sum;
	private: System::Windows::Forms::Button^ btn_sub;
	private: System::Windows::Forms::Button^ btn_mul;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btn_MR;
	private: System::Windows::Forms::Button^ btn_Mp;
	private: System::Windows::Forms::Button^ btn_Mm;
	private: System::Windows::Forms::Button^ btn_MS;


	protected:



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->btn_neg = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_dec = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_CE = (gcnew System::Windows::Forms::Button());
			this->btn_C = (gcnew System::Windows::Forms::Button());
			this->btn_MC = (gcnew System::Windows::Forms::Button());
			this->btn_ans = (gcnew System::Windows::Forms::Button());
			this->btn_sum = (gcnew System::Windows::Forms::Button());
			this->btn_sub = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_MR = (gcnew System::Windows::Forms::Button());
			this->btn_Mp = (gcnew System::Windows::Forms::Button());
			this->btn_Mm = (gcnew System::Windows::Forms::Button());
			this->btn_MS = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_1->Location = System::Drawing::Point(16, 596);
			this->btn_1->Margin = System::Windows::Forms::Padding(4);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(106, 105);
			this->btn_1->TabIndex = 0;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_2->Location = System::Drawing::Point(130, 596);
			this->btn_2->Margin = System::Windows::Forms::Padding(4);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(113, 105);
			this->btn_2->TabIndex = 1;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_3->Location = System::Drawing::Point(251, 596);
			this->btn_3->Margin = System::Windows::Forms::Padding(4);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(121, 105);
			this->btn_3->TabIndex = 2;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// lbl_input
			// 
			this->lbl_input->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lbl_input->Location = System::Drawing::Point(16, 12);
			this->lbl_input->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(474, 129);
			this->lbl_input->TabIndex = 3;
			this->lbl_input->Text = L"0";
			this->lbl_input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_neg
			// 
			this->btn_neg->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_neg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_neg->Location = System::Drawing::Point(251, 262);
			this->btn_neg->Margin = System::Windows::Forms::Padding(4);
			this->btn_neg->Name = L"btn_neg";
			this->btn_neg->Size = System::Drawing::Size(121, 102);
			this->btn_neg->TabIndex = 4;
			this->btn_neg->Text = L"+/-";
			this->btn_neg->UseVisualStyleBackColor = false;
			this->btn_neg->Click += gcnew System::EventHandler(this, &MyForm::btn_neg_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_0->Location = System::Drawing::Point(130, 709);
			this->btn_0->Margin = System::Windows::Forms::Padding(4);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(113, 105);
			this->btn_0->TabIndex = 5;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_0_Click);
			// 
			// btn_dec
			// 
			this->btn_dec->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_dec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_dec->Location = System::Drawing::Point(16, 709);
			this->btn_dec->Margin = System::Windows::Forms::Padding(4);
			this->btn_dec->Name = L"btn_dec";
			this->btn_dec->Size = System::Drawing::Size(106, 105);
			this->btn_dec->TabIndex = 6;
			this->btn_dec->Text = L",";
			this->btn_dec->UseVisualStyleBackColor = false;
			this->btn_dec->Click += gcnew System::EventHandler(this, &MyForm::btn_dec_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_4->Location = System::Drawing::Point(16, 482);
			this->btn_4->Margin = System::Windows::Forms::Padding(4);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(106, 106);
			this->btn_4->TabIndex = 7;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_5->Location = System::Drawing::Point(130, 482);
			this->btn_5->Margin = System::Windows::Forms::Padding(4);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(113, 106);
			this->btn_5->TabIndex = 8;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_6->Location = System::Drawing::Point(251, 482);
			this->btn_6->Margin = System::Windows::Forms::Padding(4);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(121, 106);
			this->btn_6->TabIndex = 9;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_7->Location = System::Drawing::Point(16, 372);
			this->btn_7->Margin = System::Windows::Forms::Padding(4);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(106, 102);
			this->btn_7->TabIndex = 10;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_8->Location = System::Drawing::Point(130, 372);
			this->btn_8->Margin = System::Windows::Forms::Padding(4);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(113, 102);
			this->btn_8->TabIndex = 11;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_9->Location = System::Drawing::Point(251, 372);
			this->btn_9->Margin = System::Windows::Forms::Padding(4);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(121, 102);
			this->btn_9->TabIndex = 12;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_CE
			// 
			this->btn_CE->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_CE->Location = System::Drawing::Point(130, 262);
			this->btn_CE->Margin = System::Windows::Forms::Padding(4);
			this->btn_CE->Name = L"btn_CE";
			this->btn_CE->Size = System::Drawing::Size(113, 102);
			this->btn_CE->TabIndex = 13;
			this->btn_CE->Text = L"CE";
			this->btn_CE->UseVisualStyleBackColor = false;
			this->btn_CE->Click += gcnew System::EventHandler(this, &MyForm::btn_CE_Click);
			// 
			// btn_C
			// 
			this->btn_C->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_C->Location = System::Drawing::Point(16, 262);
			this->btn_C->Margin = System::Windows::Forms::Padding(4);
			this->btn_C->Name = L"btn_C";
			this->btn_C->Size = System::Drawing::Size(106, 102);
			this->btn_C->TabIndex = 14;
			this->btn_C->Text = L"C";
			this->btn_C->UseVisualStyleBackColor = false;
			this->btn_C->Click += gcnew System::EventHandler(this, &MyForm::btn_C_Click);
			// 
			// btn_MC
			// 
			this->btn_MC->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_MC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_MC->Location = System::Drawing::Point(16, 158);
			this->btn_MC->Margin = System::Windows::Forms::Padding(4);
			this->btn_MC->Name = L"btn_MC";
			this->btn_MC->Size = System::Drawing::Size(106, 96);
			this->btn_MC->TabIndex = 15;
			this->btn_MC->Text = L"MC";
			this->btn_MC->UseVisualStyleBackColor = false;
			this->btn_MC->Click += gcnew System::EventHandler(this, &MyForm::btn_MC_Click);
			// 
			// btn_ans
			// 
			this->btn_ans->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_ans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_ans->Location = System::Drawing::Point(380, 709);
			this->btn_ans->Margin = System::Windows::Forms::Padding(4);
			this->btn_ans->Name = L"btn_ans";
			this->btn_ans->Size = System::Drawing::Size(110, 105);
			this->btn_ans->TabIndex = 16;
			this->btn_ans->Text = L"=";
			this->btn_ans->UseVisualStyleBackColor = false;
			this->btn_ans->Click += gcnew System::EventHandler(this, &MyForm::btn_ans_Click);
			// 
			// btn_sum
			// 
			this->btn_sum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_sum->Location = System::Drawing::Point(251, 709);
			this->btn_sum->Margin = System::Windows::Forms::Padding(4);
			this->btn_sum->Name = L"btn_sum";
			this->btn_sum->Size = System::Drawing::Size(121, 105);
			this->btn_sum->TabIndex = 17;
			this->btn_sum->Text = L"+";
			this->btn_sum->UseVisualStyleBackColor = false;
			this->btn_sum->Click += gcnew System::EventHandler(this, &MyForm::btn_sum_Click);
			// 
			// btn_sub
			// 
			this->btn_sub->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_sub->Location = System::Drawing::Point(380, 596);
			this->btn_sub->Margin = System::Windows::Forms::Padding(4);
			this->btn_sub->Name = L"btn_sub";
			this->btn_sub->Size = System::Drawing::Size(110, 105);
			this->btn_sub->TabIndex = 18;
			this->btn_sub->Text = L"-";
			this->btn_sub->UseVisualStyleBackColor = false;
			this->btn_sub->Click += gcnew System::EventHandler(this, &MyForm::btn_sub_Click);
			// 
			// btn_mul
			// 
			this->btn_mul->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_mul->Location = System::Drawing::Point(380, 372);
			this->btn_mul->Margin = System::Windows::Forms::Padding(4);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(110, 102);
			this->btn_mul->TabIndex = 19;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = false;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::btn_mul_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->btn_div->Location = System::Drawing::Point(380, 482);
			this->btn_div->Margin = System::Windows::Forms::Padding(4);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(110, 106);
			this->btn_div->TabIndex = 20;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_MR
			// 
			this->btn_MR->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_MR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_MR->Location = System::Drawing::Point(130, 158);
			this->btn_MR->Margin = System::Windows::Forms::Padding(4);
			this->btn_MR->Name = L"btn_MR";
			this->btn_MR->Size = System::Drawing::Size(113, 96);
			this->btn_MR->TabIndex = 21;
			this->btn_MR->Text = L"MR";
			this->btn_MR->UseVisualStyleBackColor = false;
			this->btn_MR->Click += gcnew System::EventHandler(this, &MyForm::btn_MR_Click);
			// 
			// btn_Mp
			// 
			this->btn_Mp->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_Mp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_Mp->Location = System::Drawing::Point(380, 158);
			this->btn_Mp->Margin = System::Windows::Forms::Padding(4);
			this->btn_Mp->Name = L"btn_Mp";
			this->btn_Mp->Size = System::Drawing::Size(110, 96);
			this->btn_Mp->TabIndex = 22;
			this->btn_Mp->Text = L"M+";
			this->btn_Mp->UseVisualStyleBackColor = false;
			this->btn_Mp->Click += gcnew System::EventHandler(this, &MyForm::btn_Mp_Click);
			// 
			// btn_Mm
			// 
			this->btn_Mm->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_Mm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_Mm->Location = System::Drawing::Point(380, 262);
			this->btn_Mm->Margin = System::Windows::Forms::Padding(4);
			this->btn_Mm->Name = L"btn_Mm";
			this->btn_Mm->Size = System::Drawing::Size(110, 102);
			this->btn_Mm->TabIndex = 23;
			this->btn_Mm->Text = L"M-";
			this->btn_Mm->UseVisualStyleBackColor = false;
			this->btn_Mm->Click += gcnew System::EventHandler(this, &MyForm::btn_Mm_Click);
			// 
			// btn_MS
			// 
			this->btn_MS->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_MS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_MS->Location = System::Drawing::Point(251, 158);
			this->btn_MS->Margin = System::Windows::Forms::Padding(4);
			this->btn_MS->Name = L"btn_MS";
			this->btn_MS->Size = System::Drawing::Size(121, 96);
			this->btn_MS->TabIndex = 24;
			this->btn_MS->Text = L"MS";
			this->btn_MS->UseVisualStyleBackColor = false;
			this->btn_MS->Click += gcnew System::EventHandler(this, &MyForm::btn_MS_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(507, 844);
			this->Controls->Add(this->btn_MS);
			this->Controls->Add(this->btn_Mm);
			this->Controls->Add(this->btn_Mp);
			this->Controls->Add(this->btn_MR);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_sub);
			this->Controls->Add(this->btn_sum);
			this->Controls->Add(this->btn_ans);
			this->Controls->Add(this->btn_MC);
			this->Controls->Add(this->btn_C);
			this->Controls->Add(this->btn_CE);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_dec);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_neg);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		float a, b, ans;
		Char op;
		State st;
		float ms;
		bool ok, ok_ans, DecPushed, saved, JustPushed, message, calc;
		int i;
		double result=0;
		Double slag1;
		Double slag2;

	private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
		message = false;
		JustPushed = false;
		String^ number = ((Button^)sender)->Text;

		switch (st)
		{
		case State::FirstDigit:
			b = 0;
			a = 0;
			ans = 0;
			st = FirstDigit;
			op = '\0';
			ok_ans = true;
			DecPushed = false;
			JustPushed = false;
			message = false;
			lbl_input->Text = number;
			st = State::InputNumber;
			break;
		case State::InputNumber:
			if (lbl_input->Text=="0") {
				result = Convert::ToDouble(number) + Convert::ToDouble(lbl_input->Text);
				lbl_input->Text = Convert::ToString(result);
			}
			else {
				lbl_input->Text = Convert::ToString(lbl_input->Text) + Convert::ToString(number);
			}
			ok_ans = true;
			break;
		case State::Calculation:
			if (ok) {
				lbl_input->Text = number;
				ok = false;
			}
			else
				lbl_input->Text += number;
			break;
		}
	}
	private: System::Void btn_0_Click(System::Object^ sender, System::EventArgs^ e) {
		message = false;
		JustPushed = false;
		if (st == InputNumber) {
			String^ number = ((Button^)sender)->Text;
			lbl_input->Text += number;
		}
		if (st == FirstDigit)
			lbl_input->Text = "0";
		if (st == Calculation)
			if (ok)
				lbl_input->Text = "0";
			else {
				String^ number = ((Button^)sender)->Text;
				lbl_input->Text += number;
			}
	}
	private: System::Void btn_CE_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl_input->Text = "0";
		st = InputNumber;
		ok_ans = true;
		DecPushed = false;
		message = false;
	}
	private: System::Void btn_C_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl_input->Text = "0";
		b = 0;
		a = 0;
		ans = 0;
		st = FirstDigit;
		op = '\0';
		ok_ans = true;
		DecPushed = false;
		JustPushed = false;
		message = false;
	}
	private: System::Void btn_sum_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false)
			if (JustPushed) {
				op = '+';
			}
			else {
				if ((op == '+' || op == '-' || op == '*' || op == '/') && st != FirstDigit) {
					btn_ans_Click(sender, e);
				}
				else
				a = Convert::ToSingle(lbl_input->Text);
				op = L'+';
				st = Calculation;
				calc = true;
				ok_ans = true;
				ok = true;
				DecPushed = false;
				JustPushed = true;
			}
	}
	private: System::Void btn_ans_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == true)
			btn_0_Click(sender, e);
		else {
			if (ok_ans) {
				b = Convert::ToSingle(lbl_input->Text);
				ok_ans = false;
			}
			if (b == 0 && op == '/') {
				btn_C_Click(sender, e);
				lbl_input->Text = "ƒеление на ноль невозможно";
				message = true;
				st = FirstDigit;
			}
			else {
				switch (op) {
				case '+':
					ans = a + b;
					a = ans;
					DecPushed = false;
					break;

				case '-':
					ans = a - b;
					a = ans;
					DecPushed = false;
					break;
				case '*':
					ans = a * b;
					a = ans;
					DecPushed = false;
					break;
				case '/':
					ans = a / b;
					a = ans;
					DecPushed = false;
					break;
				}
				if (st == InputNumber && calc != true)
					ans = b;
				lbl_input->Text = Convert::ToString(ans);
				st = FirstDigit;
				calc = false;
				DecPushed = false;
			}
		}
	}
	private: System::Void btn_neg_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false) {
			if ((lbl_input->Text)[0] != '-')
				lbl_input->Text = "-" + lbl_input->Text;
			else
				lbl_input->Text = lbl_input->Text->Substring(1, lbl_input->Text->Length - 1);
		}
	}
	private: System::Void btn_sub_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false)
			if (JustPushed)
				op = '-';
			else {
				if ((op == '+' || op == '-' || op == '*' || op == '/') && st != FirstDigit) {
					btn_ans_Click(sender, e);
				}
				else
					a = Convert::ToSingle(lbl_input->Text);
				op = L'-';
				st = Calculation;
				ok_ans = true;
				ok = true;
				DecPushed = false;
				JustPushed = true;
				calc = true;
			}
	}
	private: System::Void btn_mul_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false)
			if (JustPushed)
				op = '*';
			else {
				if ((op == '+' || op == '-' || op == '*' || op == '/') && st != FirstDigit) {
					btn_ans_Click(sender, e);
				}
				else
					a = Convert::ToSingle(lbl_input->Text);
				op = L'*';
				st = Calculation;
				ok_ans = true;
				ok = true;
				DecPushed = false;
				JustPushed = true;
				calc = true;
			}
	}
	private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false)
			if (JustPushed)
				op = '/';
			else {
				if ((op == '+' || op == '-' || op == '*' || op == '/') && st != FirstDigit) {
					btn_ans_Click(sender, e);
				}
				else
					a = Convert::ToSingle(lbl_input->Text);
				op = L'/';
				st = Calculation;
				ok_ans = true;
				ok = true;
				DecPushed = false;
				JustPushed = true;
				calc = true;
			}
	}
	private: System::Void btn_dec_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false)
			if (DecPushed == false) {
				if (st == FirstDigit) {
					DecPushed = true;
					lbl_input->Text = "0,";
					st = InputNumber;
				}
				else {
					DecPushed = true;
					lbl_input->Text += ",";
				}
				if (st == Calculation) {
					if (JustPushed == true) {
						lbl_input->Text = "0,";
						ok = false;
						DecPushed = true;
						JustPushed = false;
					}
				}
			}
	}
	private: System::Void btn_MS_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false) {
			ms = Convert::ToSingle(lbl_input->Text);
			saved = true;
		}
	}
	private: System::Void btn_MR_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false) {
			if (saved) {
				lbl_input->Text = Convert::ToString(ms);
				DecPushed = false;

			}
		}
	}
	private: System::Void btn_Mp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false) {
			if (saved)
				ms += Convert::ToSingle(lbl_input->Text);
		}
	}
	private: System::Void btn_Mm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false) {
			if (saved)
				ms -= Convert::ToSingle(lbl_input->Text);
		}
	}
	private: System::Void btn_MC_Click(System::Object^ sender, System::EventArgs^ e) {
		if (message == false) {
			ms = 0;
			saved = false;
		}
	}

	};
}