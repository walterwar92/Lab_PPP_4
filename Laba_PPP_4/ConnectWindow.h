
#pragma once
#include "MainWindow.h"

namespace DBC {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace DBC;
	/// <summary>
	/// Сводка для ConnectWindow
	/// </summary>


	public ref class ConnectWindow : public System::Windows::Forms::Form
	{
	public:
		String^ connectingstring;
		SqlConnection^ connection;
		ConnectWindow(void)
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
		~ConnectWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_login;
	private: System::Windows::Forms::TextBox^ txt_passwd;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnClick_Connect;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_server;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_passwd = (gcnew System::Windows::Forms::TextBox());
			this->btnClick_Connect = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_server = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_login
			// 
			this->txt_login->Location = System::Drawing::Point(12, 32);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(239, 22);
			this->txt_login->TabIndex = 0;
			this->txt_login->TextChanged += gcnew System::EventHandler(this, &ConnectWindow::textBox1_TextChanged);
			// 
			// txt_passwd
			// 
			this->txt_passwd->Location = System::Drawing::Point(12, 60);
			this->txt_passwd->Name = L"txt_passwd";
			this->txt_passwd->PasswordChar = '*';
			this->txt_passwd->Size = System::Drawing::Size(239, 22);
			this->txt_passwd->TabIndex = 1;
			this->txt_passwd->UseSystemPasswordChar = true;
			// 
			// btnClick_Connect
			// 
			this->btnClick_Connect->Location = System::Drawing::Point(117, 88);
			this->btnClick_Connect->Name = L"btnClick_Connect";
			this->btnClick_Connect->Size = System::Drawing::Size(134, 23);
			this->btnClick_Connect->TabIndex = 2;
			this->btnClick_Connect->Text = L"Connect";
			this->btnClick_Connect->UseVisualStyleBackColor = true;
			this->btnClick_Connect->Click += gcnew System::EventHandler(this, &ConnectWindow::btnClick_Connect_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &ConnectWindow::label2_Click);
			// 
			// txt_server
			// 
			this->txt_server->Location = System::Drawing::Point(13, 4);
			this->txt_server->Name = L"txt_server";
			this->txt_server->Size = System::Drawing::Size(238, 22);
			this->txt_server->TabIndex = 5;
			this->txt_server->TextChanged += gcnew System::EventHandler(this, &ConnectWindow::txt_server_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(257, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Server";
			this->label3->Click += gcnew System::EventHandler(this, &ConnectWindow::label3_Click);
			// 
			// ConnectWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(327, 139);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_server);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClick_Connect);
			this->Controls->Add(this->txt_passwd);
			this->Controls->Add(this->txt_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ConnectWindow";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClick_Connect_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Server = txt_server->Text;
		String^ login = txt_login->Text;
		String^ password = txt_passwd->Text;
		connectingstring = "Data Source=" + Server + ";User ID=" + login + ";Password=" + password + ";";
		try {
			// Проверяем соединение
			connection = gcnew SqlConnection(connectingstring);
			connection->Open();
			this->Hide();
			MessageBox::Show("Connection successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			MainWindow^ window = gcnew MainWindow(connection);
			window->Show();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Connection error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_server_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
