#pragma once

namespace CalculatorCLR {

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonCE;
	private: System::Windows::Forms::Button^ buttonBackspace;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonDot;
	private: System::Windows::Forms::Button^ buttonEquals;
	private: System::Windows::Forms::Button^ buttonSlash;
	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonPlusAndMinus;
	private: System::Windows::Forms::RichTextBox^ richTextBox;
	private: System::Windows::Forms::Label^ labelHistory;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonBackspace = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonSlash = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonPlusAndMinus = (gcnew System::Windows::Forms::Button());
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->labelHistory = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(71, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(127, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(15, 188);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(71, 188);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(127, 188);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(15, 132);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(71, 132);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(127, 132);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(15, 300);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(50, 50);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::NumberButtons);
			// 
			// buttonCE
			// 
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCE->Location = System::Drawing::Point(71, 76);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(50, 50);
			this->buttonCE->TabIndex = 11;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &MyForm::buttonCE_Click);
			// 
			// buttonBackspace
			// 
			this->buttonBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonBackspace->Location = System::Drawing::Point(15, 76);
			this->buttonBackspace->Name = L"buttonBackspace";
			this->buttonBackspace->Size = System::Drawing::Size(50, 50);
			this->buttonBackspace->TabIndex = 10;
			this->buttonBackspace->Text = L"←";
			this->buttonBackspace->UseVisualStyleBackColor = true;
			this->buttonBackspace->Click += gcnew System::EventHandler(this, &MyForm::buttonBackspace_Click);
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->Location = System::Drawing::Point(127, 76);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(50, 50);
			this->buttonC->TabIndex = 12;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonDot
			// 
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDot->Location = System::Drawing::Point(71, 300);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(50, 50);
			this->buttonDot->TabIndex = 13;
			this->buttonDot->Text = L",";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &MyForm::buttonDot_Click);
			// 
			// buttonEquals
			// 
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEquals->Location = System::Drawing::Point(127, 300);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(50, 50);
			this->buttonEquals->TabIndex = 14;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = true;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &MyForm::buttonEquals_Click);
			// 
			// buttonSlash
			// 
			this->buttonSlash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSlash->Location = System::Drawing::Point(183, 300);
			this->buttonSlash->Name = L"buttonSlash";
			this->buttonSlash->Size = System::Drawing::Size(50, 50);
			this->buttonSlash->TabIndex = 15;
			this->buttonSlash->Text = L"/";
			this->buttonSlash->UseVisualStyleBackColor = true;
			this->buttonSlash->Click += gcnew System::EventHandler(this, &MyForm::AriithmeticOp);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiply->Location = System::Drawing::Point(183, 244);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Padding = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->buttonMultiply->Size = System::Drawing::Size(50, 50);
			this->buttonMultiply->TabIndex = 16;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::AriithmeticOp);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->Location = System::Drawing::Point(183, 188);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(50, 50);
			this->buttonMinus->TabIndex = 17;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::AriithmeticOp);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(183, 132);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(50, 50);
			this->buttonPlus->TabIndex = 18;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::AriithmeticOp);
			// 
			// buttonPlusAndMinus
			// 
			this->buttonPlusAndMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlusAndMinus->Location = System::Drawing::Point(183, 76);
			this->buttonPlusAndMinus->Name = L"buttonPlusAndMinus";
			this->buttonPlusAndMinus->Size = System::Drawing::Size(50, 50);
			this->buttonPlusAndMinus->TabIndex = 19;
			this->buttonPlusAndMinus->Text = L"+/-";
			this->buttonPlusAndMinus->UseVisualStyleBackColor = true;
			this->buttonPlusAndMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlusAndMinus_Click);
			// 
			// richTextBox
			// 
			this->richTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox->Location = System::Drawing::Point(15, 28);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox->Size = System::Drawing::Size(218, 42);
			this->richTextBox->TabIndex = 20;
			this->richTextBox->Text = L"0";
			// 
			// labelHistory
			// 
			this->labelHistory->AutoSize = true;
			this->labelHistory->Location = System::Drawing::Point(15, 12);
			this->labelHistory->Name = L"labelHistory";
			this->labelHistory->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelHistory->Size = System::Drawing::Size(0, 13);
			this->labelHistory->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(250, 364);
			this->Controls->Add(this->labelHistory);
			this->Controls->Add(this->richTextBox);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonPlusAndMinus);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonBackspace);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->buttonSlash);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->buttonEquals);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"CalculatorCLR";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double firstNum, secondNum, answer;
		String^ charOp;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void NumberButtons(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ but = safe_cast<Button^>(sender);

		if (richTextBox->Text == "0")
		{
			richTextBox->Text = but->Text;
		}
		else
		{
			richTextBox->Text += but->Text;
		}
	}

	private: System::Void AriithmeticOp(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ but = safe_cast<Button^>(sender);

		charOp = but->Text;

		try
		{
			firstNum = Convert::ToDouble(richTextBox->Text);
		}
		catch (...)
		{
			ClearAll();
			MessageBox::Show("Some error occured", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		richTextBox->Text = "";
		labelHistory->Text = firstNum.ToString() + " " + charOp;
	}

	private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!richTextBox->Text->Contains(","))
		{
			richTextBox->Text += ",";
		}
	}

	private: System::Void buttonBackspace_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = richTextBox->Text;

		if (text->Length > 1)
		{
			text = text->Substring(0, text->Length - 1);
		}
		else
		{
			text = "0";
		}

		richTextBox->Text = text;
	}

	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearAll();
	}

	private: void ClearAll()
	{
		richTextBox->Text = "0";
		labelHistory->Text = "";

		firstNum = 0;
		secondNum = 0;
	}

	private: System::Void buttonCE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox->Text = "0";
	}

	private: System::Void buttonPlusAndMinus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = richTextBox->Text;

		if (text == "0")
			return;

		if (text->Contains("-"))
		{
			text = text->Remove(0, 1);
		}
		else
		{
			text = "-" + text;
		}

		richTextBox->Text = text;
	}

	private: System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			secondNum = Convert::ToDouble(richTextBox->Text);
		}
		catch (...)
		{
			ClearAll();
			MessageBox::Show("Some error occured", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		char charOpTemp = charOp[0];
		switch (charOpTemp)
		{
		case '+':
			answer = firstNum + secondNum;
			break;
		case '-':
			answer = firstNum - secondNum;
			break;
		case '*':
			answer = firstNum * secondNum;
			break;
		case '/':
			answer = firstNum / secondNum;
			break;
		}

		richTextBox->Text = answer.ToString();
		labelHistory->Text = firstNum.ToString() + " " + charOp + " " + secondNum.ToString();
	}
};
}
