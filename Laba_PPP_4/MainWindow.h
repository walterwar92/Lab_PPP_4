#include <fstream>
#include "ConnectWindow.h"
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
namespace DBC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace DBC;
	/// <summary>
	/// ������ ��� MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ connection;
		MainWindow(SqlConnection^ connection) {
			this->connection = connection;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ CreateTable_btn;
	private: System::Windows::Forms::Label^ Create_label;
	private: System::Windows::Forms::TextBox^ Table_txt;
	private: System::Windows::Forms::TextBox^ Tariff_txt_add;
	private: System::Windows::Forms::TextBox^ Cost_txt_add;
	private: System::Windows::Forms::TextBox^ Discount_txt_add;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ add_btn;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TariffName_txt_search;
	private: System::Windows::Forms::Button^ TariffName_search_btn;


	private: System::Windows::Forms::TextBox^ Discount_txt_search;


	private: System::Windows::Forms::TextBox^ Cost_txt_search;
	private: System::Windows::Forms::Button^ Cost_search_btn;
	private: System::Windows::Forms::Button^ Discount_search_btn;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Id_txt_delete;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Delete_btn;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ close_btn;


	private: System::Windows::Forms::Button^ to_txt_btn;

	private: System::Windows::Forms::TextBox^ string_sep;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ outputFilePath;
	private: System::Windows::Forms::Label^ label10;


	protected:



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CreateTable_btn = (gcnew System::Windows::Forms::Button());
			this->Create_label = (gcnew System::Windows::Forms::Label());
			this->Table_txt = (gcnew System::Windows::Forms::TextBox());
			this->Tariff_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->Cost_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->Discount_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TariffName_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->TariffName_search_btn = (gcnew System::Windows::Forms::Button());
			this->Discount_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->Cost_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->Cost_search_btn = (gcnew System::Windows::Forms::Button());
			this->Discount_search_btn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Id_txt_delete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Delete_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->close_btn = (gcnew System::Windows::Forms::Button());
			this->to_txt_btn = (gcnew System::Windows::Forms::Button());
			this->string_sep = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->outputFilePath = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// CreateTable_btn
			// 
			this->CreateTable_btn->Location = System::Drawing::Point(269, 11);
			this->CreateTable_btn->Name = L"CreateTable_btn";
			this->CreateTable_btn->Size = System::Drawing::Size(75, 23);
			this->CreateTable_btn->TabIndex = 2;
			this->CreateTable_btn->Text = L"Create";
			this->CreateTable_btn->UseVisualStyleBackColor = true;
			this->CreateTable_btn->Click += gcnew System::EventHandler(this, &MainWindow::CreateTable_btn_Click);
			// 
			// Create_label
			// 
			this->Create_label->AutoSize = true;
			this->Create_label->Location = System::Drawing::Point(55, 15);
			this->Create_label->Name = L"Create_label";
			this->Create_label->Size = System::Drawing::Size(102, 13);
			this->Create_label->TabIndex = 1;
			this->Create_label->Text = L"Create\\select table";
			this->Create_label->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// Table_txt
			// 
			this->Table_txt->Location = System::Drawing::Point(163, 12);
			this->Table_txt->MaxLength = 16;
			this->Table_txt->Name = L"Table_txt";
			this->Table_txt->Size = System::Drawing::Size(100, 22);
			this->Table_txt->TabIndex = 0;
			this->Table_txt->TextChanged += gcnew System::EventHandler(this, &MainWindow::Table_txt_TextChanged);
			// 
			// Tariff_txt_add
			// 
			this->Tariff_txt_add->Location = System::Drawing::Point(12, 80);
			this->Tariff_txt_add->Name = L"Tariff_txt_add";
			this->Tariff_txt_add->Size = System::Drawing::Size(165, 22);
			this->Tariff_txt_add->TabIndex = 3;
			// 
			// Cost_txt_add
			// 
			this->Cost_txt_add->Location = System::Drawing::Point(12, 108);
			this->Cost_txt_add->Name = L"Cost_txt_add";
			this->Cost_txt_add->Size = System::Drawing::Size(165, 22);
			this->Cost_txt_add->TabIndex = 4;
			// 
			// Discount_txt_add
			// 
			this->Discount_txt_add->Location = System::Drawing::Point(12, 136);
			this->Discount_txt_add->Name = L"Discount_txt_add";
			this->Discount_txt_add->Size = System::Drawing::Size(165, 22);
			this->Discount_txt_add->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(183, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Tariff Name";
			this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Cost";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(183, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Discount";
			this->label3->Click += gcnew System::EventHandler(this, &MainWindow::label3_Click);
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(12, 165);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(165, 23);
			this->add_btn->TabIndex = 9;
			this->add_btn->Text = L"Add data";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MainWindow::add_btn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Add data";
			// 
			// TariffName_txt_search
			// 
			this->TariffName_txt_search->Location = System::Drawing::Point(281, 80);
			this->TariffName_txt_search->Name = L"TariffName_txt_search";
			this->TariffName_txt_search->Size = System::Drawing::Size(165, 22);
			this->TariffName_txt_search->TabIndex = 11;
			// 
			// TariffName_search_btn
			// 
			this->TariffName_search_btn->Location = System::Drawing::Point(452, 78);
			this->TariffName_search_btn->Name = L"TariffName_search_btn";
			this->TariffName_search_btn->Size = System::Drawing::Size(113, 23);
			this->TariffName_search_btn->TabIndex = 12;
			this->TariffName_search_btn->Text = L"Tariff Name";
			this->TariffName_search_btn->UseVisualStyleBackColor = true;
			this->TariffName_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::TariffName_search_btn_Click);
			// 
			// Discount_txt_search
			// 
			this->Discount_txt_search->Location = System::Drawing::Point(281, 139);
			this->Discount_txt_search->Name = L"Discount_txt_search";
			this->Discount_txt_search->Size = System::Drawing::Size(165, 22);
			this->Discount_txt_search->TabIndex = 13;
			// 
			// Cost_txt_search
			// 
			this->Cost_txt_search->Location = System::Drawing::Point(281, 111);
			this->Cost_txt_search->Name = L"Cost_txt_search";
			this->Cost_txt_search->Size = System::Drawing::Size(165, 22);
			this->Cost_txt_search->TabIndex = 14;
			// 
			// Cost_search_btn
			// 
			this->Cost_search_btn->Location = System::Drawing::Point(452, 109);
			this->Cost_search_btn->Name = L"Cost_search_btn";
			this->Cost_search_btn->Size = System::Drawing::Size(113, 23);
			this->Cost_search_btn->TabIndex = 15;
			this->Cost_search_btn->Text = L"Cost";
			this->Cost_search_btn->UseVisualStyleBackColor = true;
			this->Cost_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::Cost_search_btn_Click);
			// 
			// Discount_search_btn
			// 
			this->Discount_search_btn->Location = System::Drawing::Point(452, 139);
			this->Discount_search_btn->Name = L"Discount_search_btn";
			this->Discount_search_btn->Size = System::Drawing::Size(113, 23);
			this->Discount_search_btn->TabIndex = 16;
			this->Discount_search_btn->Text = L"Discount";
			this->Discount_search_btn->UseVisualStyleBackColor = true;
			this->Discount_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::Discount_search_btn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(278, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Search";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(574, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Delete";
			// 
			// Id_txt_delete
			// 
			this->Id_txt_delete->Location = System::Drawing::Point(577, 79);
			this->Id_txt_delete->Name = L"Id_txt_delete";
			this->Id_txt_delete->Size = System::Drawing::Size(100, 22);
			this->Id_txt_delete->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(683, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"ID";
			// 
			// Delete_btn
			// 
			this->Delete_btn->Location = System::Drawing::Point(577, 107);
			this->Delete_btn->Name = L"Delete_btn";
			this->Delete_btn->Size = System::Drawing::Size(100, 23);
			this->Delete_btn->TabIndex = 21;
			this->Delete_btn->Text = L"Delete";
			this->Delete_btn->UseVisualStyleBackColor = true;
			this->Delete_btn->Click += gcnew System::EventHandler(this, &MainWindow::Delete_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 311);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(705, 246);
			this->dataGridView1->TabIndex = 22;
			// 
			// refresh
			// 
			this->refresh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->refresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->refresh->Location = System::Drawing::Point(653, 269);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(64, 36);
			this->refresh->TabIndex = 24;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = false;
			this->refresh->Click += gcnew System::EventHandler(this, &MainWindow::refresh_Click);
			// 
			// close_btn
			// 
			this->close_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_btn->Location = System::Drawing::Point(629, 5);
			this->close_btn->Name = L"close_btn";
			this->close_btn->Size = System::Drawing::Size(76, 38);
			this->close_btn->TabIndex = 25;
			this->close_btn->Text = L"Exit";
			this->close_btn->UseVisualStyleBackColor = true;
			this->close_btn->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// to_txt_btn
			// 
			this->to_txt_btn->Location = System::Drawing::Point(12, 282);
			this->to_txt_btn->Name = L"to_txt_btn";
			this->to_txt_btn->Size = System::Drawing::Size(75, 23);
			this->to_txt_btn->TabIndex = 27;
			this->to_txt_btn->Text = L"save";
			this->to_txt_btn->UseVisualStyleBackColor = true;
			this->to_txt_btn->Click += gcnew System::EventHandler(this, &MainWindow::to_txt_btn_Click);
			// 
			// string_sep
			// 
			this->string_sep->Location = System::Drawing::Point(12, 230);
			this->string_sep->Name = L"string_sep";
			this->string_sep->Size = System::Drawing::Size(75, 22);
			this->string_sep->TabIndex = 29;
			this->string_sep->TextChanged += gcnew System::EventHandler(this, &MainWindow::string_sep_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(93, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Separator";
			this->label9->Click += gcnew System::EventHandler(this, &MainWindow::label9_Click);
			// 
			// outputFilePath
			// 
			this->outputFilePath->Location = System::Drawing::Point(12, 258);
			this->outputFilePath->Name = L"outputFilePath";
			this->outputFilePath->Size = System::Drawing::Size(100, 22);
			this->outputFilePath->TabIndex = 32;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(118, 261);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Save point data";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(717, 557);
			this->ControlBox = false;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->outputFilePath);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->string_sep);
			this->Controls->Add(this->to_txt_btn);
			this->Controls->Add(this->close_btn);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Delete_btn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Id_txt_delete);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Discount_search_btn);
			this->Controls->Add(this->Cost_search_btn);
			this->Controls->Add(this->Cost_txt_search);
			this->Controls->Add(this->Discount_txt_search);
			this->Controls->Add(this->TariffName_search_btn);
			this->Controls->Add(this->TariffName_txt_search);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Discount_txt_add);
			this->Controls->Add(this->Cost_txt_add);
			this->Controls->Add(this->Tariff_txt_add);
			this->Controls->Add(this->CreateTable_btn);
			this->Controls->Add(this->Create_label);
			this->Controls->Add(this->Table_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainWindow";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CreateTable_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// ��������, ��� ��� ������� �������
			if (String::IsNullOrWhiteSpace(Table_txt->Text)) {
				MessageBox::Show("Please enter a valid table name.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// SQL-������� ��� �������� ����� �������
			String^ createTableQuery =
				"CREATE TABLE " +
				Table_txt->Text + " (\n" +
				"ID INT PRIMARY KEY IDENTITY,\n" +
				"TariffName NVARCHAR(50) NOT NULL,\n" +
				"Cost DECIMAL(18, 2) NOT NULL,\n" +  // ��������� � ���������� ���������� ��������
				"Discount NVARCHAR(50),\n" +         // ������ ����� ���� ������������� ��� � ���������
				"CostWithDiscount DECIMAL(18, 2) NOT NULL\n" + // ���� � ������ ������, ���������� ��������
				");";

			// ���������� �������
			SqlCommand^ sqlCommand = gcnew SqlCommand(createTableQuery, connection);
			sqlCommand->ExecuteNonQuery();
			MessageBox::Show("Table created successfully.",
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		catch (SqlException^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Table_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: void RefreshDataGridView(DataGridView^ dataGridView)
	{
		try
		{
			// SQL command to select data
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter("SELECT ID, TariffName, Cost, Discount, CostWithDiscount FROM " + Table_txt->Text, connection);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			// Set the DataSource for the DataGridView
			dataGridView->DataSource = dataTable;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// ��������� � �������� �������� Cost
			double cost = Convert::ToDouble(Cost_txt_add->Text);
			if (cost < 1) {
				MessageBox::Show("The cost cannot be less than 1.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// ��������� � �������� �������� Discount
			String^ discountInput = Discount_txt_add->Text->Trim();
			double discountValue;
			double costWithDiscount;
			bool isPercentage = false;

			if (discountInput->EndsWith("%")) {
				// ��������� ���������� ������
				isPercentage = true;
				String^ percentageValue = discountInput->Substring(0, discountInput->Length - 1);
				discountValue = Convert::ToDouble(percentageValue);

				if (discountValue < 0 || discountValue > 100) {
					MessageBox::Show("Percentage discount must be between 0% and 100%.",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}

				// ������������ ���� � ������ ���������� ������
				costWithDiscount = cost - (cost * discountValue / 100);
			}
			else {
				// ��������� ������������� ������
				discountValue = Convert::ToDouble(discountInput);

				if (discountValue > cost) {
					MessageBox::Show("Fixed discount cannot be greater than the cost.",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}

				// ������������ ���� � ������ ������������� ������
				costWithDiscount = cost - discountValue;
			}

			// ���������� ���� � ������ ������ �� 2 ������ ����� �������
			costWithDiscount = Math::Round(costWithDiscount, 2);

			// ���������� ������� ��� ������� ������
			String^ insertQuery = "INSERT INTO " + Table_txt->Text + " (TariffName, Cost, Discount, CostWithDiscount) VALUES (@TariffName, @Cost, @Discount, @CostWithDiscount);";
			SqlCommand^ sqlCommand = gcnew SqlCommand(insertQuery, connection);

			// ���������� ����������
			sqlCommand->Parameters->AddWithValue("@TariffName", Tariff_txt_add->Text);
			sqlCommand->Parameters->AddWithValue("@Cost", cost);
			sqlCommand->Parameters->AddWithValue("@Discount", discountInput); // ��������� ��� ������� �������������
			sqlCommand->Parameters->AddWithValue("@CostWithDiscount", costWithDiscount); // ��������� ���� � ������ ������

			// ���������� �������
			sqlCommand->ExecuteNonQuery();
			MessageBox::Show("Data added successfully.",
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			// ��������� �������
			RefreshDataGridView(dataGridView1);

			// ������� ���� �����
			Tariff_txt_add->Text = "";
			Cost_txt_add->Text = "";
			Discount_txt_add->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error has occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}

	private: System::Void TariffName_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// ���������� ������� ������
			String^ searchQuery = "SELECT ID, TariffName, Cost, Discount, CostWithDiscount FROM " + Table_txt->Text +
				" WHERE TariffName LIKE @SearchValue;";
			SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
			sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + TariffName_txt_search->Text + "%");

			// ���������� ������� � ���������� ������� ������������
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			// �������� ����������� ������ � DataGridView
			dataGridView1->DataSource = dataTable;

			// ������� ���� ������
			TariffName_txt_search->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}


	private: System::Void Cost_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// ��������� �������� ��� ������
			String^ searchValue = Cost_txt_search->Text->Trim();

			// �������� �� ������ ����
			if (String::IsNullOrWhiteSpace(searchValue)) {
				MessageBox::Show("Please enter a cost value to search.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// ��������, �������� �� �������� �������� ������
			double costValue;
			if (!Double::TryParse(searchValue, costValue)) {
				MessageBox::Show("Please enter a valid numeric value for cost.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// ���������� ������� ������
			String^ searchQuery = "SELECT ID, TariffName, Cost, Discount, CostWithDiscount FROM " + Table_txt->Text +
				" WHERE Cost = @SearchValue OR CostWithDiscount = @SearchValue;"; // �������� ����� �� ����� �����
			SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
			sqlCommand->Parameters->AddWithValue("@SearchValue", costValue);

			// ���������� ������� � ���������� ������� ������������
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			// �������� ����������� ������ � DataGridView
			dataGridView1->DataSource = dataTable;

			// ������� ���� ������
			Cost_txt_search->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}

	private: System::Void Discount_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// ��������� �������� ��� ������
			String^ searchValue = Discount_txt_search->Text->Trim();

			// �������� �� ������ ����
			if (String::IsNullOrWhiteSpace(searchValue)) {
				MessageBox::Show("Please enter a discount value to search.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// ���������� ������� ������
			String^ searchQuery;

			// ���������, �������� �� ������ ���������� (���� ������������� �� %)
			if (searchValue->EndsWith("%")) {
				// ������� ������ "%" ��� ������� ������
				String^ percentageValue = searchValue->Substring(0, searchValue->Length - 1);

				// ���������, �������� �� �������� �������� ������
				double discountPercentage;
				if (!Double::TryParse(percentageValue, discountPercentage) || discountPercentage < 0 || discountPercentage > 100) {
					MessageBox::Show("Please enter a valid percentage discount (0% to 100%).",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}

				// SQL-������ ��� ���������� ������ (����� �� ���������� ������������� ������)
				searchQuery = "SELECT ID, TariffName, Cost, Discount, CostWithDiscount FROM " + Table_txt->Text +
					" WHERE Discount LIKE @SearchValue;";
			}
			else {
				// ���������, �������� �� �������� ������ ������ ��� ������������� ������
				double fixedDiscount;
				if (!Double::TryParse(searchValue, fixedDiscount) || fixedDiscount < 0) {
					MessageBox::Show("Please enter a valid fixed discount (greater than or equal to 0).",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}

				// SQL-������ ��� ������������� ������
				searchQuery = "SELECT ID, TariffName, Cost, Discount, CostWithDiscount FROM " + Table_txt->Text +
					" WHERE Discount = @SearchValue;";
			}

			// ���������� ������� SQL
			SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);

			// ��� ���������� ������ ���� ��� ������ � % (�������� "50%"), � ��� ������������� �������� ��� �����
			if (searchValue->EndsWith("%")) {
				sqlCommand->Parameters->AddWithValue("@SearchValue", searchValue);
			}
			else {
				sqlCommand->Parameters->AddWithValue("@SearchValue", Convert::ToDouble(searchValue));
			}

			// ���������� ������� � ���������� ������� ������������
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			// �������� ����������� ������ � DataGridView
			dataGridView1->DataSource = dataTable;

			// ������� ���� ������
			Discount_txt_search->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void Delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// �������� �� ������ ����
			String^ idValue = Id_txt_delete->Text->Trim();
			if (String::IsNullOrWhiteSpace(idValue)) {
				MessageBox::Show("Please enter a valid ID to delete.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// ��������, �������� �� �������� �������� ������
			int id;
			if (!Int32::TryParse(idValue, id)) {
				MessageBox::Show("The ID must be a valid numeric value.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// ������������� ��������
			if (MessageBox::Show("Are you sure you want to delete the record with ID: " + id + "?",
				"Confirm Deletion",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::No) {
				return;
			}

			// ���������� ������� SQL ��� �������� ������������� ������
			String^ checkQuery = "SELECT COUNT(*) FROM " + Table_txt->Text + " WHERE ID = @ID;";
			SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
			checkCommand->Parameters->AddWithValue("@ID", id);

			// ���������� ������� ��� �������� ������������� ������
			int count = (int)checkCommand->ExecuteScalar();
			if (count == 0) {
				MessageBox::Show("No record found with the specified ID.",
					"Info",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
				return;
			}

			// ���������� ������� SQL ��� ��������
			String^ deleteQuery = "DELETE FROM " + Table_txt->Text + " WHERE ID = @ID;";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@ID", id);

			// ���������� �������
			int rowsAffected = deleteCommand->ExecuteNonQuery();
			if (rowsAffected > 0) {
				MessageBox::Show("Record deleted successfully.",
					"Success",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No record found with the specified ID.",
					"Info",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}

			// ���������� ����������� ������
			RefreshDataGridView(dataGridView1);

			// ������� ���� �����
			Id_txt_delete->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDataGridView(dataGridView1);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void to_txt_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// �������� �� ������ ���� ��� �����
			if (String::IsNullOrWhiteSpace(outputFilePath->Text)) {
				MessageBox::Show("Please specify a valid file path for exporting data.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// �������� ������������� �������
			if (String::IsNullOrWhiteSpace(Table_txt->Text)) {
				MessageBox::Show("Please specify a valid table name.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// SQL-������ ��� ��������� ���� ������ �� ������� � ����������� ��������� � ������ ������
			String^ query = "SELECT ID, TariffName, Cost, Discount, " +
				"CASE " +
				"  WHEN Discount LIKE '%%' THEN Cost * (1 - CAST(SUBSTRING(Discount, 0, LEN(Discount) - 1) AS FLOAT) / 100) " + // ���������� ������
				"  ELSE Cost - CAST(Discount AS INT) " + // ������������� ������
				"END AS CostWithDiscount " +
				"FROM " + Table_txt->Text;

			SqlCommand^ command = gcnew SqlCommand(query, connection);
			SqlDataReader^ reader = command->ExecuteReader();

			// �������� ������� ������
			if (!reader->HasRows) {
				MessageBox::Show("No data found in the table to export.",
					"Info",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
				reader->Close();
				return;
			}

			// �������� ����� ��� ������
			StreamWriter^ writer = gcnew StreamWriter(outputFilePath->Text);

			// ������ ���������� (����� ��������)
			for (int i = 0; i < reader->FieldCount; i++) {
				writer->Write(reader->GetName(i));
				if (i < reader->FieldCount - 1)
					writer->Write(string_sep->Text);
			}
			writer->WriteLine();

			// ������ ������ �� �������
			while (reader->Read()) {
				for (int i = 0; i < reader->FieldCount; i++) {
					writer->Write(reader->GetValue(i)->ToString());
					if (i < reader->FieldCount - 1)
						writer->Write(string_sep->Text);
				}
				writer->WriteLine();
			}

			// �������� ��������
			writer->Close();
			reader->Close();

			MessageBox::Show("Data exported successfully to: " + outputFilePath->Text,
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		catch (IOException^ ioEx) {
			MessageBox::Show("File error: " + ioEx->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (SqlException^ sqlEx) {
			MessageBox::Show("Database error: " + sqlEx->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void string_sep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void box_sep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void to_csv_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlDataReader^ reader = nullptr;
		try
		{
			// ��������� ������� ������ � Table_txt � outputFilePath
			if (String::IsNullOrWhiteSpace(Table_txt->Text) || String::IsNullOrWhiteSpace(outputFilePath->Text))
			{
				MessageBox::Show("The table name or path to save the file is not specified.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// SQL-������ ��� ��������� ���� ������ �� �������
			String^ query = "SELECT * FROM [" + Table_txt->Text + "]"; // ���������� ���������� ������ ��� ����� �������
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// ��������� ������ � ��������� DataReader
			reader = command->ExecuteReader();

			// �������� ����� ��� ������
			StreamWriter^ writer = gcnew StreamWriter(outputFilePath->Text);

			// ������ ���������� (����� ��������)
			for (int i = 0; i < reader->FieldCount; i++)
			{
				String^ columnName = reader->GetName(i);

				// ����������� ��� ������� � �������, ���� ��� �������� �����������
				if (columnName->Contains(string_sep->Text))
				{
					columnName = "\"" + columnName + "\"";
				}
				writer->Write(columnName);

				if (i < reader->FieldCount - 1)
					writer->Write(string_sep->Text); // �����������
			}
			writer->WriteLine();

			// ������ ������ �� �������
			while (reader->Read())
			{
				for (int i = 0; i < reader->FieldCount; i++)
				{
					Object^ value = reader->GetValue(i);

					// ���� �������� NULL, ���������� ������ ������
					String^ valueStr = (value == DBNull::Value) ? "" : value->ToString();

					// ������������� ������� � ��������
					if (valueStr->Contains("\""))
					{
						valueStr = "\"" + valueStr->Replace("\"", "\"\"") + "\"";
					}

					// ����������� �������� � �������, ���� ��� �������� �����������
					if (valueStr->Contains(string_sep->Text))
					{
						valueStr = "\"" + valueStr + "\"";
					}
					writer->Write(valueStr);

					if (i < reader->FieldCount - 1)
						writer->Write(string_sep->Text); // �����������
				}
				writer->WriteLine();
			}

			// �������� ��������
			writer->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			// �����������, ��� DataReader ������
			if (reader != nullptr && !reader->IsClosed)
			{
				reader->Close();
			}
		}
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
#endif // MAINWINDOW_H