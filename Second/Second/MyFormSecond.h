#pragma once

namespace Second {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyFormSecond
	/// </summary>
	public ref class MyFormSecond : public System::Windows::Forms::Form
	{
	public:
		MyFormSecond(void)
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
		~MyFormSecond()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите значение километров:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите значение расхода топлива:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите значение стоимости топлива:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(241, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(241, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(241, 112);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 59);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Посчитать стоимость 1-ой поездки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormSecond::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(241, 173);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(444, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Введите значение километров:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(444, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Введите значение расхода топлива:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(444, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Введите значение стоимости топлива:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(694, 10);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(694, 61);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(694, 109);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(501, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 59);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Посчитать стоимость 2-ой поездки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormSecond::button2_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(694, 173);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(238, 246);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Введите значение километров:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(238, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(190, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Введите значение расхода топлива:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(238, 323);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(203, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Введите значение стоимости топлива:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(291, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 60);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Посчитать стоимость 3-ой поездки";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormSecond::button3_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(488, 243);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 20;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(488, 285);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(488, 320);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(488, 393);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 23;
			// 
			// MyFormSecond
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(889, 475);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormSecond";
			this->Text = L"MyFormSecond";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double km, rt, fuel, price;
		km = System::Convert::ToDouble(textBox1->Text);
		rt = System::Convert::ToDouble(textBox2->Text);
		fuel = System::Convert::ToDouble(textBox3->Text);
		price = rt / 100 * km * fuel;
		textBox4->Text = System::Convert::ToString(price);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double km, rt, fuel, price;
		km = System::Convert::ToDouble(textBox5->Text);
		rt = System::Convert::ToDouble(textBox6->Text);
		fuel = System::Convert::ToDouble(textBox7->Text);
		price = rt / 100 * km * fuel;
		textBox8->Text = System::Convert::ToString(price);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double km, rt, fuel, price;
		km = System::Convert::ToDouble(textBox9->Text);
		rt = System::Convert::ToDouble(textBox10->Text);
		fuel = System::Convert::ToDouble(textBox11->Text);
		price = rt / 100 * km * fuel;
		textBox12->Text = System::Convert::ToString(price);
}
};
}
